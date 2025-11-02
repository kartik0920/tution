// #include <bits/stdc++.h>  //Header File
#include <iostream>
using namespace std; // Namespace Declaration

// notebook--class   {pages,color,price,brand} etc.... && to write on it--function
/*
class className{

};

*/

class Notebook
{
public:
    // properties
    int pages;
    string color;
    float price;
    string brand;

    void write()
    {
        cout << brand << " Writing something on notebook" << endl;
    }
    void save()
    {
        cout << "Saving data in notebook" << endl;
    }
};

int main() // starting point of the program
{
    // datatypes: int ,float,double,char,bool
    // functions : block of code wapas wapas use kru skto

    // classmate-notebook

    // className objectName; || className objectName=new ClassName();

    // Method 1: Static memory allocation
    Notebook classmateNotebook1;
    classmateNotebook1.pages = 200;
    classmateNotebook1.color = "Red";
    classmateNotebook1.price = 250.50;
    classmateNotebook1.brand = "Classmate";
    classmateNotebook1.write();

    // Method 2: Dynamic memory allocation   ---more usable
    Notebook *classmateNotebook2 = new Notebook();
    classmateNotebook2->pages = 500;
    classmateNotebook2->color = "Blue";
    classmateNotebook2->price = 250.50;
    classmateNotebook2->brand = "Classmate";

    classmateNotebook2->save();
}