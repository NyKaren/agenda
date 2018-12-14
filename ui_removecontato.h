/********************************************************************************
** Form generated from reading UI file 'removecontato.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVECONTATO_H
#define UI_REMOVECONTATO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_RemoveContato
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RemoveContato)
    {
        if (RemoveContato->objectName().isEmpty())
            RemoveContato->setObjectName(QStringLiteral("RemoveContato"));
        RemoveContato->resize(400, 300);
        buttonBox = new QDialogButtonBox(RemoveContato);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(RemoveContato);
        QObject::connect(buttonBox, SIGNAL(accepted()), RemoveContato, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RemoveContato, SLOT(reject()));

        QMetaObject::connectSlotsByName(RemoveContato);
    } // setupUi

    void retranslateUi(QDialog *RemoveContato)
    {
        RemoveContato->setWindowTitle(QApplication::translate("RemoveContato", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveContato: public Ui_RemoveContato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVECONTATO_H
