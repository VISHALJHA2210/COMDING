#include<iostream>
using namespace std;
//enum function is used to create a datatype of owr own in which elements are related to each other
enum dept {CS,ECE,MCE,CIVIL};
//TYPEDEF-basically used for readability of program when short abbreviated variables are used
typedef int marks;

int main(){
    dept d;//calling newly created datatype dept, and the elements in the curly brackets have value staring from 0 and increase from lest to right 
    d=CS;

    cout<<d<<endl;
 
    //TYPEDEF
    marks m1=5,m2=12,m3=17;//m1 has same datatype as marks
    cout<<m1<<endl<<m2<<endl<<m3;


    return 0;
}