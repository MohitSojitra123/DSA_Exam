#include<iostream>
using namespace std;

// Question 9: Create a Class for Matrix Operations
// Problem: Implement a class `Matrix` with member functions for addition, subtraction, and multiplication of
// matrices. Use proper constructors to initialize the matrices.
// Input Example:
// Matrix A:
// 1 2
// 3 4
// Matrix B:
// 5 6
// 7 8
// Output Example:
// Matrix Addition Result:
// 6 8
// 10 12

class Matrix{
public:
Matrix(){

int row,col;
cout<<"Enter Row Size In Matrix..."<<endl;
cin>>row;
cout<<"Enter Col Siz In Matrix..."<<endl;
cin>>col;

cout<<"------------------------------"<<endl;
cout<<"Enter Frist Matrix Element..."<<endl;
cout<<"------------------------------"<<endl;

int matrix1[row][col];
int matrix2[row][col];

for(int i=1; i<=row; i++){
    for(int j=1; j<=col; j++){
        cout<<"Enter Element..."<<endl;
        cin>>matrix1[i][j];
    }
}

cout<<"-------------------------------"<<endl;
for(int i=1; i<=row; i++){
    for(int j=1; j<=col; j++){
        cout<<matrix1[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"-------------------------------"<<endl;
cout<<"------------------------------"<<endl;
cout<<"Enter Seconde Matrix Element..."<<endl;
cout<<"------------------------------"<<endl;

for(int i=1; i<=row; i++){
    for(int j=1; j<=col; j++){
        cout<<"Enter Element..."<<endl;
        cin>>matrix2[i][j];
    }
}

cout<<"-------------------------------"<<endl;
for(int i=1; i<=row; i++){
    for(int j=1; j<=col; j++){
        cout<<matrix2[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"-------------------------------"<<endl;

int user;

do{

    cout<<"1 For Addition..."<<endl;
    cout<<"2 For Subtraction..."<<endl;
    cout<<"3 For Multiplction..."<<endl;
    cin>>user;

    switch (user)
    {
    case 1:
        cout<<"Choose 1 For Addition..."<<endl;
        cout<<"---------------------------"<<endl;

        for(int i=1; i<=row; i++){
            for(int j=1; j<=col; j++){
                cout<<matrix1[i][j]+matrix2[i][j]<<" ";
            }
            cout<<endl;
        }        
        cout<<"---------------------------"<<endl;
        cout<<endl;
        break;
    case 2:
        cout<<"Choose 2 For Subtraction..."<<endl;
        cout<<"---------------------------"<<endl;

        for(int i=1; i<=row; i++){
            for(int j=1; j<=col; j++){
                cout<<matrix1[i][j]-matrix2[i][j]<<" ";
            }
            cout<<endl;
        }      
        cout<<"---------------------------"<<endl;
        cout<<endl;  
        break;
    case 3:
        cout<<"Choose 3 For Multiplection..."<<endl;
        cout<<"---------------------------"<<endl;

        for(int i=1; i<=row; i++){
            for(int j=1; j<=col; j++){
                cout<<matrix1[i][j]*matrix2[i][j]<<" ";
            }
            cout<<endl;
        }       
        cout<<"---------------------------"<<endl;
        cout<<endl; 
        break;
    default:
        cout<<"----------------------------"<<endl;
        cout<<"Choose Right Option..."<<endl;
        cout<<"----------------------------"<<endl;
        break;
    }
}while (user!=0);
}




// void addition(int array1[],int array2[],int row,int col){
// int array[row][col];
// for(int i=1; i<=row; i++){
//     for(int j=1; j<=col; j++){
//        array[i][j]=array1[i][j]+array2[i][j]; 
//     }
// }
// for(int i=1; i<=row; i++){
//     for(int j=1; j<=col; j++){
//       cout<<array[i][j]<<" ";
//     }
//     cout<<endl;
// }
// }

// void subtraction(int array1[],int array2[],int row,int col){
// int array[row][col];
// for(int i=1; i<=row; i++){
//     for(int j=1; j<=col; j++){
//        array[i][j]=array1[i][j]-array2[i][j]; 
//     }
// }
// for(int i=1; i<=row; i++){
//     for(int j=1; j<=col; j++){
//       cout<<array[i][j]<<" ";
//     }
//     cout<<endl;
// }
// }


// void multiplection(int array1[],int array2[],int row,int col){
// int array[row][col];
// for(int i=1; i<=row; i++){
//     for(int j=1; j<=col; j++){
//        array[i][j]=array1[i][j]*array2[i][j]; 
//     }
// }
// for(int i=1; i<=row; i++){
//     for(int j=1; j<=col; j++){
//       cout<<array[i][j]<<" ";
//     }
//     cout<<endl;
// }
// }


};

int main(){

Matrix obj1;




}