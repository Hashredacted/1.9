#include<iostream>
using namespace std;
void array_recursive( int arr[],int size,int index){
   if(index >=size){
      return;
   }

   cout<<arr[index]<<" ";

   array_recursive(arr,size,index+1);
}
int main(){
   cout<<"Display Element of Array using recursion \n";
   int size;
   cout<<"Enter the size of the array : ";
   cin>>size;
   int arr[size];

   //Insertion in array;
   cout<<"Enter the Element of array : \n";
   for (int i = 0; i < size; i++)
   {
    cout<<"Enter element of Array at Position "<<i<<" :";
    cin>>arr[i];
   }

   
   //Displaying elements using recursion
   array_recursive(arr,size,0);
   return 0;
}