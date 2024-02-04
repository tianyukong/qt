#ifndef REGIT_H
#define REGIT_H

#include <QWidget>

namespace Ui {
class regit;
}

class regit : public QWidget
{
    Q_OBJECT

public:
    explicit regit(QWidget *parent = nullptr);
    ~regit();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::regit *ui;
};

#endif // REGIT_H
