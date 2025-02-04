#include <iostream>
using namespace std;
int main()
{
    float R,S;
    cout<<"Radiusni kirit:";cin>>R;
    S=3.14*R*R;
    try
    {
        if(S<=0)
        {
            throw "Parametr xato";
        }
        else
        {
            cout<<"Doira yuzi:"<<S<<endl;
        }
    }
    catch(const char* S)
    {
        cerr<<"Xatolik:"<<S<<endl;
    }
}
