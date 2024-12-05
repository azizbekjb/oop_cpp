
#include<iostream>
#include<cmath>
using namespace std;
class Triangle
{
  protected:
    float m_a;
    float m_b;
    float m_c;
  public:
    Triangle(float a, float b,float c)
    {
      m_a=a;
      m_b= b;
      m_c=c;
    }
    
    virtual void getGradus()
    {
      //kosinuslar teoremasi
      cout<<"a tomon qarshisidagi burchak:"<<(180/M_PI)*acos((m_a*m_a-m_b*m_b-m_c*m_c)/(-2*m_b*m_c))<<endl;
      cout<<"b tomon qarshisidagi burchak:"<<(180/M_PI)*acos((m_b*m_b-m_a*m_a-m_c*m_c)/(-2*m_a*m_c))<<endl;
      cout<<"c tomon qarshisidagi burchak:"<<(180/M_PI)*acos((m_c*m_c-m_b*m_b-m_a*m_a)/(-2*m_a*m_b))<<endl;
    }
    float p;
    virtual float getPerimetr()
    {
        p=m_a+m_b+m_c;
        return p;
    }
      float s;
    virtual float getArea()
    {
      
        s=sqrt((p/2)*(p/2-m_a)*(p/2-m_b)*(p/2-m_c));
        return s;
    }
};
class RightAgled:public Triangle
{
  public:
    RightAgled(float a,float b,float c):Triangle(a,b,c){}
    float S;
    virtual float getArea()
    {
        if(m_c>m_a and m_c>m_b) 
        {
          S=(m_a*m_b)/2;
        }
        if(m_b>m_c and m_b>m_a)
        {
          S=m_a*m_c/2;
        }
        if(m_a>m_c and m_a>m_b)
        {
          S=m_b*m_c/2;
        }
          return S;
    
    }
};
int main()
{
  RightAgled t(5,4,3);
  t.getGradus();
  cout<<"Uchburchak perimetri:"<<t.getPerimetr()<<endl;
  cout<<"Uchburchak yuzi:"<<t.getArea();
}
