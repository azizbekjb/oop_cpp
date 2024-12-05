#include<iostream>
using namespace std;
class Human
{
	protected:
		string name;
		int age;
	public:
		Human(string n,int a):name(n),age(a){}
		void displayInfo()
		{
			cout<<"Men "<<name<<" "<<age<<" yoshdaman"<<endl;
		}
};
class Employe:public Human
{
	private:
		int salary;
		int stage;
	public:
		Employe(string n,int a,int s,int st):Human(n,a),salary(s),stage(st){}
		void setEmploye()
		{
			cout<<"Ishchining maoshi: "<<salary<<" $"<<endl;
			if(stage>30)
			{
				salary*=3;
				cout<<"Ishchining maoshi "<<salary<<" oshirildi"<<endl;
			}
		}
};
class Supervisor:public Human
{
	private:
		string wp;//ish joyi
	public:
		Supervisor(string n,int a,string w):Human(n,a),wp(w){}
		void setSupervisor()
		{
			cout<<"Qo'riqchining ish joyi:"<<wp<<endl;
		}
};
int main()
{
	Employe e("Azizbek",18,300,16);
	Supervisor s("Azizbek",18,"IT markaz");
	e.displayInfo();
	e.setEmploye();
	s.setSupervisor();
	return 0;
}
