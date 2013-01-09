/********************************************************************************
** Form generated from reading UI file 'editor.ui'
**
** Created: Mon Jan 7 21:58:55 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOR_H
#define UI_EDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Editor
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QPushButton *btnCompilar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Editor)
    {
        if (Editor->objectName().isEmpty())
            Editor->setObjectName(QString::fromUtf8("Editor"));
        Editor->resize(479, 345);
        centralWidget = new QWidget(Editor);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        btnCompilar = new QPushButton(centralWidget);
        btnCompilar->setObjectName(QString::fromUtf8("btnCompilar"));

        verticalLayout->addWidget(btnCompilar);

        Editor->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Editor);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 479, 20));
        Editor->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Editor);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Editor->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Editor);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Editor->setStatusBar(statusBar);

        retranslateUi(Editor);

        QMetaObject::connectSlotsByName(Editor);
    } // setupUi

    void retranslateUi(QMainWindow *Editor)
    {
        Editor->setWindowTitle(QApplication::translate("Editor", "Editor", 0, QApplication::UnicodeUTF8));
        btnCompilar->setText(QApplication::translate("Editor", "Compilar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Editor: public Ui_Editor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOR_H
