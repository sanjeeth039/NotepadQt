#ifndef FILESEARCHDIALOG_H
#define FILESEARCHDIALOG_H

#include <QDialog>

namespace Ui {
class FileSearchDialog;
}

class FileSearchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FileSearchDialog(QWidget *parent = nullptr);
    ~FileSearchDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FileSearchDialog *ui;
};

#endif // FILESEARCHDIALOG_H
