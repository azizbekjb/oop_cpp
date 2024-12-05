#include<iostream>
using namespace std;
class FootballClub
{
	private:
		static int points;
		string name;
	public:
		FootballClub(string n):name(n){}
		static int setPoint(int p)
		{
			points = p;
		}
		static int getPoint()
		{
			return points;
		}
		string getName()
		{
			return name;
		}
};
int FootballClub::points=0;
int main()
{
	FootballClub f("Barselona");
	f.setPoint(100);
	cout<<f.getName()<<" klubi "<<FootballClub::getPoint()<<" ochko to'pladi";
}
