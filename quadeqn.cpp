#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a,b,c;
    float root1,root2,D;
    cout<<"THIS PROGRAM IS TO FIND ROOTS OF QUADRATIC EQUATION"<<endl;
    cout<<"enter values for a,b,c for equation ax2 + bx + c: ";
    cin>>a>>b>>c;
    D=((b*b)-(4*a*c));

    root1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    root2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);

    if(D>=0){
        cout<<"roots are"<<endl<<root1<<endl<<root2;
    }

    else{
    	cout<<"roots are imaginary";
    }


	return 0;
}
