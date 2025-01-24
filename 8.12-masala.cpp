#include <iostream>
#include<vector>
using namespace std;
template<class T>
class Fermer
{
public:
    string *FISH;
    string *X_Nomi;
    T *hosil;
    friend float Foyda (Fermer& f);
};

int main()
{

    Fermer <double> f;
    string fish[10];
    string x_nomi[10];
    double hosil[10];
    for(int i=0;i<5;i++)
    {
        cout<<i+1<<" fermer nomi:";cin>>fish[i];
        cout<<i+1<<" fermer xo'jalik nomi:";cin>>x_nomi[i];
        cout<<i+1<<" fermerning yerdan olgan hosil miqdori:";cin>>hosil[i];
        f.FISH=fish;
        f.X_Nomi=x_nomi;
        f.hosil=hosil;
    }

}
float Foyda(Fermer& f)
{

        double max1=f.hosil[0];
        string m;
        for(int i=0;i<5;i++)
        {
            if(max1<f.hosil[i])
            {
                max1=f.hosil[i];
                m=f.FISH[i];
            }
        }
        cout<<"Eng ko'p hosil toplagan fermer nomi:"<<m<<endl;
}
