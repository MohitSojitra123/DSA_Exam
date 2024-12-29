#include<iostream>
#include<stack>
using namespace std;

// Question 3: Implement Stack using Array
// Problem: Create a stack using an array and perform the following operations: Push, Pop, and Display.
// Input Example:
// Push: 10, 20, 30
// Pop: 1 (Remove the top element)
// Output Example:
// Stack after operations: [10, 20]

int main(){


stack<int> st;
stack<int> st1;

int user,pop_user;

do{

cout<<"1 For Push..."<<endl;
cout<<"2 For POP..."<<endl;
cout<<"3 For Display..."<<endl;
cin>>user;

switch(user)
{
case 1:
     int user_stack;
     cout<<"Choose Push Option..."<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"Enter Element To Add Stack..."<<endl;
     cin>>user_stack;

     st.push(user_stack);
     cout<<"-----------------------------------"<<endl;
      st1=st;
     while (!st1.empty()) {
        cout << st1.top() <<endl;
        st1.pop();
    }     
     cout<<"-----------------------------------"<<endl;     
    break;
case 2:
     cout<<"Choose PoP Option..."<<endl;
     cout<<"------------------------------------"<<endl;
      pop_user=st.top();
     st.pop();
     cout<<pop_user;
     cout<<"  POP Element...."<<endl;
     cout<<"------------------------------------"<<endl;
    break;
case 3:
     cout<<"Choose Display Option..."<<endl;
     cout<<"------------------------------------"<<endl;
       st1=st;
     while (!st1.empty()) {
        cout << st1.top() <<endl;
        st1.pop();
    }    
     cout<<"------------------------------------"<<endl;
    break;
default:
    cout<<"Choose Right Option...."<<endl;
    cout<<"----------------------------"<<endl;
    break;
}
}while (user!=0);



}