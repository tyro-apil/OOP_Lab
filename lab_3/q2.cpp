//q2
/*
Assume that you want to check whether the number is prime or not. Write a program that asks for numbers repeatedly. When it finishes 
checking a number the program asks if the user wants to do another calculation. The response can be 'y' or 'n'. Don't forget to use the 
object-oriented concept.
*/

#include<iostream>

class prime{
    private:
        int num;
    public:
        void set_data(int);
        bool is_prime();
};

int main(){
    prime pnum;
    int n;
    char check;
    do{
        std::cout<<"Enter an integer: ";
        std::cin>>n;
        pnum.set_data(n);
        if(pnum.is_prime()){
            std::cout<<"Number is prime"<<std::endl;
        }
        else{
            std::cout<<"Number is composite"<<std::endl;
        }
        std::cout<<"Do you want to continue? (y/n)";
        std::cin>>check;
    }while(check == 'y');
    return 0;
}

void prime::set_data(int n){
    num = n;
}

bool prime::is_prime(){
    if(num==1) return false;
    for(int i=2; i<num; i++){
        if(!(num%i)){
            return false;
        }
    }
    return true;
}