#include "TextDialog.h"
#include "ui_TextDialog.h"
#include "PhStrip/PhStripText.h"

TextDialog::TextDialog(QWidget *parent, PhStripDoc *doc, PhTime currentTime) :
    QDialog(parent),
    ui(new Ui::TextDialog),
    _doc(doc),
    _tcType(doc->videoTimeCodeType())
{
    ui->setupUi(this);

    // Populate characters
    foreach(PhPeople *people, _doc->peoples()) {
        ui->comboCharacter->addItem(people->name(), QVariant::fromValue((void*)people));
    }

    // Initialize times
    // Default duration 2 seconds (1 sec = 24000 ticks)
    ui->editTimeIn->setTime(currentTime, _tcType);
    ui->editTimeOut->setTime(currentTime + 48000, _tcType);

    if (ui->comboCharacter->count() > 0) {
        on_comboCharacter_currentIndexChanged(0);
    }
}

TextDialog::~TextDialog()
{
    delete ui;
}

QString TextDialog::content() const
{
    return ui->editContent->text();
}

PhPeople* TextDialog::people() const
{
    return (PhPeople*)ui->comboCharacter->currentData().value<void*>();
}

PhTime TextDialog::timeIn() const
{
    return ui->editTimeIn->time();
}

PhTime TextDialog::timeOut() const
{
    return ui->editTimeOut->time();
}

int TextDialog::track() const
{
    return ui->spinTrack->value();
}

void TextDialog::on_comboCharacter_currentIndexChanged(int index)
{
    Q_UNUSED(index);
    PhPeople* p = people();
    if (p) {
        QList<PhStripText*> texts = _doc->texts(p);
        if (!texts.isEmpty()) {
            float y = texts.first()->y();
            int track = qRound(y * 5.0f);
            ui->spinTrack->setValue(track);
        } else {
             int peopleIndex = _doc->peoples().indexOf(p);
             ui->spinTrack->setValue(peopleIndex % 5);
        }
    }
}

void TextDialog::setText(PhStripText *text)
{
    if (!text) return;
    ui->editContent->setText(text->content());
    ui->editTimeIn->setTime(text->timeIn(), _tcType);
    ui->editTimeOut->setTime(text->timeOut(), _tcType);

    int index = ui->comboCharacter->findData(QVariant::fromValue((void*)text->people()));
    if (index != -1) {
        ui->comboCharacter->setCurrentIndex(index);
    }

    ui->spinTrack->setValue(qRound(text->y() * 5.0f));
}
