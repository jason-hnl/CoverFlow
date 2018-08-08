#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CoverFlow.h"

class CoverFlowMW : public QMainWindow
{
    Q_OBJECT

public:

    static CoverFlowMW& getInstance()
    {
        static CoverFlowMW instance;
        return instance;
    }

private:
    CoverFlowMW(QWidget *parent = Q_NULLPTR);
    ~CoverFlowMW();

private:
    Ui::CoverFlowClass ui;
};
