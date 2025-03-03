#include "fourthdialog.h"
#include "ui_fourthdialog.h"
#include "wine.h"
#include "UpdateValuesInVector3.h"
#include "fillValues3.h"

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

vector<wine> inventory3;

FourthDialog::FourthDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FourthDialog)
{

    ui->setupUi(this);

    //fill vector and prepare to show up
    fillVector3(inventory3);
    updateVals3(inventory3);


    //this part sets up the table to show the values

    ui->table->setColumnCount(4);


    //Get the number of rows the rable will need

    int rowsIn=0;

    for(vector<wine>::iterator iter = begin(inventory3); iter != end(inventory3); ++iter){
        if(0 < (*iter).amount){
            rowsIn += 1;
        }
    }

    //Set the rows in the table for the information
    for(int i = 0; i < rowsIn ; ++i){
        ui->table->insertRow(1);
    }

    //Note that the list start at 0,0 and you need to start filling the values according the vector

    //val keeps track for the rows in the table
    int val=0;
    for(vector<wine>::iterator iter = begin(inventory3); iter != end(inventory3); ++iter){
        if(0 < (*iter).amount){
            for(int o=0; o<4 ;++o ){
                //MIGHT CAUSE A LOT OF SPACE IN THE DATA
                //Need to cut to just one statement as velow but need an if to check if is a val or not
                QString name = QString::fromStdString((*iter).brand);
                ui->table->setItem(0,0, new QTableWidgetItem(name));
                ui->table->item(0,0)->setTextAlignment(Qt::AlignCenter);

                name = QString::fromStdString((*iter).varietal);
                ui->table->setItem(0,1, new QTableWidgetItem(name));
                ui->table->item(0,1)->setTextAlignment(Qt::AlignCenter);

                name = QString::fromStdString((*iter).volume);
                ui->table->setItem(0,2, new QTableWidgetItem(name));
                ui->table->item(0,2)->setTextAlignment(Qt::AlignCenter);

                string NumericalValToString = to_string((*iter).amount);
                name = QString::fromStdString(NumericalValToString);
                ui->table->setItem(0,3, new QTableWidgetItem(name));
                ui->table->item(0,3)->setTextAlignment(Qt::AlignCenter);
            }

        }
    }



    //this one resize the table to the text
    ui->table->resizeColumnToContents(1);


}

FourthDialog::~FourthDialog()
{
    delete ui;
}
