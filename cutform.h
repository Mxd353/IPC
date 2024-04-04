#ifndef CUTFORM_H
#define CUTFORM_H

#include <QWidget>

namespace Ui {
class CutForm;
}

class CutForm : public QWidget
{
    Q_OBJECT

public:
    explicit CutForm(QWidget *parent = nullptr);
    ~CutForm();

private slots:
    void on_src_b_clicked();

    void on_src_p_textChanged(const QString &arg1);

    void on_cut_b_clicked();

private:
    Ui::CutForm *ui;
};

#endif // CUTFORM_H
