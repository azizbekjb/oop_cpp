#include <iostream>
using namespace std;
//Device(qurilma) ,ajdod sinfi
class  Device
{
	public:
		string name;
		int RAM;//OPERATIV xotira
		int ROM;//Asosiy xotira
		string system;//Operatsion sistema
		//Standart konstruktor
		Device()
		{
			name= "No name";
			RAM = 0;
			ROM = 0;
			system = "No systeam";
		}
		Device(string name,int RAM, int ROM, string system)
		{
			this->name=name;
			this->RAM = RAM;
			this->ROM = ROM;
			this->system = system;
		}
		string getName()
		{
			return name;
		}
		string getSystem()
		{
			return system;
		}
		int getRAM()
		{
			return RAM;
		}
		int getROM()
		{
			return ROM;
		}
};
//avlod sinfi.telefon sinfi
class Telephone:public Device
{
	private:
		int pixel;//telefon orqa kamera	o'lchami
	public:		
		//standart konstruktor
		Telephone():Device()
		{
			pixel = 0;
		}
		//Parametrli konstruktor
		Telephone(int pixel,string name,int RAM, int ROM,string system):Device(name,RAM,ROM,system)
		{
			this->pixel = pixel;
		}
		int getPixel()
		{
			return pixel;
		}
};
//avlod sinf.Komputer(kompyuter sinfi)
class Komputer:public Device
{
	private:
		int ranc;//Kompyuter razryadi
	public:
		Komputer():Device()
		{
			ranc = 0;
		}
		//Parametrli konstruktor
		Komputer(int ranc,string name,int RAM, int ROM,string system):Device(name,RAM,ROM,system)
		{
			this->ranc = ranc;
		}	
		int getRanc()
		{
			return ranc;
		}
};
int main()
{
	Komputer komp(64,"Dell",16,512,"Windows");
	Telephone tel(13,"Infinix",8,128,"Android");
	Device *dev[]= {&komp, &tel};
	cout<<komp.getName()<<" kompyuteri!"<<endl;
	cout<<komp.getRanc()<<" bit razryadli!"<<endl;
	for(int i=0; i<1; i++)
	{
		cout<<"Operatsion sistemasi:"<<dev[i]->getSystem()<<endl;
		cout<<"Operativ xotirasi:"<<dev[i]->getRAM()<<" GB!"<<endl;
		cout<<"Asosiy xotirasi:"<<dev[i]->getROM()<<" GB!"<<endl;
	}
	cout<<tel.getName()<<" telefoni!"<<endl;
	for(int i=1; i<2; i++)
	{
		cout<<"Operatsion sistemasi:"<<dev[i]->getSystem()<<endl;
		cout<<"Operativ xotirasi:"<<dev[i]->getRAM()<<" GB!"<<endl;
		cout<<"Asosiy xotirasi:"<<dev[i]->getROM()<<" GB!"<<endl;
	}
	cout<<"Orqa kamera o'lchami:"<<tel.getPixel()<<" megapiksel!";
}

