#include<iostream>
using namespace std;
class Apartment
{
	protected:
		float cost;//narxi
		int  num;//number of rooms(xonalar soni)
	public:
		Apartment(float c,int n):cost(c),num(n){}
		virtual void Info()
		{
			cout<<"Kvartira narxi:"<<cost<<" so'm"<<endl;
			cout<<"Xonalar soni:"<<num<<" ta"<<endl;
		}
};
class StudentHouse:public Apartment
{
	private:
		int tenants;//ijarachilar
		int occupied;//to'lgan xonalar
	public:
		StudentHouse(float c,int n,float t,float o):Apartment(c,n),tenants(t),occupied(o){}
		virtual void getBenifit()
		{
			Apartment::Info();
			cout<<"Ijarachilar:"<<tenants<<" ta"<<endl;
			cout<<"To'lgan xonalar:"<<occupied<<endl;
			cout<<"Bo'sh xonalar soni:"<<num-occupied<<" ta"<<endl;
		}
};
class RentHouse:public Apartment
{
	private:
		int tenants;//ijarachilar
		int occupied;//to'lgan xonalar
	public:
		RentHouse(float c,int  n,float t,float o):Apartment(c,n),tenants(t),occupied(o){}
		virtual void getBenifit()
		{
			Apartment::Info();
			cout<<"Ijarachilar:"<<tenants<<" ta"<<endl;
			cout<<"To'lgan xonalar:"<<occupied<<endl;
			cout<<"Bo'sh xonalar soni:"<<num-occupied<<" ta"<<endl;
		}
};
int main()
{
	StudentHouse s(200000,100,150,69);
	RentHouse r(300000,6,10,4);
	s.getBenifit();
	r.getBenifit();
	return 0;
}

