#include "sevencins.h"
#include "ui_sevencins.h"
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <fstream>
#include <QStandardPaths>

#include <QDateTime>
#include <String>
#include <cstdlib>
#include "Cocktail.h"
#include "Read.h"
#include "Search.h"

using namespace std;

// Global Variables //
QVector <QString> myList; // user's shopping list
QVector <QString> ingredientList; // list of ingredients
Read load;
map<int, Drink> drinks = load.returnMap();

sevencins::sevencins(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::sevencins)
{
    qsrand(QDateTime::currentMSecsSinceEpoch() / 1000);
    this->setWindowTitle(QString("7DC - Home"));
    drinkInfo = new QTextBrowser();
    drinkInfo->setText("Under Construction. Buttons will crash.");

    drinkName->setText(QString("Nothing to see here."));
    ui->setupUi(this);
}

sevencins::~sevencins()
{
    delete ui;
}


// function to read ingredients from file //
void readFileForShoppingList()
{
    QString drinkName ="";
    QString ingredientName ="";
    QFile inputFile(qApp->applicationDirPath() + "/readFile.txt"); // read from readFile.txt
    QTextStream in(&inputFile); // <<<
    QString line = in.readLine(); // getline

    if (!inputFile.open(QIODevice::ReadOnly)) // if file opened
        cout<<"File does not exist..!\n";
    else
    {
        while (!in.atEnd()){
        QString line = in.readLine(); // getline
        if (line == "Drink")
        {
            line = in.readLine();
            drinkName = line;
        }
        line = in.readLine();
        while (line == "Ingredient")
        {
            line = in.readLine();
            ingredientName = line;
            ingredientList.push_back(line);
            line = in.readLine();
        }}
       inputFile.close(); // close file when done reading
    }
}

void sevencins::on_showFavoritesButton_clicked()
{
    ui->main->setCurrentIndex(1);
    this->setWindowTitle(QString("7DC - Favorites"));
}

void sevencins::on_showCabinetButton_clicked()
{
    ui->main->setCurrentIndex(1);
    this->setWindowTitle(QString("7DC - My Cabinet"));
}

void sevencins::on_myShoppingList_clicked()
{
    ui->main->setCurrentIndex(2);
    this->setWindowTitle(QString("7DC - Shopping List"));

    readFileForShoppingList(); // read file for ingredients list

    for(int i = 0 ; i < ingredientList.size(); i++){ // display ingredients in ingredients list
    ui->ingredientsList->addItem(ingredientList[i]);
    }
}

void sevencins::on_randomDrinkButton_clicked()
{
    qsrand(0);
    int randomDrink = qrand() % 21 + 1;
    Cocktail toOutput = drinks.at(randomDrink);
    this->setWindowTitle(QString::fromStdString("7DC - " + toOutput.getName()));
    this->drinkName->setText(QString::fromStdString(toOutput.getName()));
    this->drinkInfo->setText(QString::fromStdString(toOutput.getDescription()));
    Recipe temp = toOutput.returnRecipe();
    for(int i = 0; i > toOutput.RecipeLength(); i++)
    {
       this->drinkInfo->append(QString::fromStdString("Step " + (i+1) +  temp.returnRecipe().at(i) + "\n"));

    }

}

void sevencins::on_return1_clicked()
{
    ui->main->setCurrentIndex(0);
    this->setWindowTitle(QString("7DC - Home"));
}

void sevencins::on_return2_clicked()
{
    ui->main->setCurrentIndex(0);
    this->setWindowTitle(QString("7DC - Home"));
}

void sevencins::on_searchButton_clicked()
{
    ui->main->setCurrentIndex(1);
    this->setWindowTitle(QString("7DC - Search"));
}

void sevencins::on_drinkName_linkActivated(const QString &link)
{

}

void sevencins::on_drinkName_windowTitleChanged(const QString &title)
{

}

// add ingredient from ingredient list to shopping list when double clikced
void sevencins::on_ingredientsList_itemDoubleClicked(QListWidgetItem *item)
{
    myList.push_back(item->text()); // push back the double clicked item to myList
     QString str; // to store all strings in one variable

     for(int i = 0; i < myList.size(); i++){
         if (i>0)
             str += "\n";
         str += myList[i];
 }
     ui->theShoppingList->setText(str);// print the one string variable whihch has all strings
}

// clear the shopping list
void sevencins::on_clearShoppingList_clicked()
{
    {
        myList.clear(); // erase all elements in Shopping List vector
        ui->theShoppingList->clear(); // clear the theShoppingList
    }
}

void sevencins::on_saveIntoTXT_clicked()
{
    QString DesktopPath = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    QFile inputFile(DesktopPath + "/myShoppingList.txt"); // open myShoopingList.txt file
    QTextStream in(&inputFile);
   // cout<<qApp->applicationDirPath().toStdString() + "myShoppingList.txt";
    if(!inputFile.open(QIODevice::WriteOnly)) // if file not opened
        ui->liveUpdate->setText("File not saved..");
    else{
        ui->liveUpdate->setText("File saved in: " + DesktopPath + "/ ( myShoppingList.txt )");
    for(int i = 0; i<myList.size();i++){
        in<<myList[i] << "\n";
    }
    }
    inputFile.close(); // close file when done reading

}
