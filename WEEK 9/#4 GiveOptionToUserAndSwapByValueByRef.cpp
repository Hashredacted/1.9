
#include<iostream>
using namespace std;
//call by value 
void swap_value(int a,int b){
  int temp=a;
  a=b;
  b=temp;
}
void swap_ref(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    cout<<"\n Swaping two variable with call by reference and call by value : \n";
    int a=0,b=0,ch;
    do{
    cout<<"\n Choose options :-";
    cout<<"\n 1. Enter Two Numbers ";
    cout<<"\n 2. Display Two Numbers ";
    cout<<"\n 3. Swap via Call by value";
    cout<<"\n 4. Swap the refernce of variable ";
    cout<<"\n 5. Exit \n";
    cout<<"\nEnter : ";
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<"Enter a : ";
        cin>>a;
        cout<<"Enter b : ";
        cin>>b;
        break;
    case 2:
       
        cout<<"a : "<<a<<endl;
        cout<<"b : "<<b;
        break;
    case 3:
        swap_value(a,b);
        cout<<"Values of a and b has been swaped \n";
        break;
    case 4:
        swap_ref(a,b);
        cout<<"Reference of a and b has been swaped\n";
        break;
    default:
        break;
    }
    }while(ch!=5);
    return 0;
}