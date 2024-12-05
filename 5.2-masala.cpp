#include<iostream>
using namespace std;
class Shape
{
	protected:	
		string color;
		string name;
	public:
		Shape()
		{
			name = "No name";
			color = "No color";
		}
		Shape(string name, string color)
		{
			this->color = color;
			this->name = name;
		}
		void checkTest()
		{
			cout<<name<<" shakli "<<color<<" rangda"<<endl;
		}
};
class Traingle:public Shape
{
	private:
		int m_a;
		int m_b; 
		int m_c;
	public:
		Traingle():Shape()
		{
			m_a=1;
			m_b=1;
			m_c=1;
		}	
		Traingle(string name,string color,int a,int b, int c):Shape(name, color),m_a(a),m_b(b),m_c(c){}
		void checkTest1()
		{
			if(m_a==m_b and m_b==m_c and m_a==m_c)
			{
				cout<<name<<" teng tomonli"<<endl;
			}
			else
			{
				cout<<" teng tomonli emas";
			}
		}
};
int main()
{
	Traingle t("Uchburchak","qizil",3,3,3);
	t.checkTest();
	t.checkTest1();
}

