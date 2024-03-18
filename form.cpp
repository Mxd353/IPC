#include "form.h"
#include "ui_form.h"
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QGraphicsScene>
#include <QPixmap>
#include <QPointer>

Form::Form(const QString& path, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    QPointer<QGraphicsScene> scene = new QGraphicsScene;
    scene->addPixmap(QPixmap(path));
    ui->graphicsView->setScene(scene);
    ui->graphicsView->show();
}

Form::~Form()
{
    delete ui;
}
