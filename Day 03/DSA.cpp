#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int small = min(a, b);
    int big = max(a, b);
    int ans = 1;

    // 3 things in loop
    // 1 var  2 conditition  3 increment/decement
    for (int i = small; i != 0; i = i - 1)
    {
        // %==0
        if (big % i == 0)
        {
            if (small % i == 0)
            {
                return i;
            }
        }
    }
    return ans;
}

// Steps to solve question
//  Read question, input,output(int) and constraints
// function dataType:int  return a integer
//  input :: int a and int b

/*
    find a gcd of 2 number and return it
    eg
    1) a=2,b=3
    expected output:1

    2) a=16,b=4
    expected output:4



    small number 2
    3/2=x
    3/1= ||2/1 ==baroabr gcd 1


    a=16,b=4
    small = 4
    16/4 || 4/4 gcd ==4


    a=24,b=9
    small =9
    24/9
    24/8
    24/7
    24/6
    24/5
    24/4
    24/3   9/3  gcd=3




*/

int LCM(int a, int b, int c)
{
    int multp = a * b * c;
    int temp1 = gcd(a, b);
    int temp2 = gcd(b, c);
    int final_gcd = gcd(temp1, temp2);

    int lcm = multp / final_gcd;
    return lcm;
}

//   LCM(a,b)*GCD(a,b)=a*b

// LCM 12,6
/*
    12*6=GCD(12,6)*LCM(12,6);
    12*6=6*LCM(12,6);
    12*6/6=LCM
    12=LCM
*/

// LCM 2,5
/*
    2*5=gcd(2,5)*LCM(2,5)
    2*5=1*LCM(2,5)
    2*5/1=LCM(2,5)
    10=LCM

*/

/*
    24,6,8
    temp1=6
    temp2=2
    6,2
    final=2


*/

int main()
{
    // GCD of 2 number
    int a, b;
    cout << "Enter a & b:";
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    int c;
    cout << "Enter number for LCM:";
    cin >> a >> b >> c;
    cout << LCM(a, b, c) << endl;
    return 0;
}