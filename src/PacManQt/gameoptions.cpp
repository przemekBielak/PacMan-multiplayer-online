#include "gameoptions.h"
#include "ui_gameoptions.h"
#include <QDebug>
#include <QStackedWidget>

extern QStackedWidget* stackedWidget;

gameOptions::gameOptions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gameOptions)
{
    ui->setupUi(this);
}

gameOptions::~gameOptions()
{
    delete ui;
}



void gameOptions::on_pushButtonClient_clicked()
{
    emit setActiveWidget(GAME_OPTION_WIDGET);
}

void gameOptions::on_pushButtonServer_clicked()
{
    emit setActiveWidget(GAME_WIDGET);
}