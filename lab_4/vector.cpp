/*WAP to create a class caleed vector that reads values (x,y,z). create methods in the class that does addition,dot
 product and cross product and display results*/

#include<iostream>
#include<iomanip>
using namespace std;

class Vector{
    private:
        float x,y,z;
    public:
        Vector(): x(0), y(0), z(0){}
        Vector(float X, float Y, float Z): x(X), y(Y), z(Z) {}

        void setData(float X, float Y, float Z){
            x=X; y=Y; z=Z;
        }
        void showData(){
            cout << "[ " << x << ", " << y << ", " << z <<" ]" << endl;
        }
        Vector add (const Vector& );
        float dot(const Vector& );
        Vector cross(const Vector& );
};

Vector Vector::add (const Vector& vectB){
    Vector result;
    result.x = x + vectB.x;
    result.y = y + vectB.y;
    result.z = z + vectB.z;
    return result;
}
float Vector::dot (const Vector& vectB){
    float dot_result = x*vectB.x + y*vectB.y + z*vectB.z;
    return dot_result;
}

Vector Vector::cross (const Vector& vectB){
    Vector result;
    result.x = y*vectB.z - vectB.y*z;
    result.y = vectB.x*z - x*vectB.z;
    result.z = x*vectB.y - vectB.x*y;
    return result;
}


int main()
{
    Vector vectA(1, 2, 4), vectB(2, 6, 9), vect_add, vect_cross;
    float dot;

    cout << "VectA = ";
    vectA.showData();
    cout << "VectB = ";
    vectB.showData();

    vect_add = vectA.add(vectB);
    dot = vectA.dot(vectB);
    vect_cross = vectA.cross(vectB);

    cout << "VectA + VectB = ";
    vect_add.showData();
    cout << "VectA . VectB = " << dot << endl;
    cout << "VectA x VectB = ";
    vect_cross.showData(); 
    return 0;
}