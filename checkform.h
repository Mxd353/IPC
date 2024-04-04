#ifndef CHECKFORM_H
#define CHECKFORM_H

#include <QWidget>

namespace Ui {
class CheckForm;
}

class CheckForm : public QWidget
{
    Q_OBJECT

public:
    explicit CheckForm(QWidget *parent = nullptr);
    ~CheckForm();

private:
    Ui::CheckForm *ui;
};

#endif // CHECKFORM_H
