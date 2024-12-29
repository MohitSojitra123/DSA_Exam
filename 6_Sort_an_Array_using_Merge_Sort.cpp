#include<iostream>
#include<vector>
using namespace std;

// Question 6: Sort an Array using Merge Sort
// Problem: Write a program to sort an array using the merge sort algorithm.
// Input Example:
// Input: [38, 27, 43, 3, 9]
// Output Example:
// Output: [3, 9, 27, 38, 43]

void merge(int arr[],int start,int mid,int end){

      vector<int> temp(end-start+1);

      int left=start,right=mid+1,index=0;

      while(left<=mid && right<=end)
      {   
           if(arr[left]<=arr[right]){
                 temp[index]=arr[left];
                 index++,left++;
           }else{
                temp[index]=arr[right];
                index++,right++; 
           }
      }
      
    //   left
      while (left<=mid)
      {
         temp[index]=arr[left];
         index++;
         left++;
      }

    // right
     while (right<=end)
     {
         temp[index]=arr[right];
         index++;
         right++;
     }
     
     
    //  pass array all value
       
       index=0;
       while (start<=end)
       {
          arr[start]=temp[index];
          index++;
          start++;
       } 

}


void mergesort(int arr[], int start , int end){

     int mid=start+(end-start)/2; 

     if(start==end)
      return; 

    // left side
     mergesort(arr,start,mid);

    // right side
     mergesort(arr,mid+1,end);  

     merge(arr,start,mid,end);

}


int main(){

   int arr[]={6,3,1,2,8,9,10,7,3,10};

   mergesort(arr,0,9);

   for(int i=0; i<10; i++){
    cout<<arr[i]<<" ";
   }cout<<endl;

}