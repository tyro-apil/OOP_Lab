/*Write a program that has a class with a dynamically allocated character array as its data member. One object should 
contain "Engineers are" and another should contain " Creatures of logic". Member function join() should concatenate 
two strings by passing two objects as arguments. Display the concatenated string through a member function. Use
 constructors to allocate and initialize the data member. Also, write a destructor to free the allocated memory for 
 the character array. Make your own function for the concatenation of two strings.*/

#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

class Store_char{
    private:
        char* arr;
    public:
        Store_char(){
            arr = new char[100];
            strcpy(arr, "");
        }
        Store_char(char* str){
            arr = new char[100];
            strcpy(arr, str);
        }
        ~Store_char(){
            delete[] arr;
        }

        void join(Store_char& str1, Store_char& str2){
            strcpy(arr, "");
            int i=0;
            for (int j=0; str1.arr[j]!='\0'; j++, i++){
                arr[i] = str1.arr[j];
            }
            for (int j=0; str2.arr[j]!='\0'; j++, i++){
                arr[i] = str2.arr[j];
            }
        }

        void display(){
            cout << arr << endl;
        }
};

int main()
{
    char start[] = "Engineers are", end[] = " Creatures of logic";
    Store_char str1(start), str2(end), str3;
    str3.join(str1, str2);

    str1.display();
    str2.display();
    
    str3.display();
    
    return 0;
}