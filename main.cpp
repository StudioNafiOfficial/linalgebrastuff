#include <iostream>
#include "Datatypes/math_vector.h"
using namespace std;

int main() {

    Math_Vector vec1({2, 3});
    cout << "vec1: ";
    vec1.Print();
    Math_Vector vec2({3, 7});
    cout << "vec2: ";
    vec2.Print();

    Math_Vector vec3 = vec1.AddVector(vec2);
    cout << "Adding vec1 and vec2: ";
    vec3.Print();
    
    vec3 = vec1.SubtractVector(vec2);
    cout << "Subtracting vec1 and vec2: ";
    vec3.Print();

    vec3 = vec1.MultiplyScaler(3);
    cout << "vec1 scaled by 3: ";
    vec3.Print();

    vec3 = vec2.MultiplyScaler(2);
    cout << "vec2 scaled by 2: ";
    vec3.Print();

    cout << "Dot product of vec1 and vec2: " << vec1.GetDotProduct(vec2) << endl;

    cout << "Vector norm of vec1: " << vec1.GetVectorNorm() << endl;
    cout << "Vector norm of vec2: " << vec2.GetVectorNorm() << endl;

    return 0;
}