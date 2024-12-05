#include<iostream>
using namespace std;
//ajdod sinfi:human sinfi
class Human
{
	protected:
		string name;
		int age;
	public:
		//parametrli kostruktor
		Human(string n, int a):name(n), age(a){}
		//qo'shimcha metodlar
		void setInfo()
		{
			cout<<"Men "<<name<<" "<<age<<" yoshadaman!"<<endl;
		}
};
//avlod sinfi: Student sinfi
class Student:public Human
{
	private:
		int course;
	public:
		//parametrli kostruktor
		Student(string n, int a, int c):Human(n,a),course(c){}
		//Qo'shimcha metodlar
		void setStudy()
		{
			cout<<name<<" "<<course<<"-kursda o'qiydi!"<<endl;
		}
};
int main()
{
	Student stud1("Azizbek",18,1);
	stud1.setInfo();
	stud1.setStudy();
}
