#include<iostream>
using namespace std;
int main(){
   cout<<"To Print the tranpose of a matrix\n";
   int row,col;
   cout<<"Enter row of matrix : ";
   cin>>row;
   cout<<"Enter Column of matrix : ";
   cin>>col;
   int mat[row][col], trans[row][col];
   cout<<"\nEnter Elements of Matrix: "<<endl;
   //Insertion of 2 D matrix
   for (int i = 0; i < row; i++)
   {
    for (int j = 0; j < col; j++)
    {
        cout<<"Enter element at position "<<i<<j<<" : ";
        cin>>mat[i][j];
    } 
   }
   cout<<"\nThe matrix : \n";
   //Displaying matrix
   for (int i = 0; i < row; i++)
   {
    for (int j = 0; j < col; j++)
    {
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
   }
   //transpose
    for (int i = 0; i < row; i++){
    for (int j = 0; j < col; j++)
    {
        trans[j][i]=mat[i][j];
    }}
    cout<<"\nTransposed matrix is : \n";
   //Printing the tanspose
    for (int i = 0; i < row; i++){
    for (int j = 0; j < col; j++)
    {
        cout<<trans[i][j]<<" ";
    }
    cout<<endl;
   }
   return 0;
}