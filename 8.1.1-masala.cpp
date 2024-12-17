#include <iostream>
#include<cmath>
using namespace std;
template<class T>
class Romb
{
private:
    T burchak;
    T tomon;
public:
    Romb(T b,T t)
    {
        burchak=b;
        tomon=t;
    }
    T Yuza()
    {
        return tomon*tomon*sin((M_PI/180)*burchak);

    }
    T Diogonal()
    {
        if(burchak>=91)
        {
            cout<<"Burchak xato kiritilgan"<<endl;
        }
        else
        {
            float d1=2*tomon*sin((M_PI/180)*burchak/2);
            float d2=2*tomon*sin((M_PI-(M_PI/180)*burchak)/2);
            cout<<"Kichik dioganal d1:"<<d1<<endl;
            cout<<"Katta dioganal d2:"<<d2<<endl;
        }
    }
    T Perimetr()
    {
        return 4*tomon;
    }
};
int main()
{
    double burchak;
    double tomon;
    cout<<"Tomonni kirit:";cin>>tomon;
    cout<<"O'tkir Burchakni kirit:";cin>>burchak;
    Romb<double> r(burchak,tomon);
    cout<<"Romb yuzi:"<<r.Yuza()<<endl;
    cout<<"Romb perimetri:"<<r.Perimetr()<<endl;
    r.Diogonal();
    main();
}
