#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QTextEdit>
#include <QString>
#include <QByteArray>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void setStyleForm();

private:
    Ui::Widget *ui;

    QVBoxLayout *layout;
    QLabel * data_label;
    QLineEdit *data_edit;

    QLabel *key_label;
    QLineEdit *key_edit;

    QPushButton *encrypt_button;
    QLabel *encrypted_label;
    QTextEdit * encrypted_edit;

    QPushButton *decrypt_button;
    QLabel *decrypted_label;
    QTextEdit * decrypted_edit;

    void RC4(QByteArray& data, int data_length, QByteArray& key, int key_length);
    void signal_PushButtons();
    void Encryption();
    void Decryption();
};
#endif // WIDGET_H
