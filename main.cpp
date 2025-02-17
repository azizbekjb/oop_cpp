#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b;
    cin>>a>>b;
    try
    {
        if(a<0 or b<0)
        {
            throw "Parametrlardan biri manfiy";
        }
        else
        {
            cout<<sqrt(a*b)<<endl;
        }
    }
    catch(const char* S)
    {
        cout<<"Xatolik:"<<S<<endl;
    }
    main();
}
