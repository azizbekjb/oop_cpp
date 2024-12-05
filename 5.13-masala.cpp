#include<iostream>
using namespace std;
class Company
{
	protected:
		string name;
		int year;
		string founder;//asoschisi
		string company;
	public:
		Company(string c,string n,int y,string f):company(c),name(n),year(y),founder(f){}
		void setTest()
		{
			cout<<company<<" kompaniyasi "<<year<<"-yilda asos solingan.Asoschisi:"<<founder<<endl;
		}
};
class Iphone:public Company
{
	private:
		string system;
    public:
    	Iphone(string c,string n,int y,string f,string s):Company(c,n,y,f),system(s){}
    	void setIphone()
		{
			Company::setTest();
			cout<<"Iphone telefoni "<<system<<" operatsion sistemasida ishlaydi"<<endl;
		}		
};
class Samsung:public Company
{
	protected:
		int benefit;
	public:
		Samsung(string c,string n,int y,string f,int b):Company(c,n,y,f),benefit(b){}
		void setSamsung()
		{
			Company::setTest();
			cout<<"Samsung kompaniyasi bugungi kungacha daromadi:"<<benefit<<" mlrd $"<<endl;
		}
};
int main()
{
	Iphone i("Apple","Iphone",2007,"Stiv Jobs","IOS");
	Samsung s("Samsung","galaxy s24",1938,"Li Byon Chxol",208);
	i.setIphone();
	s.setSamsung();
	return 0;
	
}
