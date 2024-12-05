#include<iostream>
using namespace std;
class SportClub
{
	protected:
		string name;
		int points;
		int year;
	public:
		SportClub(string n,int p,int y):name(n),points(p),year(y){}
		void displayInfo()
		{
			cout<<"Klub nomi:"<<name<<endl;
			cout<<"Klub to'plagan ochko:"<<points<<endl;
			cout<<"Klub tashkil topgan sana:"<<year<<endl;
		}
};
class FootballClub:public SportClub
{
	private:
		int  game;
	public:
		FootballClub(string n,int p,int y,int g):SportClub(n,p,y),game(g){}
		void footballInfo()
		{
			SportClub::displayInfo();
			cout<<"Klubning mavsumdagi o'yinlar soni:"<<game<<" ta"<<endl;
		}
};
class BasketballClub:public SportClub
{
	private:
		int win;
	public:
		BasketballClub(string n,int p,int y,int w):SportClub(n,p,y),win(w){}
		void basketballInfo()
		{
			SportClub::displayInfo();
			cout<<"Klubning mavsumdagi g'alabalar soni:"<<win<<" ta"<<endl;
		}
};
int main()
{
	FootballClub f("Manchester siti",100,1880,32);
	BasketballClub b("Boston",152,1946,33);
	b.basketballInfo();
	f.footballInfo();
}
