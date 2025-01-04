#include <iostream>
#include<cmath>
using namespace std;
template<class T>
class Circle
{
public:
    double radius;
    double vatar;

    Circle(double r,double v):radius(r),vatar(v){}
    T Diametr()
    {
        return 2*radius;
    }
    T Yuza()
    {
        return M_PI*radius*radius;
    }
    T Uzunlik()
    {
        return 2*M_PI*radius;
    }
    T Uchburchak()
    {
        double p=(2*radius+vatar)/2;
        return sqrt(p*(p-radius)*(p-radius)*(p-vatar));
    }
    T CheckInfo()
    {
        cout<<"Doira diametri:"<<Diametr()<<endl;
        cout<<"Doira uzunligi:"<<Uzunlik()<<endl;
        cout<<"Doira yuzi:"<<Yuza()<<endl;
        cout<<"Vatar va radiuslar hosil qilgan uchburchak yuzi:"<<Uchburchak()<<endl;
    }
};
int main()
{
    Circle<double> c1(5.1,6.2);
    Circle<float> c2(6.8,5.4);
    c1.CheckInfo();
    c2.CheckInfo();
}
