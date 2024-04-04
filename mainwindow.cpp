#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPointer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPointer<MixForm> mixform = new MixForm();
    ui->stackedWidget->addWidget(mixform);
}

MainWindow::~MainWindow()
{
    delete ui;    
}


void MainWindow::on_listWidget_currentRowChanged(int currentRow)
{
    qDebug() << "页面：" << currentRow;
    if(currentRow == 0){
        QPointer<MixForm> mixform = new MixForm();
        ui->stackedWidget->insertWidget(0, mixform);
        ui->stackedWidget->setCurrentIndex(0);
    }else if(currentRow == 1){
        QPointer<CutForm> cutform = new CutForm();
        ui->stackedWidget->insertWidget(0, cutform);
        ui->stackedWidget->setCurrentIndex(0);
    }
    else if(currentRow == 2){
        QPointer<CheckForm> checkform = new CheckForm();
        ui->stackedWidget->insertWidget(0, checkform);
        ui->stackedWidget->setCurrentIndex(0);
    }
    else if(currentRow == 3){
        QPointer<BackupForm> backupform = new BackupForm();
        ui->stackedWidget->insertWidget(0, backupform);
        ui->stackedWidget->setCurrentIndex(0);
    }
    qDebug() << "页面索引总数: " << ui->stackedWidget->count();
}


void MainWindow::on_stackedWidget_currentChanged(int arg1)
{
    if(ui->stackedWidget->count() > 4)
    {
    for(int item = ui->stackedWidget->count(); item >=0; item--)
        if(item != arg1){
            QWidget* widget = ui->stackedWidget->widget(item);
            ui->stackedWidget->removeWidget(widget);
            widget->deleteLater();
        }
    }
}

