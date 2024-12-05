#include<iostream>
using namespace std;
class Faculty
{
	private:
		static int m_num;
	public:
		static int setNum(int num)
		{
			m_num = num;
		}
		static int getNum()
		{
			return m_num;
		}
};
int Faculty::m_num=0;
int main()
{
	Faculty f;
	f.setNum(100);
	cout<<"Fakultetdagi domlalar soni:"<<f.getNum()<<endl;
	return 0;
}
