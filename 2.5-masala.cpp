#include <iostream>
using namespace std;
class Book
{
private:
    string name;
    int year;
public:
    //Standart konstruktor
    Book():name("No name"),year(0){}
    //Parametrli konstruktor
    Book(string n,int y):name(n),year(y){}
    void checkTest()
    {
        cout<<"Kitob "<<(year/100)+1<<" asrda yozilgan";
    }
};
int main()
{
    Book b("Dasturlash Asoslari",999);
    b.checkTest();
    return 0;
}

