#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// base class // parent class
class Animal
{
public:
    int age, legs;

    void live()
    {
        cout << "animal is alive" << endl;
    }
    void dead()
    {
        cout << "Animal is dead";
    }

    // constructor   --- specail type of function , wo hange
    Animal()
    {
        cout << "Animal created" << endl;
    }

    Animal(int legs, int age)
    {
        this->legs = legs;
        this->age = age;
        cout << "Animal created" << endl;
    }

    // destrcutor  -program end zla vrr run honr
    ~Animal()
    {
        cout << "Animal died" << endl;
    }

private:
    int y = 0;
};

// child class // dedrived class
class Dogs : public Animal
{
public:
    Dogs()
    {
        cout << "Dog is created" << endl;
    }

    ~Dogs()
    {
        cout << "Dog died" << endl;
    }
};

class Labra : public Dogs
{
public:
    Labra()
    {
        cout << "Lab is createad" << endl;
    }
    ~Labra()
    {
        cout << "Lab dies" << endl;
    }
};

// class cats -- inheritate animals
// cats use code mdhe aanhi cats che age anhi legs print karacyhe aahe
// class nhi public/private//protected             //wapas code krr
class Cats : public Animal
{
public:
    Cats(int age, int legs)
    {
        this->age = age;
        this->legs = legs;
    }
    Cats()
    {
        cout << "cat is created" << endl;
    }
};
int main()
{

    // Animal tiger1;
    // Animal tiger2(5, 13);
    // Animal tiger3(13, 13);

    // Dogs dogesh;

    Labra tommy;
    tommy.live();
    // tiger2 this for specific 2

    // // Animal(int legs, int age)
    // cout << tiger2.legs << " " << tiger2.age << endl;
    // cout << tiger3.legs << " " << tiger3.age << endl;
    cout << "PROCESS" << endl;
    // debug krr ha error online bghun
    Cats cat1(4, 15);
    cout << cat1.legs << " " << cat1.age << endl;
    return 0;
}