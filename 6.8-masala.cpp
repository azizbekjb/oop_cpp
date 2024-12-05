#include<iostream>
using namespace std;
class Market
{
	protected:
		string name;
		string address;
	public:
		Market(string n,string a):name(n),address(a){}
		virtual void Info()
		{
			cout<<"Do'kon nomi:"<<name<<endl;
			cout<<"Do'kon manzili:"<<address<<endl;
		}
		virtual string setAdd(string add)
	{
		address = add;
	}
	virtual void getBenifit(){}
};
class Supermarket:public Market
{
	private:
		float income;//daromad
	public:
		Supermarket(string n,string a,float i):Market(n,a),income(i){}
		virtual void getBenifit()
		{
			Market::Info();
			cout<<"Umumiy foyda:"<<income<<endl;
			cout<<"Xarjatlar:"<<65*income/100<<" mln so'm"<<endl;
			cout<<"Sof foyda:"<<35*income/100<<" mln so'm"<<endl;
		}
};
class Gipermarket:public Market
{
	private:
		float income;//daromad
	public:
		Gipermarket(string n,string a,float i):Market(n,a),income(i){}
		virtual void getBenifit()
		{
			Market::Info();
			cout<<"Umumiy foyda:"<<income<<endl;
			cout<<"Xarjatlar:"<<75*income/100<<" mln so'm"<<endl;
			cout<<"Sof foyda:"<<25*income/100<<" mln so'm"<<endl;
		}	
};
class Minimarket:public Market
{
	private:
		float income;//daromad
	public:
		Minimarket(string n,string a,float i):Market(n,a),income(i){}
		virtual void getBenifit()
		{
			Market::Info();
			cout<<"Umumiy foyda:"<<income<<endl;
			cout<<"Xarjatlar:"<<45*income/100<<" mln so'm"<<endl;
			cout<<"Sof foyda:"<<55*income/100<<" mln so'm"<<endl;
		}
};
int main()
{
	Supermarket s("Well.com","Samarqand shahar",256);
	Gipermarket g("Uzum market","Samarqand shahar,Amir Temur ko'chasi",258);
	Minimarket m("Kansmarket","Samarqand shahar,yoshlar markazi",251);
	s.getBenifit();
	g.getBenifit();
	m.getBenifit();
	return 0;
}

