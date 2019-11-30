/********************************************************************************
** Form generated from reading UI file 'sevencins.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEVENCINS_H
#define UI_SEVENCINS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sevencins
{
public:
    QWidget *centralwidget;
    QStackedWidget *main;
    QWidget *home;
    QPushButton *myShoppingList;
    QFrame *drinkPictureFrame;
    QGraphicsView *drinkPicture;
    QPushButton *randomDrinkButton;
    QPushButton *searchButton;
    QPushButton *showCabinetButton;
    QPushButton *showFavoritesButton;
    QLabel *drinkName;
    QTextBrowser *drinkInfo;
    QWidget *resultsPage;
    QPushButton *return1;
    QWidget *shoppinglist;
    QPushButton *return2;
    QTextBrowser *theShoppingList;
    QLabel *label_2;
    QListWidget *ingredientsList;
    QToolButton *clearShoppingList;
    QLabel *label;
    QToolButton *saveIntoTXT;
    QLabel *liveUpdate;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *sevencins)
    {
        if (sevencins->objectName().isEmpty())
            sevencins->setObjectName(QString::fromUtf8("sevencins"));
        sevencins->resize(734, 404);
        centralwidget = new QWidget(sevencins);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        main = new QStackedWidget(centralwidget);
        main->setObjectName(QString::fromUtf8("main"));
        main->setGeometry(QRect(-1, -1, 741, 381));
        home = new QWidget();
        home->setObjectName(QString::fromUtf8("home"));
        myShoppingList = new QPushButton(home);
        myShoppingList->setObjectName(QString::fromUtf8("myShoppingList"));
        myShoppingList->setGeometry(QRect(540, 340, 100, 23));
        drinkPictureFrame = new QFrame(home);
        drinkPictureFrame->setObjectName(QString::fromUtf8("drinkPictureFrame"));
        drinkPictureFrame->setGeometry(QRect(70, 60, 181, 181));
        drinkPictureFrame->setFrameShape(QFrame::StyledPanel);
        drinkPictureFrame->setFrameShadow(QFrame::Sunken);
        drinkPicture = new QGraphicsView(drinkPictureFrame);
        drinkPicture->setObjectName(QString::fromUtf8("drinkPicture"));
        drinkPicture->setGeometry(QRect(10, 10, 161, 161));
        randomDrinkButton = new QPushButton(home);
        randomDrinkButton->setObjectName(QString::fromUtf8("randomDrinkButton"));
        randomDrinkButton->setGeometry(QRect(90, 340, 100, 23));
        randomDrinkButton->setToolTipDuration(5);
        randomDrinkButton->setCheckable(true);
        searchButton = new QPushButton(home);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(60, 20, 75, 23));
        searchButton->setToolTipDuration(5);
        showCabinetButton = new QPushButton(home);
        showCabinetButton->setObjectName(QString::fromUtf8("showCabinetButton"));
        showCabinetButton->setGeometry(QRect(390, 340, 100, 23));
        showCabinetButton->setToolTipDuration(5);
        showFavoritesButton = new QPushButton(home);
        showFavoritesButton->setObjectName(QString::fromUtf8("showFavoritesButton"));
        showFavoritesButton->setGeometry(QRect(240, 340, 100, 23));
        showFavoritesButton->setToolTipDuration(5);
        drinkName = new QLabel(home);
        drinkName->setObjectName(QString::fromUtf8("drinkName"));
        drinkName->setGeometry(QRect(70, 250, 181, 20));
        drinkName->setFrameShape(QFrame::Box);
        drinkName->setAlignment(Qt::AlignCenter);
        drinkInfo = new QTextBrowser(home);
        drinkInfo->setObjectName(QString::fromUtf8("drinkInfo"));
        drinkInfo->setGeometry(QRect(300, 60, 361, 211));
        drinkInfo->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        main->addWidget(home);
        resultsPage = new QWidget();
        resultsPage->setObjectName(QString::fromUtf8("resultsPage"));
        return1 = new QPushButton(resultsPage);
        return1->setObjectName(QString::fromUtf8("return1"));
        return1->setGeometry(QRect(20, 20, 75, 23));
        main->addWidget(resultsPage);
        shoppinglist = new QWidget();
        shoppinglist->setObjectName(QString::fromUtf8("shoppinglist"));
        return2 = new QPushButton(shoppinglist);
        return2->setObjectName(QString::fromUtf8("return2"));
        return2->setGeometry(QRect(20, 20, 75, 23));
        theShoppingList = new QTextBrowser(shoppinglist);
        theShoppingList->setObjectName(QString::fromUtf8("theShoppingList"));
        theShoppingList->setGeometry(QRect(70, 110, 361, 211));
        label_2 = new QLabel(shoppinglist);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(450, 70, 261, 41));
        ingredientsList = new QListWidget(shoppinglist);
        ingredientsList->setObjectName(QString::fromUtf8("ingredientsList"));
        ingredientsList->setGeometry(QRect(450, 110, 191, 211));
        clearShoppingList = new QToolButton(shoppinglist);
        clearShoppingList->setObjectName(QString::fromUtf8("clearShoppingList"));
        clearShoppingList->setGeometry(QRect(70, 330, 181, 31));
        label = new QLabel(shoppinglist);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 70, 251, 41));
        saveIntoTXT = new QToolButton(shoppinglist);
        saveIntoTXT->setObjectName(QString::fromUtf8("saveIntoTXT"));
        saveIntoTXT->setGeometry(QRect(270, 330, 161, 31));
        liveUpdate = new QLabel(shoppinglist);
        liveUpdate->setObjectName(QString::fromUtf8("liveUpdate"));
        liveUpdate->setGeometry(QRect(150, 50, 381, 20));
        main->addWidget(shoppinglist);
        sevencins->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(sevencins);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        sevencins->setStatusBar(statusbar);

        retranslateUi(sevencins);

        main->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(sevencins);
    } // setupUi

    void retranslateUi(QMainWindow *sevencins)
    {
        sevencins->setWindowTitle(QCoreApplication::translate("sevencins", "sevencins", nullptr));
        myShoppingList->setText(QCoreApplication::translate("sevencins", "My Shopping List", nullptr));
#if QT_CONFIG(tooltip)
        randomDrinkButton->setToolTip(QCoreApplication::translate("sevencins", "Shows a random drink. Try something new!", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        randomDrinkButton->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        randomDrinkButton->setText(QCoreApplication::translate("sevencins", "Surprise Me!", nullptr));
#if QT_CONFIG(tooltip)
        searchButton->setToolTip(QCoreApplication::translate("sevencins", "Search for a drink or a specific ingredient.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        searchButton->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        searchButton->setText(QCoreApplication::translate("sevencins", "Search", nullptr));
#if QT_CONFIG(tooltip)
        showCabinetButton->setToolTip(QCoreApplication::translate("sevencins", "Shows what is currently in your cabinet.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        showCabinetButton->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        showCabinetButton->setText(QCoreApplication::translate("sevencins", "My Cabinet", nullptr));
#if QT_CONFIG(tooltip)
        showFavoritesButton->setToolTip(QCoreApplication::translate("sevencins", "Show your list of favorites.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        showFavoritesButton->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        showFavoritesButton->setText(QCoreApplication::translate("sevencins", "Favorites", nullptr));
        drinkName->setText(QCoreApplication::translate("sevencins", "Welcome to 7DC", nullptr));
        return1->setText(QCoreApplication::translate("sevencins", "Back", nullptr));
        return2->setText(QCoreApplication::translate("sevencins", "Back", nullptr));
        theShoppingList->setHtml(QCoreApplication::translate("sevencins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("sevencins", "Double click to add to your list:", nullptr));
        clearShoppingList->setText(QCoreApplication::translate("sevencins", "Clear the list", nullptr));
        label->setText(QCoreApplication::translate("sevencins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text'; font-size:12pt; font-weight:600; color:#fc02ff;\">Your Shopping List</span></p></body></html>", nullptr));
        saveIntoTXT->setText(QCoreApplication::translate("sevencins", "Save to Desktop", nullptr));
        liveUpdate->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class sevencins: public Ui_sevencins {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEVENCINS_H
