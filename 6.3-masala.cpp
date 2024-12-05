#include<iostream>
#include<cmath>
using namespace std;
class Tringle
{
	protected:
		float m_a;
		float m_b;
		float m_c;
	public:
		Tringle(float a, float b,float c)
		{
			m_a=a;
			m_b= b;
			m_c=c;
		}
		
		virtual void getGradus()
		{
			//kosinuslar teoremasi
			cout<<"a tomon qarshisidagi burchak:"<<(180/M_PI)*acos((m_a*m_a-m_b*m_b-m_c*m_c)/(-2*m_b*m_c))<<endl;
			cout<<"b tomon qarshisidagi burchak:"<<(180/M_PI)*acos((m_b*m_b-m_a*m_a-m_c*m_c)/(-2*m_a*m_c))<<endl;
			cout<<"c tomon qarshisidagi burchak:"<<(180/M_PI)*acos((m_c*m_c-m_b*m_b-m_a*m_a)/(-2*m_a*m_b))<<endl;
		}
		float p;
		virtual float getPerimetr()
		{
				p=m_a+m_b+m_c;
				return p;
		}
			float s;
		virtual float getArea()
		{
			
				s=sqrt((p/2)*(p/2-m_a)*(p/2-m_b)*(p/2-m_c));
				return s;
		}
};
class Equilateral:public Tringle
{
	public:
		Equilateral(float a,float b,float c):Tringle(a,b,c){}
		virtual float getArea()
		{
			return sqrt(3)*m_a*m_a/4;	
		}
};
int main()
{
	Equilateral t(3,3,3);
	t.getGradus();
	cout<<"Uchburchak perimetri:"<<t.getPerimetr()<<endl;
	cout<<"Uchburchak yuzi:"<<t.getArea();
}

