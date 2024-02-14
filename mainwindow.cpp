#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    for(const QCameraInfo &infor :QCameraInfo::availableCameras())
    {
        qDebug()<<infor.description();
    }
    M_Camera.reset(new QCamera(QCameraInfo::defaultCamera()));
    M_Camera->setViewfinder(ui->widget_Camera_View);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Start_Camera()
{
    M_Camera->start();
}

void MainWindow::Stop_Camera()
{
    M_Camera->stop();
}


void MainWindow::on_pushButton_Start_Camera_clicked()
{
    Start_Camera();
}


void MainWindow::on_pushButton_Stop_Camera_clicked()
{
    Stop_Camera();
}

