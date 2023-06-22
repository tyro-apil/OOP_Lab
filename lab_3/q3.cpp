//q3
/*
Create a class called carpark that has int data member for car id, int data member for charge/hour, and float data member for the parked 
time. Make functions to set data members and show the charges and parked hours of the corresponding car id. Make functions for setting and 
showing the data members. Member function should be called from other functions
*/

#include<iostream>

class carpark{
    private:
        int car_id, charge_per_hr;
        float parked_time;
    public:
        void set_data(int, int, float);
        void show_data();
};

int main(){
    carpark car;
    car.set_data(4011, 100, 4.5);
    car.show_data();
    return 0;
}

void carpark::set_data(int car_id, int charge_per_hr, float parked_time){
    this->car_id = car_id;
    this->charge_per_hr = charge_per_hr;
    this->parked_time = parked_time;
}

void carpark::show_data(){
    std::cout<<"Car ID is "<<car_id<<std::endl;
    std::cout<<"Charge per hour is Rs. "<<charge_per_hr<<std::endl;
    std::cout<<"Parked time in hours is "<<parked_time<<std::endl;
}