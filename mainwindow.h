#pragma once

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE
/// @brief that function Main window
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
//main window functions
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
//ui
    Ui::MainWindow *ui;
private slots:
//
// set uncryption clicked
    void on_uncryption_clicked();
//set cription mode
    void on_crypto_clicked();
};
