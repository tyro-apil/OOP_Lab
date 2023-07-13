#include<iostream>
#include<iomanip>
using namespace std;

class Square{
    private:
        float width;
    public:
        Square(){width=0;}
        Square(float w){width=w;}
        void set_width(float length){
            width = length;
        }
        float read_width() const{
            // width += 100;  //incorret const member fn cannot modigy member variables
            return width;
        }

};

int main()
{
    const Square s1(5);
    Square s2;
    float w1, w2;

    // s1.set_width(1); //error s1 object is immutable
    s2.set_width(10);

    w1 = s1.read_width();
    w2 = s2.read_width();

    cout << w1 << " " << w2 << endl;
    return 0;
}