#include<iostream>
using namespace std;
class Human
{
	protected:
		string name;
		string surname;
		string fathername;
	public:
		Human(string n,string s,string f):name(n),surname(s),fathername(f){}
		virtual void Info()
		{
			cout<<"Jismoniy shaxs haqida qisqacha:"<<endl;
			cout<<"Ismi:"<<name<<endl;
			cout<<"Familiyasi:"<<surname<<endl;
			cout<<"Otasining ismi:"<<fathername<<endl;
		}
};
class Student:public Human
{
	private:
		float *grades;//baholar massivi
		float num;//baholar soni
	public:
		Student(string n,string s,string f,float *grds,int nm):Human(n,s,f),grades(grds),num(nm){}
		
		float s;
		virtual float averegaGrade()
		{
		for(int i=0; i<num; i++)
		{
			s+=grades[i];
		}
			return s/num;
		}
		virtual void sInfo()
		{
			Human::Info();
			cout<<"Talabaning o'rtacha bali:"<<averegaGrade()<<endl;
		
		}
};
int main()
{
	float grades[]={80,80,80,80,60,80};
	int num = 6;
	Student s("Azizbek","Jabborov","Alisherovich",grades,num);
	s.sInfo();
}
