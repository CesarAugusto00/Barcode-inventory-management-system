#include "thirddialog.h"
#include "ui_thirddialog.h"
#include "fillValues2.h"
#include "UpdateValuesInVector2.h"
#include "wine.h"


#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<wine> inventory2;

ThirdDialog::ThirdDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThirdDialog)
{
    ui->setupUi(this);

    fillVector2(inventory2);
    cout << "Success while uploading values" << endl;
    updateVals2(inventory2);
    cout << "Succesfully updated the values" << endl;
}

ThirdDialog::~ThirdDialog()
{
    delete ui;
}


void ThirdDialog::on_lineEdit3_returnPressed()
{

    QString codeThird = ui->lineEdit3->text();
    ui->lineEdit3->clear();
    string codeCThird = codeThird.toStdString();
    removeId(codeCThird, inventory2);


}


void ThirdDialog::on_pushButton_clicked()
{
    // print vals
    cout << endl << endl;
    for(vector<wine>::iterator iter = begin(inventory2); iter != end(inventory2); ++iter){
        cout << (*iter).brand << " " << (*iter).varietal << " " << (*iter).amount << endl;
    }
}


void ThirdDialog::on_pushButton_2_clicked()
{
    updateList2(inventory2);
    cout << "The list was succesfully updated" << endl;
}

