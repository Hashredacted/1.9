#include<iostream>
using namespace std;
int sum_array( int arr[],int size,int index){
   if(index >=size){
      return 0;
   }
   return arr[index]+sum_array(arr,size,index+1);
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

   int result=sum_array(arr,size,0);
   cout<<"Result of additiong of elements of array using recursion is : "<<result; 
   return 0;
}