#include<iostream>
using namespace std;

// Question 5: Use of Constructors in C++
// Problem: Implement a class `Rectangle` with attributes `length` and `breadth`. Use a parameterized
// constructor to initialize the attributes and calculate the area of the rectangle.
// Input Example:
// Length: 5, Breadth: 10
// Output Example:
// Area: 50


class Rectangle{

  public:
  Rectangle(int length,int breadth){
       cout<<"Area Of Rectangle Is..."<<length*breadth<<endl; 
  };
};

int main(){

int len,bre;
cout<<"Enter Rectangle Length Size..."<<endl;
cin>>len;
cout<<"Enter Rectangle Breadth Size..."<<endl;
cin>>bre;


Rectangle rec(len,bre);


}
