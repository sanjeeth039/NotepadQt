#include "filesearchdialog.h"
#include "ui_filesearchdialog.h"

FileSearchDialog::FileSearchDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FileSearchDialog)
{
    ui->setupUi(this);
}

FileSearchDialog::~FileSearchDialog()
{
    delete ui;
}

void FileSearchDialog::on_pushButton_clicked()
{

}
