#include <bits/stdc++.h>
#include <iostream>  //header
using namespace std; // namespace
int main()           // main function
{
    /*
        variables    -- decalration and usage
        conditional statements   -- if,else,else-if,switch
        loops   -- for,while,do-while

        conatainer to save and use multiple values
        datatype varName = value;

        pages

    */
    int pages = 200;
    float pagesF = 200.5;
    cout << pagesF << endl;

    // conditional statements
    /*
        if (condition){
            code1
        }
        else{
            code2
        }

    */

    // check even/odd
    int num = 23;
    if (num % 2 == 0)
    {
        cout << "number is even";
    }
    else
    {
        cout << "number is odd";
    }

    // pehile input and mg check karaycha
    int num1;
    cin >> num1;
    if (num1 % 2 == 0)
    {
        cout << "number is even";
    }
    else
    {
        cout << "number is odd";
    }

    // check +ve,negative or zero
    int x;
    cout << "\nEnter x:";
    cin >> x;
    if (x > 0)
    {
        cout << "x is positive";
    }
    else if (x < 0)
    {
        cout << "x is Negative";
    }
    else
    {
        cout << "x is zero";
    }

    // 2341 is divisbsle by 7
    int y = 2341;
    if (y % 7 == 0)
    {
        cout << "Divisible by 7";
    }
    else
    {
        cout << "Not divisible by 7";
    }

    // operators in c++

    int a = 0, b = 0;

    // a == 110
    // b == 100

    // AND ==100   -->4
    // OR == 110-->6
    // not== !a 001

    // Logical AND operator

    cout << "a && b is " << (a && b) << endl;

    // Logical OR operator
    cout << "a || b is " << (a || b) << endl;

    // Logical NOT operator
    cout << "!b is " << (!b) << endl;

    a = 6;
    b = 4;

    cout << "a & b is " << (a & b) << endl;

    // Logical OR operator
    cout << "a | b is " << (a | b) << endl;

    // Logical NOT operator
    cout << "!b is " << (!b) << endl;

    // 1100   << 100   <<1 000
    //  110 >>  011    >> 001 >> 000

    // Relation | Bitwise

    return 0;
}

// Homework
//   1 tarik aj monday atta mla 22 cha day decide karaycha aahe kasa krnr