#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printTable(int n)
{

    // 1--10

    for (int i = 1; i <= 10; i++)
    {
        cout << n * i << endl;
    }
}

// what is factorial n
// 1*2*3*4....n

int Fact(int n)
{
    // code here
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    // 1,100

    // loops var,condition,inc
    for (int i = 1; i <= 100; i++)
    {
        cout << i << " ";
    }

    int n;
    cout << "\nEnter n for  table:";
    cin >> n;

    printTable(n);

    // int n,user table
    /*
        n*1=n
        n*2=2n

    */

    cout << "\nEnter n for fact:";
    cin >> n;
    cout << Fact(n) << endl;

    return 0;
}