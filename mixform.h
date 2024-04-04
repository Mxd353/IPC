#ifndef MIXFORM_H
#define MIXFORM_H

#include <QWidget>

namespace Ui {
class MixForm;
}

class MixForm : public QWidget
{
    Q_OBJECT

public:
    explicit MixForm(QWidget *parent = nullptr);
    ~MixForm();

private slots:
    void on_src_b_1_clicked();

    void on_src_b_2_clicked();

    void on_out_save_p_textChanged(const QString &arg1);

    void on_out_save_b_clicked();

    void on_mix_b_clicked();

private:
    Ui::MixForm *ui;
};

#endif // MIXFORM_H
