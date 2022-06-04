#include <iostream>
#include <ctime>  
using std::cout;
using std::endl;

#include <iomanip>
using std::setfill; 
using std::setw;
#include "Time.h"

Time::Time(int hr, int min, int sec)
{
  setTime(hr, min, sec);

}

Time::Time()
{
  time_t timer;
  struct tm *horarioLocal;

  time(&timer); 
  horarioLocal = localtime(&timer); 

  int hora = horarioLocal->tm_hour;
  int min  = horarioLocal->tm_min;
  int sec  = horarioLocal->tm_sec;
  setTime(hora,min,sec);
}


void Time::setTime(int h, int m, int s)
{
  setHour(h);
  setMinute(m);
  setSecond(s);  
}

void Time::setHour(int h)
{
  hour = (h >=0 && h < 24) ? h : 0;
}


inline void Time::setMinute(int m)
{
  minute = (m >= 0 && m < 60) ? m : 0;
}

void Time::printUniversal()
{
  cout << setfill('0') << setw(2) << getHour() << ":" <<
  setw(2) << getMinute() << ":" << setw(2) << getSecond() << endl;
}

void Time::printStandard()
{
  cout << ( (getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (getHour() < 12 ? " AM" : " PM") << endl;
}
