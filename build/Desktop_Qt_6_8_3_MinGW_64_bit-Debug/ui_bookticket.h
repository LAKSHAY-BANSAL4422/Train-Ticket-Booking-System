/********************************************************************************
** Form generated from reading UI file 'bookticket.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKTICKET_H
#define UI_BOOKTICKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bookticket
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QCalendarWidget *calendarWidget;
    QLineEdit *notickets;
    QLabel *label_3;

    void setupUi(QDialog *bookticket)
    {
        if (bookticket->objectName().isEmpty())
            bookticket->setObjectName("bookticket");
        bookticket->resize(640, 480);
        bookticket->setStyleSheet(QString::fromUtf8("QDialog{\n"
"                        background-image: url(:/resources/images/back.png);\n"
"                        background-repeat: no-repeat;\n"
"                        background-position: center;\n"
"                        background-attachment: fixed;\n"
"                        };"));
        layoutWidget = new QWidget(bookticket);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 60, 201, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        verticalLayout->addWidget(comboBox);

        layoutWidget1 = new QWidget(bookticket);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(400, 60, 191, 71));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(layoutWidget1);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        verticalLayout_2->addWidget(comboBox_2);

        pushButton = new QPushButton(bookticket);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 390, 151, 51));
        calendarWidget = new QCalendarWidget(bookticket);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(30, 150, 256, 190));
        notickets = new QLineEdit(bookticket);
        notickets->setObjectName("notickets");
        notickets->setGeometry(QRect(420, 210, 113, 22));
        notickets->setMaxLength(2);
        label_3 = new QLabel(bookticket);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(420, 180, 141, 21));

        retranslateUi(bookticket);

        QMetaObject::connectSlotsByName(bookticket);
    } // setupUi

    void retranslateUi(QDialog *bookticket)
    {
        bookticket->setWindowTitle(QCoreApplication::translate("bookticket", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("bookticket", "Enter Departure City", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("bookticket", "Mumbai", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("bookticket", "Delhi", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("bookticket", "Bangalore", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("bookticket", "Hyderabad", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("bookticket", "Chennai", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("bookticket", "Kolkata", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("bookticket", "Ahemdabad", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("bookticket", "Pune", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("bookticket", "Jaipur", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("bookticket", "Lucknow", nullptr));

        label_2->setText(QCoreApplication::translate("bookticket", "Enter Arrival City", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("bookticket", "Mumbai", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("bookticket", "Delhi", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("bookticket", "Bangalore", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("bookticket", "Hyderabad", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("bookticket", "Chennai", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("bookticket", "Kolkata", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("bookticket", "Ahmedabad", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("bookticket", "Pune", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("bookticket", "Jaipur", nullptr));
        comboBox_2->setItemText(9, QCoreApplication::translate("bookticket", "Lucknow", nullptr));

        pushButton->setText(QCoreApplication::translate("bookticket", "PushButton", nullptr));
        label_3->setText(QCoreApplication::translate("bookticket", "Enter no of Tickets", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bookticket: public Ui_bookticket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKTICKET_H
