//includes
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math/setToQstring.h"
//constractor with ui
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

//destractor
MainWindow::~MainWindow()
{
    delete ui;
}
//that effect on change statment
void MainWindow::on_uncryption_clicked()
{
        //edit uncryption by is ui->uncryption->text()=="cryption" its mean statment is cryptin
        ui->uncryption->setText((ui->uncryption->text()=="cryption")? "uncryption":"cryption");
}
//
void MainWindow::on_crypto_clicked()
{ 
    //set conidion if is cryption
    if(ui->uncryption->text()=="cryption")
    {
        //
        ui->text_->setText(transform(uncrypt(transform(ui->textR->text()))));
    }
    else
    {
        ui->text_->setText(transform(crypt(transform(ui->textR->text()))));
    }
    
}