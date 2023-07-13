/*Write a program that has a class to represent time. The class should have constructors to initialize data members
 hour, minute, and second to 0 and to initialize them to values passed as arguments. The class should have a member 
 function to add time objects and return the result as a time object. There should be functions to display time in 
 12-hour and 24-hour format.*/

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

class Time{
    private:
        unsigned hour, minute, second;
    public:
        Time(): hour(0), minute(0), second(0) {}
        Time(unsigned hr, unsigned min, unsigned sec): hour(hr), minute(min), second(sec) {}

        Time add(const Time& t1){
            Time t3;
            t3.second += t1.second + second;
            t3.minute += t3.second/60;
            t3.second %= 60;
            t3.minute += t1.minute + minute;
            t3.hour += t3.minute/60;
            t3.minute %= 60;
            t3.hour += t1.hour + hour;
            return t3;
        }

        void display_12hr_format(){
            unsigned hr = hour%12;
            char meridian[3];
            if(!((hour/12)%2)){
                strcpy(meridian, "AM");
            }
            else{
                strcpy(meridian, "PM");
            }
            if (hr==0){
                hr=12;
            }

            cout << hr << ":" << minute << ":" << second << " " << meridian << endl;
        }

        void display_24hr_format(){
            unsigned hr = hour%24;
            cout << hr << ":" << minute << ":" << second << endl;
        }
};

int main(){
    Time t1(2, 45, 30), t2(12, 35, 55), t3;

    t3 = t1.add(t2);

    t1.display_12hr_format();
    t2.display_12hr_format();
    t3.display_12hr_format();

    cout << endl << endl;

    t1.display_24hr_format();
    t2.display_24hr_format();
    t3.display_24hr_format();

    return 0;

}