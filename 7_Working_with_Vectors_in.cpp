#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> v1;


int user;

do{
   
   cout<<"Insert 1 For Add..."<<endl;
   cout<<"Insert 2 For Access..."<<endl;
   cout<<"Insert 3 For Modify..."<<endl;
   cout<<"Insert 4 For Delete..."<<endl;
   cin>>user;

   switch (user)
   {
   case 1:
      int user_add;
      cout<<"Choose Add Option..."<<endl;
      cout<<"-----------------------------"<<endl;
      cout<<"Enter Element To Add In Vector..."<<endl;
      cin>>user_add;
      cout<<endl;
      v1.push_back(user_add);
     
     cout<<"Element Is Successfully Add..."<<endl;
     cout<<endl;

     for(int v2:v1){
        cout<<v2<<" ";
     }cout<<endl; 

    cout<<"-----------------------------"<<endl;
    cout<<endl; 

    break;
   case 2:
      cout<<"Choose Access Option..."<<endl;
      cout<<"-----------------------------"<<endl;
       for(int v2:v1){
        cout<<v2<<" ";
     }cout<<endl; 
      cout<<"-----------------------------"<<endl;
    break;
   case 3:
       int modify_user,user_value;
      cout<<"Choose Modify Option..."<<endl;
      cout<<"-----------------------------"<<endl;
      cout<<"Enter Index Number...."<<endl;
      cin>>modify_user;
      cout<<"Enter Value To Update..."<<endl;
      cin>>user_value;
       v1[modify_user]=user_value;
      cout<<"Element Successfully Update..."<<endl;
      cout<<"-----------------------------"<<endl;

       cout<<"-----------------------------"<<endl;
       for(int v2:v1){
        cout<<v2<<" ";
     }cout<<endl; 
      cout<<"-----------------------------"<<endl; 

    break;
   case 4:
      int user_pop;
      cout<<"Choose Delete Option..."<<endl;
      cout<<"-----------------------------"<<endl;
      user_pop=v1.back();
      v1.pop_back();
      cout<<user_pop<<" =>  Delete Element Successfully...."<<endl;
      cout<<"-----------------------------"<<endl;
    break;
   default:
       cout<<"Choose Right Optioni..."<<endl;
      cout<<"-----------------------------"<<endl;
    break;
   }
   


}while (user!=0);



}