#include "backupform.h"
#include "ui_backupform.h"
#include <QPointer>

BackupForm::BackupForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BackupForm)
{
    ui->setupUi(this);
    QPointer<HistoryForm> historyItem = new HistoryForm;
    QListWidgetItem* pItem = new QListWidgetItem();
    pItem->setSizeHint(QSize(650, 80));
    ui->listWidget->addItem(pItem);
    ui->listWidget->setItemWidget(pItem, historyItem);
}

BackupForm::~BackupForm()
{
    delete ui;
}
