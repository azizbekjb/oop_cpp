#include <iostream>
using namespace std;
//Calculator sinfi
template<typename T>
class Calculator
{
    public:
    T add(T a, T b)
    {
        return a+b;
    }
    T subtract(T a,T b)
    {
        return a-b;
    }
    T multiply(T a,T b)
    {
        return a*b;
    }
    T devide(T a, T b)
    {
        if(b==0)
        {
            cout<<"Xatolik:bo'lish amalida nolga bo'lish mumkin emas";
            return 0;
        }
        return a/b;
    }
};
int main()
{
    Calculator<int>intCalculator;
    Calculator<float>floatCalculator;

    cout<<"4+8="<<intCalculator.add(4,8)<<endl;
    cout<<"4-8="<<intCalculator.subtract(4,8)<<endl;
    cout<<"4*8="<<intCalculator.multiply(4,8)<<endl;
    cout<<"4/8="<<intCalculator.devide(4,8)<<endl;

    cout<<"4+8="<<floatCalculator.add(4,8)<<endl;
    cout<<"4-8="<<floatCalculator.subtract(4,8)<<endl;
    cout<<"4*8="<<floatCalculator.multiply(4,8)<<endl;
    cout<<"4/8="<<floatCalculator.devide(4,8)<<endl;
}
