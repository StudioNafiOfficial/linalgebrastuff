#include "math_vector.h"
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

Math_Vector::Math_Vector() {

}

Math_Vector::Math_Vector(vector<int> input_nums) {
    components = input_nums;
}

void Math_Vector::SetComponents(vector<int> input_nums) {
    components = input_nums;
}

vector<int> Math_Vector::GetComponents() {
    return components;
}

int Math_Vector::GetDimension() {
    return components.size();
}

void Math_Vector::AddNewComponent(int input_num) {
    components.push_back(input_num);
}

void Math_Vector::AddNewComponent(int input_num, int input_index) {
    components.insert(components.begin() + input_index, input_num);
}

void Math_Vector::ChangeComponent(int input_num, int input_index) {
    components.at(input_index) = input_num;
}

Math_Vector Math_Vector::AddVector(Math_Vector input_math_vector) {

    if (components.size() != input_math_vector.GetDimension()) {
        __throw_invalid_argument("Vectors must be of the same dimension to add!");
    }

    Math_Vector vectorSum;    

    for (int i = 0; i < components.size(); i++) {
        vectorSum.AddNewComponent(components.at(i) + input_math_vector.GetComponents().at(i));
    }
    
    return vectorSum;
}

Math_Vector Math_Vector::SubtractVector(Math_Vector input_math_vector) {

    if (components.size() != input_math_vector.GetDimension()) {
        __throw_invalid_argument("Vectors must be of the same dimension to subtract!");
    }

    Math_Vector vectorSum;    

    for (int i = 0; i < components.size(); i++) {
        vectorSum.AddNewComponent(components.at(i) - input_math_vector.GetComponents().at(i));
    }
    
    return vectorSum;
}

Math_Vector Math_Vector::MultiplyScaler(int input_scaler) {
    Math_Vector vectorProduct;
    for (int i = 0; i < components.size(); i++) {
        vectorProduct.AddNewComponent(components.at(i) * input_scaler);
    }
    return vectorProduct;
}

int Math_Vector::GetDotProduct(Math_Vector input_math_vector) {
    
    if (components.size() != input_math_vector.GetDimension()) {
        __throw_invalid_argument("Vectors must be of the same dimension to multiply!");
    }

    int sum = 0;
    for (int i = 0; i < components.size(); i++) {
        sum += (components.at(i) * input_math_vector.GetComponents().at(i));
    }
    return sum;
}

double Math_Vector::GetVectorNorm() {
    double norm = 0;
    for (int i = 0; i < components.size(); i++) {
        norm += pow(components.at(i), 2);
    }
    return sqrt(norm);
}

void Math_Vector::Print() {
    cout << "[";
    for (int i = 0; i < components.size(); i++) {
        if (i == components.size()-1) {
            cout << components.at(i) << "]" << endl;
        } else {
            cout << components.at(i) << ", ";
        }
    }
}
