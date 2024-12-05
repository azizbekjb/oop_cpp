#include<iostream>
using namespace std;
class ElectronDivice
{
	protected:
		string name;
	public:
		ElectronDivice(string n):name(n){}
		void Test()
		{
			cout<<"Qurilma nomi:"<<name<<endl;
		}
};
class Computer:public ElectronDivice
{
	protected:
		string model;
		string c_name;
		int RAM;
		int ROM;
		string mission;
	public:
		Computer(string n,string ml,int RA,int RO,string mn,string cn):ElectronDivice(n),model(ml),RAM(RA),ROM(RO),mission(mn),c_name(cn){}
		void Test1()
		{
			cout<<name<<" modelining "<<model<<" qurilmasi haqida:"<<endl;
			cout<<model<<" nomi:"<<c_name<<endl;
			cout<<"Operativ xotira:"<<RAM<<endl;
			cout<<"Doimiy xotira:"<<ROM<<endl;
			cout<<"Vazifasi:"<<mission<<endl;
		}
};
class Planshet:public Computer
{
	private:
		string OSYS;//operatsion sistema
	public:
		Planshet(string n,string ml,int RA,int RO,string mn,string cn,string o):Computer(n,ml,RA,RO,mn,cn),OSYS(o){}
		void Test2()
		{
			cout<<model<<" ning "<<c_name<<" modeli "<<OSYS<<" operatsion sistemasida ishlaydi:"<<endl;
		}
};
class Notebook:public Computer
{
	private:
		string protsessor;
	public:
		Notebook(string n,string ml,int RA,int RO,string mn,string cn,string pr):Computer(n,ml,RA,RO,mn,cn),protsessor(pr){}
		void Test3()
		{
			cout<<c_name<<" noutbuki:"<<protsessor<<" protsessorli"<<endl;
		}
};
class Telephone:public Computer
{
	private:
		string type;
	public:
		Telephone(string n,string ml,int RA,int RO,string mn,string cn,string t):Computer(n,ml,RA,RO,mn,cn),type(t){}
		void Test4()
		{
			cout<<c_name<<" telefonining turi:"<<type<<endl;
		}
};
int main()
{
	Planshet p("Kompyuter","Planshet",8,128,"Aloqa,internet va h.k","iPad Pro 11","IOS");
	Notebook n("Kompyuter","Noutbuk",16,512,"Korparitiv ishlarda,dastur tuzishda va h.k","Dell Vostro","Core i5 11-avlod");
	Telephone t("Kompyuter","Telefon",4,128,"Aloqa,internet va h.k","Infinix Hot 30i","Smartfon");
	p.Test();
	p.Test1();
	p.Test2();
	n.Test();
	n.Test1();
	n.Test3();
	t.Test();
	t.Test1();
	t.Test4();
}

