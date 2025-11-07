#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class parent
{
public:
    // pure virtual funcction
    virtual void temp() = 0;

    // virtal function
    // virtual void temp(int x)
    // {
    //     cout << "value is here ";
    // }
};

// namespace used for collection ,varibales,objects,classes,function   || encapsulation on larger level

namespace priya
{
    int sakshi = 18;

    void increaseAge()
    {
        sakshi++;
    }

    void showAge()
    {
        cout << sakshi << " age of sakshi" << endl;
    }

    class Child : public parent
    {

    public:
        void temp() override
        {
            cout << "Function is used";
        }
    };
}

int main()
{
    // namespace_name ::var;
    priya::increaseAge();
    priya::showAge();

    return 0;
}