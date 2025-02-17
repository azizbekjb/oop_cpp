#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    float x1,x2,y1,y2;
    cout<<"X1:";cin>>x1;
    cout<<"y1:";cin>>y1;
    cout<<"x2:";cin>>x2;
    cout<<"y2:";cin>>y2;
    try
    {
        if(x1==x2 and y1==y2)
        {
            throw "Nuqtalar ustma-ust tushadi";
        }
        else
        {
            cout<<"Ikki nuqta orasidagi masofa:"<<sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        }
    }
    catch(const char* S)
    {
        cerr<<"Xatolik:"<<S<<endl;
    }
    main();
}
