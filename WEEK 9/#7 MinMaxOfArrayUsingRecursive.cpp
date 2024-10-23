#include<iostream>
using namespace std;
int largest(int arr[],int max,int size){
   if (size==0){
      return max;
   }
   if(size>0){
      if(arr[size]>max){
         max=arr[size];
      }
   }

   return largest(arr,max,size-1);
}
int smallest(int arr[],int min,int size){
   if (size==0){
      return min;
   }
   if(size>0){
      if(arr[size]<min){
         min=arr[size];
      }
   }
   return smallest(arr,min,size-1);
}
int main(){
   cout<<"To find Minimum and Maximum of Array using recrusion:\n ";
   //Get array
   int size;
   cout<<"Enter the Size of array : ";
   cin>>size;
   int arr[size];
   cout<<"Enter the elements of array: \n";
   for (int i = 0; i < size ;i++)
   {
      cout<<"Enter element of array at postition "<<i<<" :";
      cin>>arr[i];
   }
   int max=arr[0];
   int min=arr[0];
   cout<<"\nThe Maximum Element of array is : "<<largest(arr,max,size-1);
   cout<<"\nThe Minimum Element of array is : "<<smallest(arr,min,size-1);
   return 0;
}
