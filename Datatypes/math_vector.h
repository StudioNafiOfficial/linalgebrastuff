#ifndef MATH_VECTOR_H
#define MATH_VECTOR_H
#include <vector>

class Math_Vector {
    public:
        Math_Vector();
        Math_Vector(std::vector<int> input_nums);
        void SetComponents(std::vector<int> input_nums);
        std::vector<int> GetComponents();
        int GetDimension();
        void AddNewComponent(int input_num);
        void AddNewComponent(int input_num, int input_index);
        void ChangeComponent(int input_num, int index);

        Math_Vector AddVector(Math_Vector input_math_vector);
        Math_Vector SubtractVector(Math_Vector input_math_vector);
        Math_Vector MultiplyScaler(int input_scaler);
        int GetDotProduct(Math_Vector input_math_vector);
        double GetVectorNorm();

        void Print();

    private:
        std::vector<int> components;
};

#endif 