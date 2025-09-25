/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName("about");
        about->resize(112, 64);
        label = new QLabel(about);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 101, 41));
        pushButton = new QPushButton(about);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 40, 56, 18));

        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QWidget *about)
    {
        about->setWindowTitle(QCoreApplication::translate("about", "Form", nullptr));
        label->setText(QCoreApplication::translate("about", "\345\274\200\345\217\221\344\272\272\345\221\230\344\277\241\346\201\257\357\274\232\351\231\210\346\265\251\346\226\207\n"
"\345\255\246\345\217\267\357\274\2322023414290205", nullptr));
        pushButton->setText(QCoreApplication::translate("about", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
