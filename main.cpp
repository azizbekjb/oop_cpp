#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"a:";cin>>a;
    cout<<"a sonning 2 lik sanoq sistemasidagi ko'rinishi:";cin>>b;
    int c;
    try
    {
        while(b!=0)
        {
            c=b%10;
            b=b/10;
            if(c==1 or c==0 )
            {
                cout<<"Son to'g'ri kiritilgan"<<endl;
                break;
            }
            else
            {
                throw "Son ikkilik sanoq sistemasida emas";
            }
        }
    }
    catch(const char* S)
    {
        cerr<<"Xatolik:"<<S<<endl;
    }
    main();
}
