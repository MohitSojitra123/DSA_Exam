#include<iostream>
using namespace std;

// Question 1: Reverse an Array
// Problem: Write a function to reverse an array of integers.

// input Example:
// Input: [1, 2, 3, 4, 5]
// Output Example:
// Output: [5, 4, 3, 2, 1]

void reverse_array(int array[],int size){
      
    //   array [10,20,30,40,50,60,70,80,90,100]

      int j=size-1;  // 9
      int i=0;

      while (i<j)
      {
        int temp=array[i]; // => 10 => 20 
        array[i]=array[j];   // i = 100 i = 90 
        array[j]=temp;   // j = 10  j = 20
        j--; // 8 7 
        i++; //  1 2
      }
}

int main(){

   int array_size;

   cout<<"Enter Array Size..."<<endl;
   cin>>array_size;

   int array[array_size];

   for(int i=0; i<array_size; i++){
    cout<<"Enter Array Element...."<<endl;
    cin>>array[i];
   }

   cout<<"Original Array..."<<endl;

   for(int i=0; i<10; i++){
    cout<<array[i]<<" ";
   }cout<<endl;

   cout<<"Reverse Array..."<<endl;

  reverse_array(array,array_size);

  for(int i=0; i<array_size; i++){
    cout<<array[i]<<" ";
  }




}