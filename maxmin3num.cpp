#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;

	if(a>b && a>c){
		cout<<a<<" is the biggest no."<<endl;

		if(b>c){
			cout<<c<<" is the smallest no."<<endl;
		}

		else{
			cout<<b<<" is the smallest no."<<endl;
		}
	}

    else if(b>a && b>c){
		cout<<b<<" is the biggest no."<<endl;

		if(a>c){
			cout<<c<<" is the smallest no."<<endl;
		}
		else{
			cout<<a<<" is the smallest no."<<endl;
		}
	}

    else if(c>a && c>b){
		cout<<c<<" is the biggest no."<<endl;

		if(a>b){
			cout<<b<<" is the smallest no."<<endl;
		}
		else{
			cout<<a<<" is the smallest no."<<endl;
		}
	}


	return 0;
}
