#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

        void generateCoins();
    void GenerateCoins3(QString,int length,int total);
    void combinationUtil(QString arr, int n, int r, int index, QString data, int i);
   QString GetRandomString(int length,QString chars);
QString MainWindow::GetTotallyRandomString(int length,QString chars);
QString WordListGenerator(int length, QString wordlist);
    //coingenerator3
    int _count;
    int _total;
    int _length;
    bool _state;
    QList<QString> _coins;
    int coini;
    bool gentotext;
private slots:
    void on_wordlist_clicked();

    void on_actionexit_triggered();

    void on_crack7z_clicked();

    void on_crack7z_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
