#include<iostream>
using namespace std;
class Hotel
{
	protected:
		string name;
		string address;
		string boss;
	public:
		Hotel(string n,string a,string b):name(n),address(a),boss(b){}
		void Information()
		{
			cout<<"Mehmonxona nomi:"<<name<<endl;
			cout<<"Mehmonxona manzili:"<<address<<endl;
			cout<<"Mehmonxona rahbari:"<<boss<<endl;
		}
};
class RegistanPlaza:public Hotel
{
	private:
		float income;//daromad
	public:
		RegistanPlaza(string n,string a,string b,float i):Hotel(n,a,b),income(i){}
		void hInformation()
		{
			Hotel::Information();
			cout<<"Umumiy foyda:"<<income<<endl;
			cout<<"Xarjatlar:"<<60*income/100<<" mlrd $"<<endl;
			cout<<"Sof foyda:"<<40*income/100<<" mlrd $";
		}
};
int main()
{
	RegistanPlaza r("Registan Plaza","Samarqand shahar,Shohrux Mirzo ko'chasi 53","Azizbek Jabborov",145);
	r.hInformation();
}
