#include "secdialog.h"
#include "ui_secdialog.h"
#include "fillValues.h"
#include "UpdateValuesInVector.h"

#include "wine.h"
#include <iostream>
#include <string>
#include <QMessageBox>

using namespace std;

vector<wine> inventory;

//NOTE THAT THE VECTOR SHOULD BE FILLED IN THE CONSTRUCTOR WITH THE TXT DATA AND UNFILLED IN THE DESTRUCTOR AND UPLOAD THE DATA

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);

    fillVector(inventory);
    cout << "Success while uploading values" << endl;
    updateVals(inventory);
    cout << "Succesfully updated the values" << endl;
}

SecDialog::~SecDialog()
{
    //Not good idea because it only executes this only when the program is complately closed

    //cout << "Here will be the updated file before closing it" << endl;
    delete ui;
}

void SecDialog::on_lineEdit_returnPressed()
{
    using namespace std;
    QString code = ui->lineEdit->text();
    ui->lineEdit->clear();
    string codeC = code.toStdString();
    addId(codeC, inventory);
}



void SecDialog::on_pushButton_clicked()
{
    updateList(inventory);
    cout << "Successfully updated" << endl;
    //HERE MUST BE TO CLOSE THE PROGARM AS WELL

    //ALSO MUST NEED TO CLEAR THE VECTOR TO ELIMINATE THE DYNAMICALLY CREATED INFORMATION
}


void SecDialog::on_pushButton_2_clicked()
{
    cout << endl << endl;
    for(vector<wine>::iterator iter = begin(inventory); iter != end(inventory); ++iter){
        cout << (*iter).brand << " " << (*iter).varietal << " " << (*iter).amount << endl;
    }

}

