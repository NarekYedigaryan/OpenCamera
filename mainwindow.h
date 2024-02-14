#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QMultimedia>
#include <QtMultimediaWidgets>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Start_Camera_clicked();

    void on_pushButton_Stop_Camera_clicked();

private:
    void Start_Camera();
    void Stop_Camera();

private:
    Ui::MainWindow *ui;
    QScopedPointer<QCamera> M_Camera;
};
#endif // MAINWINDOW_H
