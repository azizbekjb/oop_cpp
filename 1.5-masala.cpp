#include<iostream>
#include<cstring>
using namespace std;
class Book
{
	private:
		string m_name;//kitob nomi
		int m_number;//kitobdagi sahifalar soni
		string m_type; //kitob turi
		string m_author; //Kitob muallifi
	public:
		void setName(string name)
		{
			m_name=name;
		}
		void setNumber(int number)
		{
			m_number=number;
		}
		void setType(string type)
		{
			m_type=type;
		}
		void setAuthor(string author)
		{
			m_author = author;
		}
		string getName()
		{
			return m_name;
		}
		int getNumber()
		{
			return m_number;
		}
		string getType()
		{
			return m_type;
		}
		string getAuthor()
		{
			return m_author;
		}		
};
int main()
{
	Book b1,b2,b3,b4;
	b1.setName("Matematik analiz");
	cout<<b1.getName()<<endl;
	b2.setName("Dasturlash asoslari");
	cout<<b2.getName()<<endl;
}
