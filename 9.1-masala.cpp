#include <iostream>
#include<cmath>
using namespace std;

//Traingle sinfi
class Triangle
{
    float a,b,c;
public:
    Triangle(float a, float b,float c):a(a),b(b),c(c){}
    float calcutArea()
    {
        float p=(a+b+c)/2;
        float area=sqrt(p*(p-a)*(p-b)*(p-c));
        //Yuz beradigan istisnoli holatlar uchun tekshirish
        if(isnan(area) || area<=0)
        {
            throw invalid_argument("Uchburchak noto'g'ri parametrlar bilan yaratildi");
        }

        return area;
    }
};
int main()
{
    try
    {
        //istisnoli holatlarni generatsiya qilish
        //Bunday uchburchak mavjud emas, deb ko'rsatiladi
        Triangle triangle1(3,4,8);
        cout<<"Uchburchak yuzasi:"<<triangle1.calcutArea()<<endl;
    }
    catch(const invalid_argument& e)
    {
        cerr <<"Xatolik:"<<e.what()<<endl;
    }

    try
    {
        //Istisnoli holatlarni generatsiya qilish
        //Bunday uchburchak mavjud emas,deb ko'rsatiladi
        Triangle triangle2(2,-3,4);
        cout<<"Uchburchak yuzasi:"<<triangle2.calcutArea()<<endl;
    }
    catch(const invalid_argument& e)
    {
        cerr <<"Xatolik:"<<e.what()<<endl;
    }

    try
    {
        //Istisnoli holatlarni generatsiya qilish
        //Bunday uchburchak mavjud emas,deb ko'rsatiladi
        Triangle triangle3(5,12,13);
        cout<<"Uchburchak yuzasi:"<<triangle3.calcutArea()<<endl;
    }
    catch(const invalid_argument& e)
    {
        cerr <<"Xatolik:"<<e.what()<<endl;
    }
    return 0;
}
