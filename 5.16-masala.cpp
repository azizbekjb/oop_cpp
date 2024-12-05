#include<iostream>
using namespace std;
class Shape
{
	protected:
		string name;
	public:
		Shape(string n):name(n){}
		void Test(){
			cout<<"Shakl nomi:"<<name<<endl;
		}
};
class Traingle:public Shape
{
	protected:
		float m_a;
		float m_b;
		float m_c;
	public:
		Traingle(string n,int a,int b,int c):Shape(n),m_a(a),m_b(b),m_c(c){}
		void Test1()
		{
			if(m_a+m_b>m_c &&m_a+m_c>m_b && m_c+m_b>m_a)
			{
				cout<<name<<" shartini qanoatlantirdi"<<endl;
			}
			else 
			{
				cout<<name<<" shartini qanoatlantirmadi"<<endl;
			}
		}
};
class RightAngledTraingle:public Traingle//to'g'i burchakli uchburchak
{
	public:
		RightAngledTraingle(string n,int a,int b,int c):Traingle(n,a,b,c){}
		void Test2()
		{
			if(m_a*m_a+m_b*m_b==m_c*m_c || m_b*m_b+m_c*m_c==m_a*m_a || m_a*m_a+m_c*m_c==m_b*m_b)
			{
				cout<<name<<" to'g'ri burchakli"<<endl;
			}
			else
			{
				cout<<name<<" to'g'ri burchakli emas"<<endl;
			}
		}
};
class EquilateralTraingle:public Traingle//Teng yonli uchburchak
{
	public:
		EquilateralTraingle(string n,int a,int b,int c):Traingle(n,a,b,c){}
		void Test3()
		{
			if(2*m_a>m_b || 2*m_b>m_c || 2*m_a>m_c)
			{
				cout<<name<<" teng yonli"<<endl;
			}
			else
			cout<<name<<" teng yonli emas"<<endl; 
		}
};
int main()
{
	RightAngledTraingle t1("Uchburchak",3,4,5);//To'g'ri burchakli
	EquilateralTraingle t2("Uchburchak",3,3,5);//teng yoni
	RightAngledTraingle t3("Uchburchak",6,8,9);//To'g'ri burchakli
	t1.Test();
	t1.Test1();
	t1.Test2();
	t2.Test();
	t2.Test1();
	t2.Test3();
	t3.Test();
	t3.Test1();
	t3.Test2();
}


