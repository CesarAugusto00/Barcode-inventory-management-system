#ifndef FOURTHDIALOG_H
#define FOURTHDIALOG_H

#include <QDialog>

namespace Ui {
class FourthDialog;
}

class FourthDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FourthDialog(QWidget *parent = nullptr);
    ~FourthDialog();

private:
    Ui::FourthDialog *ui;
};

#endif // FOURTHDIALOG_H
