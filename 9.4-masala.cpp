#include <iostream>
using namespace std;
int main()
{
    float a,b;
    cin>>a>>b;
    try
    {
        if(a==0)
        {
            throw "Kasr maxraji nol bo'lishi mumkin emas";
        }
        else
        {
            cout<<-b/a;
        }
    }
    catch(const char* S)
    {
        cerr<<"Xatolik:"<<S<<endl;
    }
    main();
}
