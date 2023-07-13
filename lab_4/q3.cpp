/*Write a class that can store Department ID and Department Name with constructors to initialize its members. Write 
destructor member in the same class and display the message "Object n goes out of the scope". Your program should be
 made such that it should show the order of constructor and destructor invocation.*/

#include<iostream>
#include<cstring>
using namespace std;

class Department{
    private:
        unsigned id;
        char name[100];
    public:
        Department(): id(0), name("") {
            cout << "Object created" << endl;
        }
        Department(unsigned ID, char* str): id(ID) {
            strcpy(name, str);
            cout << "Object created" << endl;
        }
        ~Department(){
            cout << "Object with id " << id <<  " goes out of the scope" << endl;
        }

};

int main()
{
    char name[] = "Computer";
    Department d1, d2(10, name);
    return 0;
}