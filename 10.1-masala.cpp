#include <iostream>
#include<string.h>
using namespace std;
class Mashina
{
public:

    int num;
public:
    Mashina(int n)
    {
        num=n;
    }
    void Info()
    {
            switch(num)
            {
                case 30:cout<<"Samarqand ";break;
                case 01:
                case 10:cout<<"Toshkent:";break;
            }
    }
};
int main()
{
    int n;
    cin>>n;
    Mashina m(n);
    m.Info();
    main();
    return 0;
}
