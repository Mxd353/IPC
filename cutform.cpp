#include "cutform.h"
#include "ui_cutform.h"
#include <QGraphicsScene>
#include <QPixmap>
#include <QPointer>
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>

CutForm::CutForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CutForm)
{
    ui->setupUi(this);
}

CutForm::~CutForm()
{
    delete ui;
}
void CutForm::on_src_b_clicked()
{
    QString path ;
    QPointer<QGraphicsScene> scene1 = new QGraphicsScene;
    path = QFileDialog::getOpenFileName(this,"选择图片","../",tr("images(*.png *jpeg *bmp)"));
    if(path.isEmpty()){
            QMessageBox::warning(this, "Warning!", "Failed to open the image!");
        }
        else{
            ui->src_p->setText(path);
            ui->src_g->setViewportUpdateMode(QGraphicsView::FullViewportUpdate);
            scene1->addPixmap(QPixmap(path));
            ui->src_g->setScene(scene1);
            ui->src_g->show();
            ui->src_g->fitInView(scene1->sceneRect(), Qt::KeepAspectRatio);
        }
}


void CutForm::on_src_p_textChanged(const QString &arg1)
{
    if(ui->src_p->text().isEmpty()) {
            ui->cut_b->setEnabled(false);
        }else{
            ui->cut_b->setEnabled(true);
        }
}


void CutForm::on_cut_b_clicked()
{

}

