#include <iostream>
using namespace std;
class GeometrikShakl
{
protected:
    string name;
public:
      GeometrikShakl(string n)
    {
        name=n;
    }
    void ShaklNomi()
    {
        cout<<"Shakl nomi:"<<name<<endl;
    }
    virtual void Yuza()=0;
};
class Tortburchak:public GeometrikShakl
{
private:
    int a;
    int b;
public:
    Tortburchak(string n,int a,int b):GeometrikShakl(n)
    {
        this->a=a;
        this->b=b;
    }
    virtual void Yuza()
    {
        GeometrikShakl::ShaklNomi();
        cout<<"Yuzasi:"<<a*b<<endl;
    }
};
class Uchburchak:public GeometrikShakl
{
private:
    int a;
    int b;
    int c;
public:

    Uchburchak(string n,int a,int b,int c):GeometrikShakl(n)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    virtual void Yuza()
    {
        GeometrikShakl::ShaklNomi();
        cout<<"Yuzasi:"<<a*b*c<<endl;
    }
};
int main()
{
    Uchburchak u("Uchburchak",1,2,3);
    Tortburchak t("Tortburchak",2,5);
    u.Yuza();
    t.Yuza();
    return 0;
}
