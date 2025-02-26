#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,x,z;
    cout<<"a:";cin>>a;
    cout<<"b:";cin>>b;
    cout<<"x:";cin>>x;
    cout<<"z:";cin>>z;
    try
    {
        if(x!=1 and z!=1 and x>0 and z>0 and a>0 and b>0)
        {
            cout<<(log(a)/log(x))+(log(b)/log(z))<<endl;
        }
        else
        {
            throw "Parametrlarda xatolik bor:";
        }
    }
    catch(const char* S)
    {
        cerr<<"Xatolik:"<<S<<endl;
    }
    main();
}
