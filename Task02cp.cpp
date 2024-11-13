# include<iostream>
#include<iomanip>
using namespace std;
void outputunit(float length,float width,float height,string unit);
int main()
{
    float length,width,height;
    string unit;
    cout <<"Enter Length of pyramid (meter): ";
    cin>>length;
    cout <<"Enter Width of pyramid (meter): ";
    cin>>width;
    cout <<"Enter Height of pyramid (meter): ";
    cin>>height;
    cout<<"Enter the desired unit(milimeter,centimeter,meter,kilometer): ";
    cin>>unit;
    outputunit(length,width,height,unit);
}
void outputunit(float length,float width,float height,string unit)
{ 
  if(unit=="centimeter")
   {
    cout <<fixed<<setprecision(3)<<(length*width*height*1000000)/3;
   }
 else if(unit=="kilometer")
   {  
    cout <<fixed<<setprecision(3)<<(length*width*height/1000000000)/3;
   }
  else if(unit=="milimeter")
   { 
    cout<<fixed<<setprecision(3)<<(length*width*height*1000000000)/3;
   }
   else if(unit=="meter")
   {
    cout<<fixed<<setprecision(6)<<(length*width*height)/3;
   }
}