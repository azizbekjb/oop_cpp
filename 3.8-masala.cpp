#include <iostream>
#include<string>
using namespace std;
class Transport
{
    private:
        static int m_son;
    public:
    	string m_nom;//transport nomi
    	string m_tur;// transport turi
    	//Standart konstruktor
    	Transport()
    	{
    		m_nom = "Ismi yo'q";
    		m_tur = "Turi yo'q";
    	}
    	//parametrli konstruktor
    	Transport(string nom, string tur)
    	{
    		m_nom = nom;
    		m_tur = tur;
    	}
    	string getNom()
    	{
    		return m_nom;
    	}
    	string getTur()
    	{
    		return m_tur;
    	}
    	//statik setter metod
    	static void setSon(int son)
    	{
    		m_son = son;
    	}
    	//statik getter metod;
    	static int getSon()
    	{
    		m_son = m_son+1;
    		return m_son;
    	}
};
int Transport::m_son=0;
int main() 
{
	Transport t("Lexus","Avtobil");
	Transport::setSon(0);
	cout<<Transport::getSon()<<"-transport turi: "<<t.getTur()<<"!"<<" Nomi:"<<t.getNom()<<endl;
}
