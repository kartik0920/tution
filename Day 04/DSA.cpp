#include <iostream>
using namespace std;

// question 1  Reverse a number using a loop. ----
int reverse(int num)
{
    int ans = 0;
    // loop use karqaycha var,cond,increment
    while (num != 0)
    {
        int lDigit = num % 10;
        ans = (ans * 10) + lDigit;
        num = num / 10; // decrement
    }

    return ans;
}

/*
    12345


    ans : 5  && num =1234
    ans: 54 && num : 123  543
    ans:543 && num:12
    ans:5432 && num:1;
    ans:54321 && num = 0 -- break;



    7869                             ans=0
    9   ans =9   num 786             ans=0*10+9=9
    6   ans=96   num 78              ans=9*10+6=90+6=96


    step:
    Loop
        step 1: last digit find kela    -(%)
        step 2: save kela answer mdhe
        step 3: tela remove             -(/)
        step 4:continue num != 0

*/

void printPattern(int n)
{
    /*
    n=3
        ***
        ***
        ***
    */
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << "*";
        }
        cout << endl;
    }

    /* n=4
        1 2 3 4
        1 2 3 4
        1 2 3 4
    */
    // code here
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i;
        }
        cout << endl;
    }

    /*
    n=4
        1 1 1 1
        2 2 2 2
        3 3 3 3
        4 4 4 4

    */
    int num = 1;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }

    // code here

    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << j;
        }
        cout << endl;
    }

    /*
        1 2
        3 4
        (0,0)   (0,1)
        (1,0)   (1,1)

    */
    n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }

    // final pattern
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i < j)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n = 31653;

    // output :: 321
    cout << reverse(n) << endl;

    printPattern(6);
    return 0;
}