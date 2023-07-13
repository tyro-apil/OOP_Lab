/*Assume that one constructor initializes data member say num_vehicle, hour, and rate. There should be a 10% discount 
if num_vehicle exceeds 10. Display the total charge. Use two objects and show a bit-by-bit copy of one object to 
another (make your own copy constructor).*/

#include<iostream>
using namespace std;

class Vehicle{
    private:
        unsigned num_vehicle, hour;
        float rate;
    public:
        Vehicle(){};
        Vehicle(unsigned num, unsigned hr, float rt): num_vehicle(num), hour(hr), rate(rt){}
        Vehicle(const Vehicle& v1){
            num_vehicle = v1.num_vehicle;
            hour = v1.hour;
            rate = v1.rate;
            cout << "Value from given object copied" << endl;
        }

        void display(){
            float disc;
            float total = rate * hour;
            if (num_vehicle > 10){
                total = 0.9*total;
            }
            cout << "Total charge = " << total << endl;
        }
};

int main()
{
    Vehicle car(123, 4, 25);
    Vehicle ford(car);
    ford.display();
    return 0;
}