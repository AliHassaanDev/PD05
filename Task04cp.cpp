#include <iostream>
using namespace std;
void projectTimeCalculator(int hours,int days,int workers);
 int main()
 {
    int hours,days,workers;
    cout<<"Enter the needed hours: ";
    cin>>hours;
    cout<<"Enter the days that the firm has: ";
    cin>>days;
    cout<<"Enter the number of all workers: ";
    cin>>workers;
    projectTimeCalculator(hours,days, workers);
 }
 void projectTimeCalculator(int hours,int days,int workers)
 {
  int timeHave=(9*workers*days);
  if(timeHave<hours)
  {
    int timeShort=hours-timeHave;
    cout<<"Not enough time! "<<timeShort<<" hours needed.";
  }
  else
  {
    int timeExtra=timeHave-hours;
    cout<<"Yes! "<<timeExtra<<" hours left.";
  }
 }