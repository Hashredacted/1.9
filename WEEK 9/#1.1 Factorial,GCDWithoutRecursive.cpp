// Write C++ programs that use non-recursive functions to find:
// a) The factorial of a given integer.
// b) To find the greatest common divisor of two given integers.

#include<iostream>
using namespace std;
void factorial()
{
    long long fact = 1;
    int n;
    
    cout<<"Enter the number whose factorial you want : ";
    cin>>n;

    if(n > 0) 
    {
        for(int i=2; i<=n; i++)
        {
            fact *= i;
        }
        cout<<"Factorial of "<<n<<" is : "<<fact;
    }
    else if(n == 0) cout<<"Factorial of zero is equal to 1";
    else cout<<"Invalid Input !! ";
}
int gcdrun(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void GCD()
{
    int first, second;

    cout<<"Enter two numbers whose GCD you want : ";
    cin>>first>>second;

    int gcd = gcdrun(first, second);

    cout<<"GCD of "<<first<<" and "<<second<<" is : "<<gcd;
}
int main()
{
    int Which_Problem;
    
    cout<<"Which problem do you have?\na) Factorial of a number! Please press 1 for factorial OR\n";
    cout<<"b) Greatest Common Divisor! Please press 0 for GCD : ";
    cin>>Which_Problem;

    if (Which_Problem == 1) factorial();
    else if(Which_Problem == 0) GCD();
    else cout<<"Invalid Input !!";

    return 0;
}