#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    // varibles
    // operators
    // If-else
    // Switch   (learn on your own)
    //  iterative statement (for ,while ,do-while)  -c++4
    /*
        while(condition)
        {
            code:
        }


    */

    int i = 0;
    // for 1 to 100
    //  cout<<1<<2<<3<<4.............
    //  from 1,2,3,4.................100  :x,x+1,x+2,x+3   x=1---till x!=101 || x<=100

    int x = 1;
    while (x <= 100)
    {
        cout << x << " ";
        x = x + 1;
    }
    cout << endl;

    // print Hello my name is priya a 5 vela

    /*
            x=1
            while(x<=5){
                cout << "Hello my name is Priya"<< endl;
            }
    */
    int y = 1;
    while (y <= 5)
    {
        cout << "Hello my name is Priya" << endl;
        y = y + 1;
    }

    // 1-10  CHECK EVEN ODD   1->odd /2->even   {format : number : even/odd <<endl}
    int n = 1;
    while (n <= 10)
    {
        if (n % 2 == 0)
        {
            cout << n << "even" << endl;
        }
        else
        {
            cout << n << "odd" << endl;
        }
        n = n + 1;
    }

    /*
    //prime number user inpit and check krr prime aahe ki nhi
    // input 11
        2,3,4,5,.......10   i=2,i<=n-1
    input 27
        2,3,4,.........26



    */

    cin >> n;
    i = 2;
    while (i <= n - 1)
    {
        if (n % i == 0)
        {
            cout << "num is not prime" << endl;
        }
        else
        {
            cout << "num is prime" << endl;
        }
        i++;
    }

    return 0;
}
// fibonaci , sum of first 100,200,usr input nunmber ,2^3=8
//  inp:7  op1+2+3+4+5+6+7