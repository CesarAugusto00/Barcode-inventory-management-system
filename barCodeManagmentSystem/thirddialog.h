#ifndef THIRDDIALOG_H
#define THIRDDIALOG_H

#include <QDialog>

namespace Ui {
class ThirdDialog;
}

class ThirdDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ThirdDialog(QWidget *parent = nullptr);
    ~ThirdDialog();

private slots:


    void on_lineEdit3_returnPressed();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ThirdDialog *ui;
};

#endif // THIRDDIALOG_H
