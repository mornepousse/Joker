#ifndef TEXTDIALOG_H
#define TEXTDIALOG_H

#include <QDialog>
#include "PhStrip/PhStripDoc.h"

namespace Ui {
class TextDialog;
}

class TextDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TextDialog(QWidget *parent, PhStripDoc *doc, PhTime currentTime);
    ~TextDialog();

    QString content() const;
    PhPeople* people() const;
    PhTime timeIn() const;
    PhTime timeOut() const;
    int track() const;

    void setText(PhStripText *text);

private slots:
    void on_comboCharacter_currentIndexChanged(int index);

private:
    Ui::TextDialog *ui;
    PhStripDoc *_doc;
    PhTimeCodeType _tcType;
};

#endif // TEXTDIALOG_H