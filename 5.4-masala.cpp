#include<iostream>
#include<string>
using namespace std;
class Car
{
	protected:
		string name;
		string color;
	public:
		Car():name("No name"),color("no color"){}
		Car(string n,string c):name(n),color(c){}
	    void checkCar()
		{
			cout<<name<<" mashinasi "<<color<<" rangda!"<<endl;
		}	
};
class Truck:public Car
{
	private:
		int massa;//yuk mashinasining qanchagacha yuk ortishi
	public:
		Truck():Car(),massa(0){}
		Truck(string n,string c,int m):Car(n,c),massa(m){}
		void checkTruck()
		{
			cout<<name<<" yuk mashinasi "<<massa<<" tonnagacha yuk ortadi!"<<endl;
		}
};
class LightCar:public Car
{
	private:
		string test;//yengil mashinaning mexanik yoki avtomatligini tekshirish
	public:
		LightCar():Car(),test("No type"){}
		LightCar(string n,string c,string t):Car(n,c),test(t){}
		void checkLightCar()
		{
			cout<<name<<" nomli mashina "<<test<<" korobkali!"<<endl;
		}
};
int main()
{
	Truck t("Man","Oq",40);
	LightCar l("Lexus","Qizil","Avtomat");
	t.checkCar();
	t.checkTruck();
	l.checkCar();
	l.checkLightCar();
	return 0;
}
