#include<iostream>
using namespace std;

int main(){
   int scode,marks;
   enum dept{CSE=1,SE,MCE,ECE,ME};

   cout<<"Choose the course you want by entering: "<<endl<<"1 for CSE"<<endl<<"2 for SE"<<endl<<"3 for MCE"<<endl<<"4 for ECE"<<endl<<"5 for ME"<<endl;
   cout<<"Enter subject code: ";
   cin>>scode;
   cout<<endl<<"Enter %age marks obtained: ";
   cin>>marks;

   if((scode<1 || scode>5) || (marks>100 || marks<0)){
     cout<<"Invalid input"<<endl;
   }

  else{

   switch(scode){
      case 1:
          if(marks>=95){
            cout<<"You are eligible for enrollment in CSE"<<endl;
          }
          else{
            cout<<"you are not eligible"<<endl;
          }
         break;

         case 2:
             if(marks>=90){
               cout<<"You are eligible for enrollment in SE"<<endl;
             }
             else{
               cout<<"you are not eligible"<<endl;
             }
            break;

        case 3:
            if(marks>=85){
              cout<<"You are eligible for enrollment in MCE"<<endl;
            }
            else{
              cout<<"you are not eligible"<<endl;
            }
            break;

        case 4:
            if(marks>=80){
              cout<<"You are eligible for enrollment in ECE"<<endl;
            }
            else{
              cout<<"you are not eligible"<<endl;
            }
           break;

         case 5:
            if(marks>=70){
              cout<<"You are eligible for enrollment in ME"<<endl;
            }
            else{
              cout<<"you are not eligible"<<endl;
            }
              break;
   }
 }
   return 0;
}
