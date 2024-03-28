#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QGraphicsScene>
#include <QPixmap>
#include <QPointer>
#include <form.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//void MainWindow::on_pushButton_clicked()
//{
//    QString path ;
//    QPointer<QGraphicsScene> scene1 = new QGraphicsScene;

//    path = QFileDialog::getOpenFileName(this,"选择图片","../",tr("images(*.png *jpeg *bmp)"));
//    if(path.isEmpty()){
//        QMessageBox::warning(this, "Warning!", "Failed to open the image!");
//    }
//    else{
//        ui->lineEdit->setText(path);
//        ui->graphicsView->setViewportUpdateMode(QGraphicsView::FullViewportUpdate);
//        scene1->addPixmap(QPixmap(path));
//        ui->graphicsView->setScene(scene1);
//        ui->graphicsView->show();
//        ui->graphicsView->fitInView(scene1->sceneRect(), Qt::KeepAspectRatio);
//    }
//}


//void MainWindow::on_pushButton_3_clicked()
//{
//    QString path;
//    QPointer<QGraphicsScene> scene2 = new QGraphicsScene;

//    path = QFileDialog::getOpenFileName(this,"选择图片","../",tr("images(*.png *jpeg *bmp)"));
//    if(path.isEmpty()){
//        QMessageBox::warning(this, "Warning!", "Failed to open the image!");
//    }
//    else{
//        ui->lineEdit_2->setText(path);
//        ui->graphicsView_2->setViewportUpdateMode(QGraphicsView::FullViewportUpdate);
//        scene2->addPixmap(QPixmap(path));
//        ui->graphicsView_2->setScene(scene2);
//        ui->graphicsView_2->show();
//        ui->graphicsView_2->fitInView(scene2->sceneRect(), Qt::KeepAspectRatio);
//    }
//}


//void MainWindow::on_pushButton_2_clicked()
//{
//    QString path;

//    path = QFileDialog::getSaveFileName(this, tr("文件保存在"), tr("../demo.png"), tr("images(*.png *jpeg *bmp)"));
//    ui->lineEdit_3->setText(path);
//}


//void MainWindow::on_pushButton_4_clicked()
//{
//    QString path;
//    QPointer<QGraphicsScene> scene = new QGraphicsScene;

//    if(ui->lineEdit_3->text().isEmpty()){
//        QMessageBox::warning(this, "Warning!", "The save path is empty!");
//    }else{
//        path = ui->lineEdit_3->text();
//        QPixmap pixmap = QPixmap(ui->graphicsView->size());
//        pixmap = ui->graphicsView->grab();
//        pixmap.save(path);
//        QPointer<Form> newForm = new Form(path);
//        newForm->show();
//    }
//}


//void MainWindow::on_lineEdit_3_textChanged(const QString &arg1)
//{
//    if(ui->lineEdit_3->text().isEmpty()) {
//        ui->pushButton_4->setEnabled(false);
//    }else{
//        ui->pushButton_4->setEnabled(true);
//    }
//}


void MainWindow::on_mix_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_cut_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_change_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_backup_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

