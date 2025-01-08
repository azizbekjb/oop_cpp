#include<iostream>
using namespace std;
template<class T,class C>
class Books
{
public:
    T *ID;
    C *salary;
    int *year;
    int num;
    T Info()
    {
        double s=0,c=0;
        for(int i=1;i<=num;i++)
        {
            s+=salary[i];
        }
        cout<<"Kitoblarning o'rtacha narxi:"<<s/num<<endl;
        for(int i=1;i<=num;i++)
        {
            if((s/num)>salary[i])
            {
                c++;
            }
        }
        cout<<"O'rtacha narx dan qimmat kitoblar soni:"<<c<<" ta"<<endl;
    }
};

int main()
{
    Books <int,double> b;
    int n;
    cout<<"Kitoblar soni:";cin>>n;
    b.num=n;
    double s[n];
    int id[n];
    int y[n];
    for(int i=1;i<=n;i++)
    {
        cout<<i<<"-ID:";cin>>id[i];
        cout<<i<<"-Year:";cin>>y[i];
        cout<<i<<"-Salary:";cin>>s[i];
        b.salary=s;
        b.ID=id;
        b.year=y;
    }
    b.Info();
}
