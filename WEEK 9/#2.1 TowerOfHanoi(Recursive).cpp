#include<iostream>
using namespace std;
void TOH(int start,int end,char source,char aux,char destination){
    if(start>end){
        return;
    }
    TOH(start,end-1,source,destination,aux); 
    //we transder n-1 disk to aux using destination to get largest which is at bottom of peg soruce 
    //so when largest is available we transfer it to the actual destination.
    cout<<"Move disk "<<end<<" From "<<source<<" to "<<destination<<"."<<endl;
    TOH(start,end-1,aux,source,destination);
    //now using aux we transfer remaining disk and repeat untill all are sorted.
}

//Driver code
int main(){
    //user input
   cout<<"\nProgram of Hanoi Problem using both reciursive and Non-Recursive Approach\n";
   int start,end;
   char source,aux,destination;
   cout<<"Enter Starting disk Number : ";
   cin>>start;
   cout<<"Enter End disk Number : ";
   cin>>end;
   cout<<"What would u like to call pegs in char :\n";
   cout<<"Source Peg : ";
   cin>>source;
   cout<<"Auxillary Peg: ";
   cin>>aux;
   cout<<"Destination peg: ";
   cin>>destination;

   cout<<"The Disk Can be Moved as follows: \n";
   TOH(start,end,source,aux,destination);
   return 0;
}