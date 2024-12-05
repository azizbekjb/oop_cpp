#include<iostream>
using namespace std;
class Human
{
	protected:
		string name;
		int age;
	public:
		Human(string n,int a):name(n),age(a){}
		void setDisplay()
		{
			cout<<"Men "<<name<<" "<<age<<" yoshdaman"<<endl;
		}
};
class Abituryent:public Human
{
	protected:
	
		string aim;//maqsad
	    int pleace;//nechanchi o'rin bilan kirganligi.joyi
	public:
		Abituryent(string n,int a,string ai,int p):Human(n,a),aim(ai),pleace(p){}
		void checkTest()
		{
			cout<<"Abituryentning ismi:"<<name<<endl;
			cout<<"Abituryent yoshi:"<<age<<endl;
			if(pleace<=20)
			{
				cout<<"Siz davlat granti asosida "<<aim<<" ga qabul qilindingiz"<<endl;
			}
			else
			 if(pleace>20 and pleace<=60)
			 {
			 	cout<<"Siz to'lov kontrakt asosida "<<aim<<" ga qabul qilindingiz"<<endl;
			 }
			 else
				cout<<"Siz "<<aim<<" ga qabul qilinmadingiz"<<endl;
		}
};
class Student:public Abituryent
{
	private:
		string university;
		string faculty;
	public:
		Student(string n,int a,string ai,int p,string u,string f):Abituryent(n,a,ai,p),university(u),faculty(f){}
		void checkTest1()
		{
			cout<<"Talaba "<<name<<" "<<age<<" yoshda "<<endl;
			cout<<"Men "<<university<<","<<faculty<<" fakultetida o'qiyman"<<endl;
		}
};
int main()
{
	Abituryent a("Azizbek",18,"o'qish",19);
	Student s("Azizbek",18,"o'qish",19,"Samarqand davlat universiteti","Matematika");
	a.checkTest();
	s.checkTest1();
}
