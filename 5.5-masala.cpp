#include<iostream>
#include<string>
using namespace std;
class Sportsman
{
	protected:
		string name;
		int weight;//o'girlik
		int high;//bo'yi
	public:
		Sportsman():name("No name"),weight(0),high(0){}
		Sportsman(string n,int w,int h):name(n),weight(w),high(h){}
		void checkTest()
		{
			cout<<name<<" nomli sportchining bo'yi:"<<high<<" santimetr"<<".Og'irligi:"<<weight<<" kg!"<<endl;
		}			
};
class FootballPlayer:public Sportsman
{
	private:
		string position;
	public:
		FootballPlayer():Sportsman(),position("No position"){}
		FootballPlayer(string n,int w,int h,string p):Sportsman(n,w,h),position(p){}
		void checkF()
		{
			cout<<name<<" nomli futbolchi "<<position<<" pozitsiyasida o'ynaydi!"<<endl;
		}
};
class BasketballPlayer:public Sportsman
{
	private:
		int points;
	public:
		BasketballPlayer():Sportsman(),points(0){}
		BasketballPlayer(string n,int w,int h,int pt):Sportsman(n,w,h),points(pt){}
		void checkB()
		{
			if(points>100)
			{
				cout<<name<<" nomli basketbolchi "<<points<<" ochko to'plab rekord naticha qayd etdi"<<endl;
			}
			else
			{
				cout<<name<<" nomli basketbolchi "<<points<<" ochko to'pladi"<<endl;
			}
		}
};
int main()
{
	FootballPlayer f("Azizbek",62,172,"Yarim himoyachi");
	BasketballPlayer b("Azizbek",62,172,96);
	f.checkTest();
	f.checkF();
	b.checkTest();
	b.checkB();
	return 0;
}
