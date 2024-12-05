#include<iostream>
#include<string>
using namespace std;
//Ajdod sinf
class Human
{
	protected:
		string name;
		string surname;
		string fathername;
	public:
		Human(string n,string s,string f):name(n),surname(s),fathername(f){}
		virtual void displayInfo()
		{
			cout<<"Ismi:"<<name<<endl;
			cout<<"Familiyasi:"<<surname<<endl;
			cout<<"Otasining ismi:"<<fathername<<endl;
		}
};
class Student:public Human
{
	private:
		float *grades; //baholar massivi
		int numGrades;//baholar soni
	public:
		Student(string n,string s,string f,float *grds,int num):Human(n,s,f),grades(grds),numGrades(num){}
		//virtual metod.talabalarning o'rtacha bali
		virtual float averageGrade()
		{
			float sum=0;
			for(int i=0; i<numGrades; ++i)
			{
				sum+=grades[i];
			}
			return sum/numGrades;
		}
		//virtual metod.malumotlarni chiqarish
		virtual void displayInfo() 
		{
			Human::displayInfo();
			cout<<"O'rtacha bali: "<<averageGrade()<<endl;

		}
};
int main()
{
	//baholar
	float grades[]={80,75,90,85,95};
	int numGrades=sizeof(grades)/sizeof(grades[0]);
    //student sinfining obyektini yaratish
    Student student("Azizbek","Jabborov","Alisherovich",grades,numGrades);
    //Avlod sinfnig qo'shimcha metodidan foydalanish
    student.displayInfo();//Virtual metod chaqiriladi
    return 0;
    
}
