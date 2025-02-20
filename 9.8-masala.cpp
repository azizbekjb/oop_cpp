#include <iostream>
using namespace std;
int main()
{
    int day,month,year;
    cout<<"Kun:";cin>>day;
    cout<<"Oy:";cin>>month;
    cout<<"Yil:";cin>>year;
    int kun,oy,yil;
    cout<<"Bugungi kun:";cin>>kun;
    cout<<"Bugungi oy:";cin>>oy;
    cout<<"Bugungi yil:";cin>>yil;
    try
    {
        if(yil<year || oy>12 || month>12 || day>32 || kun >32 )
        {
            throw "Tug'ilgan sana xato kiritilgan!";
        }
        else
        {
            if(oy>=month)
            {
                cout<<"Inson "<<(yil-year)*12+oy-month<<" oy yashagan"<<endl;
            }
            else
            {
                if(oy<=month)
                {
                    cout<<"Inson "<<(yil-year-1)*12+12-(month-oy)<<" oy yashagan"<<endl;
                }
            }
        }
    }
    catch(const char* S)
    {
        cerr <<"Xatolik:"<<S<<endl;
    }
    main();
    return 0;
}
