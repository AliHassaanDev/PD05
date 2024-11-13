#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
void header();
int menu();
float addition();
float subtraction();
float multiplication();
float division();
int mode();
float percentage();
int power();
int main()
{
    int option,modd,pwr;
    float add,subtract,multiply,div,perc;
    while(true)
    {
        header();
        option=menu();
        if(option==1)
        {
            add=addition();
            cout<<"Sum= "<<add<<endl;
        }
        else if(option==2)
        {
            subtract=subtraction();
            cout<<"Subtraction= "<<subtract<<endl;
        }
        else if(option==3)
        {
            multiply=multiplication();
            cout<<"Product= "<<multiply<<endl;
        }
         else if(option==4)
        {
            div=division();
            cout<<"Division= "<<div<<endl; 
        }
         else if(option==5)
        {
            modd=mode();
            cout<<"Mode= "<<modd<<endl;
        }
         else if(option==6)
        {
            perc=percentage();
            cout<<"Percentage= "<<perc<<"%"<<endl;
        }
         else if(option==7)
        {
            pwr=power();
            cout<<"Power= "<<pwr<<endl;
        }
         else if(option==8)
        {
            return 0;
        }
        cout<<"Press any key to continue: ";
        getch();
        system("cls");
    }
    

}
void header()
{
    cout<<"************************************************"<<endl;
    cout<<"****************** Calculator ******************"<<endl;
    cout<<"************************************************"<<endl<<endl;
}
int menu()
{ 
    int option;
    cout<<"Option 1: Addition"<<endl;
    cout<<"Option 2: Subtraction"<<endl;
    cout<<"Option 3: Multiplication"<<endl;
    cout<<"Option 4: Division"<<endl;
    cout<<"Option 5: Mode"<<endl;
    cout<<"Option 6: Percentage"<<endl;
    cout<<"Option 7: Power"<<endl;
    cout<<"Option 8: Exit"<<endl<<endl;
    cout<<"Choose your option: ";
    cin>>option;
    return option;
    
}
float addition()
{ 
    cout<<"Option 1: Addition"<<endl;
    float sum,num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    sum=num1+num2;
    return sum;
}
float subtraction()
{ 
    cout<<"Option 2: Subtraction"<<endl;
    float minus,num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    minus=num1-num2;
    return minus;
}
float multiplication()
{ 
    cout<<"Option 3: Multiplication"<<endl;
    float product,num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    product=num1*num2;
    return product;
}
float division()
{ 
    cout<<"Option 4: Division"<<endl;
    float divide,num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    divide=num1/num2;
    return divide;
}
int mode()
{ 
    cout<<"Option 5: Mode"<<endl;
    int mod,num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    mod=num1%num2;
    return mod;
}
float percentage()
{ 
    cout<<"Option 6: Percentage"<<endl;
    float percent,num1,num2;
    cout<<"Enter obtained number: ";
    cin>>num1;
    cout<<"Enter total number: ";
    cin>>num2;
    percent=(num1/num2)*100;
    return percent;
}
int power()
{ 
    cout<<"Option 7: Power"<<endl;
    int powe,num1,num2;
    cout<<"Enter number: ";
    cin>>num1;
    cout<<"Enter power: ";
    cin>>num2;
    powe=pow(num1,num2);
    return powe;
}
