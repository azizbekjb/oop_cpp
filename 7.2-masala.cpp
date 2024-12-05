/*#include<iostream>
using namespace std;
class Currency
{
	virtual void Conversion()=0;	
};
class Dollar:public Currency
{
	protected:
		float summ;
		float kurs;
	public:
		Dollar(float k, float s):kurs(k),summ(s){}
		virtual void Conversion()
		{
			cout<<summ<<" dollar: "<<summ*kurs<<" rubl"<<endl;
		}
};
class Euro:public Currency
{
	protected:
		float summ;
		float kurs;
	public:
		Euro(float k, float s):kurs(k),summ(s){}
		virtual void Conversion()
		{
			cout<<summ<<" yevro: "<<summ*kurs<<" rubl"<<endl;
		}
};
int main()
{
	float summ1, summ2,kurs1,kurs2;
	cout<<"1 dollar qancha rubl:";cin>>kurs1;
	cout<<"Dollar miqdorida pul kiriting:";cin>>summ1;
	cout<<"1 yevro qancha rubl:";cin>>kurs2;
	cout<<"Yevro miqdorida pul kiriting:";cin>>summ2;
	Dollar d(kurs1,summ1);
	Euro e(kurs2,summ2);
	d.Conversion();
	e.Conversion();
	
}*/
#include<iostream>
using namespace std;
template<typename T>
T  add(T a, T b)
{
	T c;
	c=a;
	a=b;
	b=c;
	cout<<"a:"<<a<<" " <<"b:"<<b;
}
int main()
{
	int a,b;
	cin>>a>>b;
	
	add(a,b);
}

