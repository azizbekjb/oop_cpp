#include<iostream>
using namespace std;
class Man
{
	protected:
		string name;
		string pob;//pleace of birth(tug'ilgan joyi)
		int age;//yoshi
		int year;//yil
		string por;//please of residence(yashash joyi)
	public:
		Man(string n,int a,string pb,string pr,int y):name(n),age(a),pob(pb),por(pr),year(y){}
		void Information()
		{
			cout<<"Nomi:"<<name<<endl;
			cout<<"Yoshi:"<<age<<endl;
			cout<<"Tug'ilgan joyi:"<<pob<<endl;
			cout<<"Yashash manzili:"<<por<<endl;
			cout<<"Joriy yil:"<<year<<endl;
		}
		
};
class Student:public Man
{
	private:
		string usity;//University(universitet)
		string dtion;//direction(yo'nalish)
		int cource;//kursi
		int GPA;
	public:
		Student(string n,int a,string pb,string pr,int y,string u,string d,int c):Man(n,a,pb,pr,y),usity(u),dtion(d),cource(c){}
		float setGPA(float gpa)
		{
			GPA= gpa;
		}	
		virtual void sInformation()
		{
			cout<<"Talaba haqida qisqacha ma'lumot"<<endl;
			Man::Information();
			cout<<"O'quv oliygohi:"<<usity<<endl;
			cout<<"Kursi:"<<cource<<endl;
			cout<<"Yo'nalishi:"<<dtion<<endl;
			if(GPA>2.4 and GPA<=5)
			{
				cout<<"Talaba keyingi kursga o'tdi"<<endl;
			}
		}
};
class Employee:public Man
{
	private:
		float salary;
		string position;
		int stage;
	public:
		Employee(string n,int a,string pb,string pr,int y,string p,float s,int st):Man(n,a,pb,pr,y),position(p),salary(s),stage(st){}
		virtual void eInformation()
		{
			cout<<"Xodim haqida qisqacha ma'lumot"<<endl;
			Man::Information();
			cout<<"Lavozimi:"<<position<<endl;
			cout<<"Maoshi:"<<salary<<endl;
			if(stage>10 and stage<20)
			{
				salary*=2;
				cout<<"Xodim maoshi 2 baravar oshirrildi"<<endl;
				cout<<"Joriy maoshi:"<<salary<<endl;
			}
			else
				if(stage>=20)
				{	
					salary*=3;
					cout<<"Xodim maoshi 3 baravar oshirrildi"<<endl;
			     	cout<<"Joriy maoshi:"<<salary<<endl;
				}
		}
};
int main()
{
	Student s("Azizbek",18,"Samarqand tumani","Samarqand tumani",2024,"Samarqand davlat universiteti","Amaliy matematika",1);
	s.setGPA(3.9);
	s.sInformation();
	Employee e("Azizbek",18,"Samarqand tumani","Samarqand tumani",2024,"Katta dasturchi",1000,15);
	e.eInformation();
	return 0;	
}
