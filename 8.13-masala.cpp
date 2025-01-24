#include <iostream>
using namespace std;
template<class T,class S>
class Contract
{
    public:
    string *FISH;
    T *summ;
    S *ID;
    const T s=6410000;
    T Info()
    {
        for(int i=0;i<5;i++)
        {
            if(s>summ[i])
            {
                cout<<FISH[i]<<" nomli talaba "<<s-summ[i]<<" miqdorida qarzdor"<<endl;
            }
            else
            {
                if(s<=summ[i])
                {
                    cout<<FISH[i]<<" nomli talaba qarzdor emas"<<endl;
                }
            }
        }
    }
};
int main()
{
    Contract <int,string> c;
    int summ[5];
    string ID[5];
    string fish[5];
    for(int i=0;i<5;i++)
    {
        cout<<i+1<<"-talaba nomini kirit:";cin>>fish[i];
        cout<<i+1<<"-talaba IDsini kirit:";cin>>ID[i];
        cout<<i+1<<"-talabaning to'lagan summasini kirit:";cin>>summ[i];
        c.FISH=fish;
        c.ID=ID;
        c.summ=summ;
    }
    c.Info();
}
