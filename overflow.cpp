#include <iostream>
using namespace std;

//the min and max values of char ranges from -128 to 127 as char contains 1byte or 8 bits, so the max value is 2^8-1.
//If we add 1 more to 127 it goes back to -128 and vice-versa.

int main(){

    char x=127;
    cout<<int(x)<<endl;
    x++;
    cout<<int(x)<<endl;

    char y=-128;
    cout<<int(y)<<endl;
    y--;
    cout<<int(y)<<endl;



	return 0;
}
