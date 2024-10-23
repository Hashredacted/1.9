// Write C++ programs that use recursive functions to find:
// a) The factorial of a given integer.
// b) To find the greatest common divisor of two given integers.

#include<iostream>
using namespace std;
long long factrun(int a)
{
    if(a == 1) return 1;
    else return (a * factrun(a-1));
}
void factorial()
{
    long long fact;
    int n;
    
    cout<<"Enter the number whose factorial you want : ";
    cin>>n;

    if(n > 0)
    {
        fact = factrun(n);
        cout<<"Factorial of "<<n<<" is : "<<fact;
    }
    else if(n == 0) cout<<"Factorial of zero is equal to 1";
    else cout<<"Invalid Input !! Factorial of negative number is not posible ";
}
int gcdrun(int a, int b)
{
    if(b == 0) return a;
    else gcdrun(b, a % b);
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