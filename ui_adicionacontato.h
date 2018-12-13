/********************************************************************************
** Form generated from reading UI file 'adicionacontato.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADICIONACONTATO_H
#define UI_ADICIONACONTATO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AdicionaContato
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *nome_lineEdit;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QLineEdit *telefone_lineEdit;
    QLineEdit *endereco_lineEdit;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *AdicionaContato)
    {
        if (AdicionaContato->objectName().isEmpty())
            AdicionaContato->setObjectName(QStringLiteral("AdicionaContato"));
        AdicionaContato->resize(400, 175);
        gridLayout = new QGridLayout(AdicionaContato);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(AdicionaContato);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        nome_lineEdit = new QLineEdit(AdicionaContato);
        nome_lineEdit->setObjectName(QStringLiteral("nome_lineEdit"));

        gridLayout->addWidget(nome_lineEdit, 0, 1, 1, 1);

        label = new QLabel(AdicionaContato);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(AdicionaContato);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 1, 1, 1);

        telefone_lineEdit = new QLineEdit(AdicionaContato);
        telefone_lineEdit->setObjectName(QStringLiteral("telefone_lineEdit"));

        gridLayout->addWidget(telefone_lineEdit, 1, 1, 1, 1);

        endereco_lineEdit = new QLineEdit(AdicionaContato);
        endereco_lineEdit->setObjectName(QStringLiteral("endereco_lineEdit"));

        gridLayout->addWidget(endereco_lineEdit, 2, 1, 1, 1);

        label_3 = new QLabel(AdicionaContato);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);


        retranslateUi(AdicionaContato);
        QObject::connect(buttonBox, SIGNAL(accepted()), AdicionaContato, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AdicionaContato, SLOT(reject()));

        QMetaObject::connectSlotsByName(AdicionaContato);
    } // setupUi

    void retranslateUi(QDialog *AdicionaContato)
    {
        AdicionaContato->setWindowTitle(QApplication::translate("AdicionaContato", "Dialog", nullptr));
        label_2->setText(QApplication::translate("AdicionaContato", "Telefone", nullptr));
        label->setText(QApplication::translate("AdicionaContato", "Nome", nullptr));
        label_3->setText(QApplication::translate("AdicionaContato", "Endere\303\247o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdicionaContato: public Ui_AdicionaContato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONACONTATO_H
