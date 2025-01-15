#include <iostream>
using namespace std;
template<class T>
class Student
{
public:
    string *fanlar;
    int *baho;
    int *kredit;
    int num;
    T ID;
    int kursi;
    Student(int n,T id,int k)
    {
        num=n;
        ID=id;
        kursi=k;
    }
    void Info()
    {
        float s=0,s1=0;
        for(int i=0;i<num;i++)
        {
            cout<<fanlar[i]<<" fanidan olgan baho:"<<baho[i]<<".Fanning kredit miqdori:"<<kredit[i]<<endl;
            s+=baho[i]*kredit[i];
            s1+=kredit[i];
        }
        float GPA=s/s1;
        cout<<"Talabaning GPA bali:"<<GPA<<endl;
        if(GPA>=2.4)
        {
            cout<<"Talaba keyingi kursga o'tdi"<<endl;
        }
        else
        {
            cout<<"Peshonang sho'r ekan.Qolding"<<endl;
        }
    }
};
int main()
{
    int n;
    cout<<"Fanlar soni:";cin>>n;
    string fanlar[]={"Umumiy fizika","Ingliz tili","Chiziqli algebra va analitik geometriya","Diskret matematika","Matematik analiz","Algaritmik tillar va dasturlash"};
    Student <string> s(n,"AD2006242",1);
    int baho[n];
    int kredit[n];
    for(int i=0;i<n;i++)
    {
        cout<<fanlar[i]<<" fanidan olgan bahoni kiriting:";cin>>baho[i];
        cout<<fanlar[i]<<" fanining kredit miqdorini kiriting:";cin>>kredit[i];
        s.fanlar=fanlar;
        s.baho=baho;
        s.kredit=kredit;
    }
    s.Info();

    return 0;
}
