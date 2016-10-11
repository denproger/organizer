#ifndef EYESRELAXWIDGET_H
#define EYESRELAXWIDGET_H

#include <QWidget>

namespace Ui {
class EyesRelaxWidget;
}

class EyesRelaxWidget : public QWidget
{
    Q_OBJECT

public:
    explicit EyesRelaxWidget(QWidget *parent = 0);
    ~EyesRelaxWidget();

private:
    Ui::EyesRelaxWidget *ui;
};

#endif // EYESRELAXWIDGET_H
