#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,d,m,x;
    cout<<"a:";cin>>a;
    cout<<"x:";cin>>x;
    cout<<"b:";cin>>b;
    cout<<"c:";cin>>c;
    cout<<"d:";cin>>d;
    cout<<"m:";cin>>m;
    float s=a*x+b*c+d;
    try
    {
        if(s<0)
        {
            throw "Parametrlarda xatolik bor:";
        }
        else
        {
            if(s>0 and sqrt(s)+m<0)
            {
                throw "m koeffitsiyentda xatolik bor:";
            }
            else
            {
                cout<<sqrt(sqrt(s)+m)<<endl;
            }
        }
    }
    catch(const char* S)
    {
        cerr<<"Xatolik:"<<S<<endl;
    }
    main();
}
