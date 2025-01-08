#include <iostream>
using namespace std;
template<class T>
class FootballClub
{
public:
    T *salary;
    int *age;
    int *goal;
    int num;
    T Info()
    {
        T s1=0,s2=0,s3=0;
        for(int i=1;i<=num;i++)
        {
            cout<<i<<"-futbolchi "<<age[i]<<" yoshda, "<<salary[i]<<" so'm miqdorida maosh oladi.Uning gollari soni "<<goal[i]<<" ta"<<endl;
            s1+=age[i];
            s2+=salary[i];
            s3=goal[i];
        }
        cout<<"Jamoa a'zolarining o'rtacha yoshi: "<<s1/num<<" yosh"<<endl;
        cout<<"Jamoa a'zolarining o'rtacha maoshi: "<<s2/num<<" so'm"<<endl;
        cout<<"Jamoa a'zolarining o'rtacha gollari soni: "<<s1/num<<" ta"<<endl;
        T max1=salary[1],min1=salary[1],max2=goal[1],min2=goal[1];
        int i1,i2;
        for(int i=1;i<=num;i++)
        {
            if(salary[i]>=max1)
            {
                max1=salary[i];
                i1=i;
            }
            else
            {
                min1=salary[i];
            }
            if(goal[i]>=max2)
            {
                max2=goal[i];
                i2=i;
            }
            else
            {
                min2=goal[i];
            }
        }
        cout<<i2<<"-futbolchi eng ko'p gol urgan "<<endl;
        cout<<i1<<"-futbolchi eng ko'p maosh oladi "<<endl;
        if(i1==i2)
        {
            cout<<i2<<"-futbolchi eng ko'p gol urgan,hamda eng ko'p maosh oladi "<<endl;
        }
        else
        {
            cout<<i2<<"-futbolchi eng ko'p gol urgan, lekin eng ko'p maosh olmaydi:"<<endl;
        }
    }
};
int main()
{
    FootballClub <double> f;
    int n;
    cout<<"O'yinchilar soni:";cin>>n;
    double s[n];
    int a[n];
    int g[n];
    f.num=n;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<"-futbolchi yoshi:";cin>>a[i];
        cout<<i<<"-futbolchi gollari soni:";cin>>g[i];
        cout<<i<<"-futbolchi maoshi miqdori:";cin>>s[i];
        f.age=a;
        f.goal=g;
        f.salary=s;
    }
    f.Info();
}
