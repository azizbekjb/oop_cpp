#include<iostream>
using namespace std;
class City
{
	private:
		string name;//Shahar nomi
		long int number;//Shahar aholisi
		double square;//city square(Shahar maydoni)
	public:
		//standart konstruktor
		City()
		{
			name = "No name";
			number = 0;
			square = 0;
		}	
		//parametrli konstruktor
		City(string name, int number,double square)
		{
			this->name= name;
			this->number = number;
			this->square = square;
		}
		string getName()
		{
			return name;
		}
		double getSquare()
		{
			return square;
		}
		int getNumber()
		{
			return number;
		}
		float getTest()
		{
			return number/square;
		}
};
int main()
{
	City c("Samarqand",573200,123.82);
	cout<<c.getName()<<" shahari!"<<endl;
	cout<<"Shahar aholisi:"<<c.getNumber()<<endl;
	cout<<"Shahar maydoni:"<<c.getSquare()<<" kilometr kvadrat!"<<endl;
	cout<<"Shahar aholi zichligi:"<<c.getTest();
	return 0;
}
