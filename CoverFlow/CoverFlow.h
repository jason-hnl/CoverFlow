#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CoverFlow.h"

class CoverFlow : public QMainWindow
{
    Q_OBJECT

public:
    CoverFlow(QWidget *parent = Q_NULLPTR);

private:
    Ui::CoverFlowClass ui;
};
