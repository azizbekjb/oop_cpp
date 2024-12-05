#include<iostream>
#define pi 3.1415
using namespace std;
class Figure
{
	protected:
		string m_name;
	public:
		Figure(string name):m_name(name){}
		virtual float getArea()
		{
			return 0;
		}
		virtual string getName()
		{
			return m_name;
		}
};
class Rectangle:public Figure
{
	private:
		float m_a;
		float m_b;
	public:
		Rectangle(string name,float a,float b):Figure(name),m_a(a),m_b(b){}
		virtual float getArea()
		{
			return m_a*m_b;
		}
};
class Circle:public Figure
{
	private:
		float  m_r;
	public:
		Circle(string name,float r):Figure(name),m_r(r){}
		virtual float getArea()
		{
			return pi*m_r*m_r;
		}
};
int main()
{
	Rectangle rect("To'g'ri to'rtburchak",3,4);
	Circle circ("Aylana",3);
	cout<<"Shakl nomi:"<<rect.getName()<<endl;
	cout<<rect.getName()<<" yuizi:"<<rect.getArea()<<endl;
	cout<<"Shakl nomi:"<<circ.getName()<<endl;
	cout<<circ.getName()<<" yuizi:"<<circ.getArea()<<endl;
	return 0;
}
