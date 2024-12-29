#include<iostream>
#include<vector>
#include<string>
using namespace std;

// Question 10: Create a To-Do List Application using Class
// Problem: Implement a class `ToDoList` that supports adding tasks, viewing all tasks, marking a task as
// completed, and deleting tasks. Use a vector to store tasks.
// Input Example:
// Add: "Complete assignment", "Attend meeting"
// Mark Complete: 1
// Output Example:
// Remaining Tasks: "Attend meeting"

class To_Do_List{

public:

vector<string> v1;

To_Do_List(){

int user,delete_index;
  string user_task,update_task;

do{

cout<<"1 For Add Task..."<<endl;
cout<<"2 For Update Task..."<<endl;
cout<<"3 For Delete Task..."<<endl;
cout<<"4 For Display Task..."<<endl;
cout<<"0 For Exit..."<<endl;
cout<<"-------------------"<<endl;
cin>>user;
cin.ignore();


switch (user)
{
case 1:
    cout<<"Choose 1 For Add Task...."<<endl; 
    cout<<"------------------------------"<<endl;
    cout<<"Enter Task..."<<endl;
    getline(cin,user_task);

     v1.push_back(user_task);
     cout<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<user_task<<endl;
    cout<<"Task Is Successfully Add..."<<endl;
    cout<<"-------------------------------"<<endl;
    break;
case 2:
    int update_index;
    cout<<"Choose 2 For Update Task...."<<endl; 
    cout<<"------------------------------"<<endl;
    cout<<"Enter Index Number To Update Task..."<<endl;
    cin>>update_index;
    cin.ignore();
    
    cout<<"------------------------------"<<endl;
    cout<<"Old Task Is...."<<endl;
    cout<<v1[update_index]<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"Enter Update Task and Replace To This..."<<endl;
    getline(cin,update_task);
     
    v1[update_index]=(update_task); 
  
    cout<<"Task Is Update Successfully..."<<endl;
    cout<<"------------------------------"<<endl;
    cout<<v1[update_index]<<endl;
    cout<<"------------------------------"<<endl;
     
    break;
case 3:
    cout<<"Choose 3 For Delete Task...."<<endl; 
    cout<<"------------------------------"<<endl;
    cout<<"Enter Index Number To Delete Task..."<<endl;
    cin>>delete_index;
    cin.ignore();

    v1.erase(v1.begin()+delete_index);
    
    cout<<"Task Is Successfully Delete..."<<endl;
    cout<<"------------------------------"<<endl;

     for(string v2:v1){
        cout<<v2<<endl;
    }
    cout<<endl;


    cout<<"------------------------------"<<endl;
    break;
case 4:
    cout<<"Choose 4 For Display Task...."<<endl; 
    cout<<"------------------------------"<<endl;
    
    for(string v2:v1){
        cout<<v2<<endl;
    }
    cout<<endl;

    cout<<"------------------------------"<<endl;
    break;

default:
    cout<<""<<endl;
    cout<<"------------------------------"<<endl;
    break;
}
}while (user!=0);
}

};

int main(){


To_Do_List obj1;

}