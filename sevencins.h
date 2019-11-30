#ifndef SEVENCINS_H
#define SEVENCINS_H

#include <QMainWindow>
#include <QTextBrowser>
#include <QLabel>
#include <QStackedWidget>
#include "ui_sevencins.h"



QT_BEGIN_NAMESPACE
namespace Ui { class sevencins; }
QT_END_NAMESPACE

class sevencins : public QMainWindow, private Ui::sevencins
{
    Q_OBJECT

public:
    sevencins(QWidget *parent = nullptr);
    ~sevencins();

private slots:
    void on_showFavoritesButton_clicked();
    void on_showCabinetButton_clicked();
    void on_myShoppingList_clicked();
    void on_randomDrinkButton_clicked();
    void on_return1_clicked();
    void on_return2_clicked();
    void on_searchButton_clicked();

    void on_drinkName_windowTitleChanged(const QString &title);

    void on_drinkName_linkActivated(const QString &link);

    // shopping list related
    void on_ingredientsList_itemDoubleClicked(QListWidgetItem *item);
    void on_clearShoppingList_clicked();
    //

    void on_saveIntoTXT_clicked(); // save shopping list into desktop

private:
    Ui::sevencins *ui;
    QLabel *drinkName = new QLabel();
};
#endif // SEVENCINS_H
