#include <iostream>
#include<iomanip>
using namespace std;
float taxCalculator(char code, float price);
int main()
{
    char code;
    float price,finalPrice;
    cout<<"Enter the vehicle type code(M,E,S,V,T): ";
    cin>>code;
    cout<<"Enter the price of vehicle: $";
    cin>>price;
    finalPrice=taxCalculator(code,price);
    cout<<fixed<<setprecision(2)<<"The final price of vehicle of type "<<code<<" after adding the tax is $"<<finalPrice;
}
float taxCalculator(char code, float price)
{
    float totalPrice;
 if(code=='M')
  {
    totalPrice=price+(price*6)/100;
  } 
  else if(code=='E')
  {
    totalPrice=price+(price*8)/100;
  }
  else if(code=='S')
  {
    totalPrice=price+(price*10)/100;
  }
  else if(code=='V')
  {
    totalPrice=price+(price*12)/100;
  }
  else if(code=='T')
  {
    totalPrice=price+(price*15)/100;
  }
  return totalPrice;
}