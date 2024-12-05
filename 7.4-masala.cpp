#include<iostream>
using namespace std;
class Product//Ajdod sinf.Mahsulot sinfi
{
	protected:
		string name;//mahsulot nomi
		string firma;//mahsulotni ishlab chiqaruvchi firma
		string type;//mahsulot turi
	public:
		Product(string n,string f,string t)
		{
			name=n;
			firma=f;
			type=t;
		}
		virtual void CheckInfo()=0;
};
class Product1:public Product
{
	private:
		long double narx;
		long double massa;
	public:
		Product1(string n,string f,string t,long double m,long double nx):Product(n,f,t),massa(m),narx(nx){}
		virtual void CheckInfo()
		{
			cout<<"Mahsulot haqida qisqacha:"<<endl;
			cout<<"Mahsulot nomi:"<<name<<endl;
			cout<<firma<<" firmasida ishlab chiqarilgan"<<endl;
			cout<<"Mahsulot turi:"<<type<<endl;
			cout<<"Ushbu mahsulotdan  "<<massa<<" kg ishlab chiqarilgan"<<endl;
			cout<<"Uning har yil to'laydigan soliq miqdori "<<(narx*massa*0.2)<<" so'm"<<endl;
		}
};
class Product2:public Product
{
	long double narx;
	long double litr;
	public:
		Product2(string n,string f,string t,long double l,long double nx):Product(n,f,t),litr(l),narx(nx){}
		virtual void CheckInfo()
		{
			cout<<"Mahsulot haqida qisqacha:"<<endl;
			cout<<"Mahsulot nomi:"<<name<<endl;
			cout<<firma<<" firmasida ishlab chiqarilgan"<<endl;
			cout<<"Mahsulot turi:"<<type<<endl;
			cout<<"Ushbu mahsulotdan  "<<litr<<" litr ishlab chiqarilgan"<<endl;
			cout<<"Uning har yil to'laydigan soliq miqdori "<<(narx*litr*0.18)<<" so'm"<<endl;
		}
};
class Product3:public Product
{
	long double narx;
	long double massa;
	public:
		Product3(string n,string f,string t,long double m,long double nx):Product(n,f,t),massa(m),narx(nx){}
		virtual void CheckInfo()
		{
			cout<<"Mahsulot haqida qisqacha:"<<endl;
			cout<<"Mahsulot nomi:"<<name<<endl;
			cout<<firma<<" firmasida ishlab chiqarilgan"<<endl;
			cout<<"Mahsulot turi:"<<type<<endl;
			cout<<"Ushbu mahsulotdan  "<<massa<<" kg ishlab chiqarilgan"<<endl;
			cout<<"Uning har yil to'laydigan soliq miqdori "<<(narx*massa*0.21)<<" so'm"<<endl;
		}	
};
int main()
{
	Product1 p1("Miller","SFAD MCHJ","Pechenye",12500,50000);
	Product2 p2("Dena","Marvin Brands","Sharbat",14500,10000);
	Product3 p3("Chococream","NMedov","Shkaladli krem",14645,28000);
	p1.CheckInfo();
	p2.CheckInfo();
	p3.CheckInfo();
}
