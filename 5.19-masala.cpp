#include <iostream>
using namespace std;
//Ajdod sinf.Operation system (operatsion sistema)sinfi
class OperationSystem
{
	public:
		string m_name;//Operatsion sistema nomi
		//standart konstruktor
		OperationSystem()
		{
			m_name = "No name";
		}
		//parametrli konstruktor
		OperationSystem(string name)
		{
			m_name = name;
		}
		//getter metod
		string getName()
		{
			return m_name;
		}
};
class Windows:public OperationSystem
{
	public:
		string m_version;//Windows versiyasi
		int m_year; //ishlab chiqarilgan yili
		//standart konstruktor
		Windows():OperationSystem()
		{
			m_version = "No version";
			m_year = 0;
		}
		//parametrli konstrujtor
		Windows(string version,int year,string name):OperationSystem(name)
		{
			m_version = version;
			m_year = year;
		}
		string getVersion()
		{
			return m_version;
		}
		int getYear()
		{
			return m_year;
		}
};
class WindowsXP:public Windows
{
	public:
		//standart konstruktor
		WindowsXP():Windows(){}
		//parametrli konstruktor
		WindowsXP(string version, int year,string name):Windows(version,year,name){}	
};
class Windows7:public Windows
{
	public:
		//standart konstruktor
		Windows7():Windows(){}
		//parametrli konstruktor
		Windows7(string version, int year,string name):Windows(version,year,name){}	
};
class Windows8:public Windows
{
	public:
		//standart konstruktor
		Windows8():Windows(){}
		//parametrli konstruktor
		Windows8(string version, int year,string name):Windows(version,year,name){}	
};
class Windows10:public Windows
{
	public:
		//standart konstruktor
		Windows10():Windows(){}
		//parametrli konstruktor
		Windows10(string version, int year,string name):Windows(version,year,name){}	
};
int main()
{
	WindowsXP wXP("Windows XP",2001,"Windows");
	cout<<wXP.getName()<<" operatsion sistemasining "<<wXP.getVersion()<<" versiyasi "<<wXP.getYear()<<"-yilda chiqarilgan!"<<endl;
    Windows7 w7("Windows 7",2009,"Windows");
	cout<<w7.getName()<<" operatsion sistemasining "<<w7.getVersion()<<" versiyasi "<<w7.getYear()<<"-yilda chiqarilgan!"<<endl;	
	Windows8 w8("Windows 8",2013,"Windows");
	cout<<w8.getName()<<" operatsion sistemasining "<<w8.getVersion()<<" versiyasi "<<w8.getYear()<<"-yilda chiqarilgan!"<<endl;
	Windows10 w10("Windows 10",2015,"Windows");
	cout<<w10.getName()<<" operatsion sistemasining "<<w10.getVersion()<<" versiyasi "<<w10.getYear()<<"-yilda chiqarilgan!"<<endl;	
}
