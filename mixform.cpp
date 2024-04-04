#include "mixform.h"
#include "ui_mixform.h"
#include <QGraphicsScene>
#include <QPixmap>
#include <QPointer>
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>

MixForm::MixForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MixForm)
{
    ui->setupUi(this);
}

MixForm::~MixForm()
{
    delete ui;
}

void MixForm::on_src_b_1_clicked()
{
    QString path ;
    QPointer<QGraphicsScene> scene1 = new QGraphicsScene;
    path = QFileDialog::getOpenFileName(this,"选择图片","../",tr("images(*.png *jpeg *bmp)"));
    if(path.isEmpty()){
            QMessageBox::warning(this, "Warning!", "Failed to open the image!");
        }
        else{
            ui->src_p_1->setText(path);
            ui->src_g_1->setViewportUpdateMode(QGraphicsView::FullViewportUpdate);
            scene1->addPixmap(QPixmap(path));
            ui->src_g_1->setScene(scene1);
            ui->src_g_1->show();
            ui->src_g_1->fitInView(scene1->sceneRect(), Qt::KeepAspectRatio);
        }
}


void MixForm::on_src_b_2_clicked()
{
    QString path ;
    QPointer<QGraphicsScene> scene1 = new QGraphicsScene;
    path = QFileDialog::getOpenFileName(this,"选择图片","../",tr("images(*.png *jpeg *bmp)"));
    if(path.isEmpty()){
            QMessageBox::warning(this, "Warning!", "Failed to open the image!");
        }
        else{
            ui->src_p_2->setText(path);
            ui->src_g_2->setViewportUpdateMode(QGraphicsView::FullViewportUpdate);
            scene1->addPixmap(QPixmap(path));
            ui->src_g_2->setScene(scene1);
            ui->src_g_2->show();
            ui->src_g_2->fitInView(scene1->sceneRect(), Qt::KeepAspectRatio);
        }
}


void MixForm::on_out_save_p_textChanged(const QString &arg1)
{
    if(ui->out_save_p->text().isEmpty()) {
            ui->mix_b->setEnabled(false);
        }else{
            ui->mix_b->setEnabled(true);
        }
}


void MixForm::on_out_save_b_clicked()
{
    QString path;

    path = QFileDialog::getSaveFileName(this, tr("文件保存在"), tr("../demo.png"), tr("images(*.png *jpeg *bmp)"));
    ui->out_save_p->setText(path);
}


void MixForm::on_mix_b_clicked()
{
    QString path;
       QPointer<QGraphicsScene> scene = new QGraphicsScene;

       if(ui->out_save_p->text().isEmpty()){
           QMessageBox::warning(this, "Warning!", "The save path is empty!");
       }else{
           path = ui->out_save_p->text();
           QPixmap pixmap = QPixmap(ui->src_g_2->size());
           pixmap = ui->src_g_2->grab();
           pixmap.save(path);
           scene->addPixmap(pixmap);
           ui->out_g->setScene(scene);
           ui->out_g->show();
           ui->out_g->fitInView(scene->sceneRect(), Qt::KeepAspectRatio);
       }
}

