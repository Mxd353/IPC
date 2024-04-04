#ifndef BACKUPFORM_H
#define BACKUPFORM_H

#include <QWidget>
#include "historyform.h"

namespace Ui {
class BackupForm;
}

class BackupForm : public QWidget
{
    Q_OBJECT

public:
    explicit BackupForm(QWidget *parent = nullptr);
    ~BackupForm();

private:
    Ui::BackupForm *ui;
};

#endif // BACKUPFORM_H
