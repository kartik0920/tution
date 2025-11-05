#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// class vehicle  --function to go from a,b and print "user went to b from a""

// compile time
class Vehicle
{
public:
    // datatype func_name(args){ code ....}

    // polymorpism
    void travel()
    {
        cout << "planning" << endl;
        ;
    }
    void travel(string a)
    {
        cout << "fuck off" << endl;
    }

    void travel(string a, string b)
    {
        cout << "User went to " << b << " from " << a << endl;
    }

    void travel(string a, string b, string c)
    {
        cout << "User went to " << a << " from " << b << " from " << c << endl;
    }
    // runtime
    virtual void temp()
    {
        cout << "I am in vehicle and i am not cahgned" << endl;
    }
};

class Cars : public Vehicle
{
public:
    void temp() override
    {
        cout << "My value is cahgned and I am cars" << endl;
    };
};

int main()
{
    Vehicle v1;
    string a = "Mumbai", b = "Delhi", c = "Kashmir";
    // v1.travel(a, b);

    // // v1 mumbai delhi kashmir
    // v1.travel(b);
    // v1.travel(a, b);
    // v1.travel(b, c);
    // v1.travel(a, b, c);

    // Vehicle v2;
    // v2.travel();

    Vehicle v3;
    v3.temp();

    Cars c1;
    c1.temp();
    return 0;
}

// | v1 | -- --> runtime ploymropm | v1 | x = | v2 |
