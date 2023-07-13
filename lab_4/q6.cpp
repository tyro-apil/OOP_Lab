/*Create a class with a data member to hold a "serial number" for each object created from the class. That is, the 
first object created will be numbered 1, the second 2, and so on by using the basic concept of static data members. 
Use static member function if it is useful in the program. Otherwise, make a separate program that demonstrates the 
use of static member function.*/

#include<iostream>
#include<iomanip>
using namespace std;

class Item{
    private:
        unsigned serial_no;
    public:
        static unsigned obj_count;
        Item(){
            serial_no = obj_count;

            obj_count++;
        }
        // static void init_obj_count(){
        //     obj_count = 0;
        // }
        void display_serial(){
            cout << serial_no << endl;
        }

};

unsigned Item::obj_count;

int main()
{
    Item::obj_count = 1;
    Item obj1, obj2, obj3;
    obj1.display_serial();
    obj2.display_serial();
    obj3.display_serial();
    return 0;
}