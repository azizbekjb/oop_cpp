#include<iostream>
using namespace std;
class Animal
{
	protected:
		string name;
		string type;//hayvon turi
	public:
		Animal(string n,string t):name(n),type(t){}
		void checkTest()
		{
			cout<<name<<" nomli hayvon "<<type<<endl;
		}
};
class Dog:public Animal
{
	private:
		int speed;
	public:
		Dog(string n,string t,int s):Animal(n,t),speed(s){}
		void setDog()
		{
			cout<<"Itlarning o'rtacha tezligi soatiga "<<speed<<"soatiga km/soat"<<endl;
		}	
};
class Cat:public Animal
{
	private:
		string cat;
	public:
		Cat(string n,string t,string c):Animal(n,t),cat(c){}
		void setCat()
		{
			cout<<"Mushuk "<<cat<<" oilasiga kiradi"<<endl;
		}
};
int main()
{
	Dog d("Reks","Uy hayvoni",30);
	Cat c("Tom","Uy hayvoni","mushuksimon");
	d.checkTest();
	d.setDog();
	c.checkTest();
	c.setCat();
	return 0;
}
