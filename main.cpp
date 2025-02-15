#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"a:";cin>>a;
    cout<<"b:";cin>>b;
    cout<<"c:";cin>>c;
    float d=b*b-4*a*c;
    try
    {
            if(a==0)
            {
                throw "a Koeffitsyent xato";
            }
            else
            {
                if(d<0)
                {
                    throw "Haqiqiy ildizi mavjud emas";
                }
                else
                {
                    if(d==0)
                    {
                        cout<<"Yagona yechim:"<<(-b)/(2*a)<<endl;
                    }
                    else
                    {
                        if(d>0)
                        {
                            cout<<"x1:"<<(-b-sqrt(d))/(2*a)<<endl;
                            cout<<"x2:"<<(-b+sqrt(d))/(2*a)<<endl;
                        }
                    }
                }
            }
    }
    catch(const char* S)
    {
        cout<<"Xatolik:"<<S<<endl;
    }
    main();
    return 0;
}
