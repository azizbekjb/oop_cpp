#include<iostream>
using namespace std;
class Fruct
{
	protected:
		float weight;
		string name;
	public:
		Fruct(float w,string n):weight(w),name(n){}
		virtual void Information()=0;
};
class Apple:public Fruct
{
	public:
		Apple(float w,string n):Fruct(w,n){}
		virtual void Information()
		{
			cout<<"Olmaning vazni:"<<weight<<" kg"<<endl;
			cout<<"Olmadagi suv miqdori:"<<weight*0.21<<" kg"<<endl;
			cout<<"Olmadagi shajar miqdori:"<<weight*0.36<<" kg"<<endl;
			cout<<"Olmaning sof vazni(shakar va suvsiz):"<<weight-weight*0.21-weight*0.36<<" kg"<<endl;
		}
};
class Cherry:public Fruct
{
	public:
		Cherry(float w,string n):Fruct(w,n){}
		virtual void Information()
		{
			cout<<"Gilosning vazni:"<<weight<<" kg"<<endl;
			cout<<"Gilosdagi  suv miqdori:"<<weight*0.23<<" kg"<<endl;
			cout<<"Gilosdagi shajar miqdori:"<<weight*0.19<<" kg"<<endl;
			cout<<"Gilosning sof vazni(shakar va suvsiz):"<<weight-weight*0.23-weight*0.19<<" kg"<<endl;
		}
};
class Pear:public Fruct
{
	public:
		Pear(float w,string n):Fruct(w,n){}
		virtual void Information()
		{
			cout<<"Nokning vazni:"<<weight<<" kg"<<endl;
			cout<<"Nokdagi  suv miqdori:"<<weight*0.25<<" kg"<<endl;
			cout<<"Nokdagi shajar miqdori:"<<weight*0.31<<" kg"<<endl;
			cout<<"Nokning sof vazni(shakar va suvsiz):"<<weight-weight*0.25-weight*0.31<<" kg"<<endl;
		}
};
int main()
{
	float w1,w2,w3;
	cout<<"Olmaning vazni:";cin>>w1;
	Apple a(w1,"Gilos");
	cout<<"Gilosning vazni:";cin>>w2;
	Cherry c(w2,"Gilos");
	cout<<"Nokning vazni:";cin>>w3;
	Pear p(w3,"Nok");
	a.Information();
	c.Information();
	p.Information();
}
