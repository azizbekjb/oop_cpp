#include <iostream>
using namespace std;
template<class T>
class Dekanat
{
    public:
    string g_nomi;
    int q_soni;
    int u_soni;
    string T_Ismi;
    T kod;
    Dekanat(string gn,int qs,int us,string ti,T k)
    {

        g_nomi=gn;
        q_soni=qs;
        u_soni=us;
        T_Ismi=ti;
        kod=k;
    }
    void Info()
    {
        cout<<"Guruh nomi:"<<g_nomi<<endl;
        cout<<"Guruh a'zolari soni:"<<q_soni+u_soni<<endl;
        cout<<"Guruhdagi qizlar soni:"<<q_soni<<endl;
        cout<<"Guruhdagi o'g'il bolalar soni:"<<u_soni<<endl;
        cout<<"Guruh rahbari:"<<T_Ismi<<endl;
        cout<<"Guruh to'laydigan kontrakt miqdori:"<<(q_soni+u_soni-5)*6410000<<" so'm"<<endl;
        cout<<"Guruhga beriladigan stipendiya miqdori:"<<6*5*517880<<" so'm"<<endl;
        cout<<"Guruh kodi:"<<kod<<endl;
    }
};
int main()
{
    Dekanat <string> D("Amaliy matematika 107",26,10,"Iskandar Boymurodovich","600200");
    D.Info();
    return 0;
}
