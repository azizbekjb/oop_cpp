#include<iostream>
#include<string>
using namespace std;
class Odam
{
	protected:
		string m_ism;
		int m_yosh;
		string m_jins;
		int m_vazn;
	public:
		Odam()
		{
			m_ism = "Ismi yo'q";
			m_yosh = 0;
			m_jins = "Jinssiz";
			m_vazn = 0;
		}
		Odam(string i,int y,string j,int v)
		{
			m_ism = i;
			m_jins = j;
			m_yosh = y;
			m_vazn = v;
		}
		virtual string getIsm()
		{
			return m_ism;
		}
		virtual int getYosh()
		{
			return m_yosh;
		}
		virtual int getVazn()
		{
			return m_vazn;
		}
		virtual void Malumot()
		{
			cout<<"Ismi:"<<m_ism<<endl;
			cout<<"jinsi:"<<m_jins<<endl;
			cout<<"Yoshi:"<<m_yosh<<endl;
			cout<<"Vazni:"<<m_vazn<<endl;
		}
};
class Talaba:public Odam
{
	private:
		int m_yil;
	public:
		Talaba():Odam(),m_yil(0){}
		Talaba(string i,int y,string j,int v,int yil):Odam(i,y,j,v),m_yil(yil){}
		virtual void Test()
		{
			Odam::Malumot();
			cout<<"O'quv yili:"<<m_yil<<endl;
		}
		virtual int getYil()
		{
			return m_yil+=1;
		}			
};
int main()
{
	Talaba t("Azizbek",18,"Erkak",62,2023);
	t.Test();
	cout<<"O'quv yili "<<t.getYil()<<" ga o'zgartirildi";
}
