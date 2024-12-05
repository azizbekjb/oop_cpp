#include<iostream>
#include<string>
using namespace std;
class Human
{
	protected:
		string m_name;
		int m_age;
	public:
		Human()
		{
			m_name = "no name";
			m_age = 0;
		}
		Human(string name,int age):m_name(name),m_age(age){}
		void checkTest()
		{
			cout<<m_name<<" nomli odam "<<m_age<<" yoshda"<<endl;
		}
};
class Employe: public Human
{
	private:
		int m_salary;
	public:
		Employe():Human(),m_salary(0){}
		Employe(string name,int age,int salary): Human(name,age),m_salary(salary){}
		void checkTest1()
		{
			cout<<m_name<<" nomli ishchi "<<m_salary<<" $ miqdorda maosh oladi"<<endl;
		}
};
int main()
{
	Employe e("Azizbek",18,200);
	e.checkTest();
	e.checkTest1();
}

