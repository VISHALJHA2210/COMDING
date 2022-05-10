#include<iostream>
using namespace std;

int main(){
    
    /*bitwise operators=these work in binary form,i.e., convert decimal to binary form and then operate*/
    int x=11,y=5;
    //x=00001011
    //y=00000101

    //AND operator(&)
    int z=x&y;
    //z=00000001
    cout<<"x&y: "<<z<<endl;

    //OR operator(|)
    int a=x|y;
    //a=00001111
    cout<<"x|y: "<<a<<endl;

    //XOR operator(^)[gives 0 for (0,0),(1,1) and gives 1 for (0,1),(1,0)]
    int b=x^y;
    //b=00001110
    cout<<"x^y: "<<b<<endl;

    //NOT operator(~)
    int c=~x;
    //c=11110100
    cout<<"~x: "<<c<<endl; 

    //LEFT shift(<<)[shifts the binary data to left]
    int d=x<<1;//this will shift data to one place left(output comes to be x*2^n,where n is the no of times shifted)
    int e=x<<2;//this will shift data to two place left
    //d=00010110
    //e=00101100
    cout<<"x<<1: "<<d<<endl<<"x<<1: "<<e<<endl;

    //RIGHT shift(>>)[oppositeof left shift]
    int f=x>>2;
    //f=00000010
    cout<<"x>>2: "<<f<<endl;

	return 0;
}