#include <iostream>
using namespace std;
class RightAngled
{
    float a,b;
public:
    RightAngled(float a,float b):a(a),b(b){}
    float getArea()
    {
        float s=a*b;
        if( s<=0)
        {
            throw invalid_argument("Pametrlar xato kiritilgan!");
        }
        return s;
    }
};
int main()
{
    try
    {
        RightAngled r(3,-4);
        cout<<"To'g'ri to'rtburchak yuzasi:"<<r.getArea();
    }
    catch(const invalid_argument& e)
    {
        cerr <<"Xatolik:"<<e.what()<<endl;
    }
    try
    {
        RightAngled r1(3,6);
        cout<<"To'g'ri to'rtburchak yuzi:"<<r1.getArea()<<endl;
    }
    catch(const invalid_argument& e)
    {
        cerr<<"Xatolik:"<<e.what()<<endl;
    }
    return 0;
}
