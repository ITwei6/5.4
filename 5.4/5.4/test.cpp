#include <iostream>
using namespace std;

//class Data
//{
//public:
//	Data(int year = 2023, int month = 5, int day = 3)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	
//	bool operator>( const Data& x)//���������
//	{
//		if (_year > x._year)
//		{
//			return true;
//		}
//		else if (_year == x._year && _month > x._month)
//		{
//			return true;
//		}
//		else if (_year == x._year && _month == x._month &&_day > x._day)
//		{
//			return true;
//		}
//		return false;
//	}
	//bool operator<(const Data& x)
	//{
	//	if (_year < x._year)
	//	{
	//		return true;
	//	}
	//	else if (_year == x._year && _month < x._month)
	//	{
	//		return true;
	//	}
	//	else if (_year == x._year && _month == x._month && _day < x._day)
	//	{
	//		return true;
	//	}
	//	return false;
	//}
//	/*�������캯��*/
	//Data(const Data& d)
	//{
	//	cout << "666" << endl;
	//	_year = d._year;
	//	_month = d._month;
	//	_day = d._day;
	//}
//	/*��ֵ���������--Ҳ��һ��Ĭ�ϳ�Ա����
//	������������ǳ������ֵ����
//	�Զ������ͻ�ȥ�������ĸ�ֵ��������غ�����*/
//	/*Data& operator=(const Data& d)
//	{
//		if (this != &d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//			
//		}
//		return *this;
//	}*/
////private:
//	int _year;
//	int _month;
//	int _day;
//};

//bool Less (const Data& x1, const Data& x2)
//{
//	if (x1._year < x2._year)
//	{
//		return true;
//	}
//	else if (x1._year == x2._year && x1._month < x2._month)
//	{
//		return true;
//	}
//	else if (x1._year == x2._year && x1._month == x2._month && x1._day < x2._day)
//	{
//		return true;
//	}
//	return false;
//}
//	bool operator<(const Data& x1,const Data& x2)
//{
//	if (x1._year < x2._year)
//	{
//		return true;
//	}
//	else if (x1._year == x2._year && x1._month < x2._month)
//	{
//		return true;
//	}
//	else if (x1._year == x2._year && x1._month == x2._month && x1._day < x2._day)
//	{
//		return true;
//	}
//	return false;
//}
//bool operator>(const Data& x1, const Data& x2)//���������
//{
//	if (x1._year > x2._year)
//	{
//		return true;
//	}
//	else if (x1._year == x2._year && x1._month > x2._month)
//	{
//		return true;
//	}
//	else if (x1._year == x2._year && x1._month == x2._month && x1._day > x2._day)
//	{
//		return true;
//	}
//	return false;
//}
//bool operator==(const Data& d1, const Data& d2)
//{
//	return d1._year == d2._year
//		&& d1._month == d2._month
//		&& d1._day == d2._day;
//}
//
//int main()
//{
//
//	Data d1(2023, 2, 1);
//	Data d2(2023, 5, 4);
//	/*d1 == d2;
//	operator==(d1, d2);*/
//	//��������d����һ���ģ����Զ���������ʹ����������ʾ��ǵ��ö�Ӧ����������غ���
//	
//}

//int main()
//{
//	//Ϊʲô�������Ϳ���ֱ�ӱȽϣ��Զ������Ͳ�����ֱ�ӱȽϣ�
//	Data d1(2023, 5, 4);
//	/*Data d2(d1);*/
//	//���캯��--��һ���Ѵ��ڵĶ����ʼ���´����Ķ���
//	Data d3, d4;
//	//�Ƚ�һ��d1��d2�Ĵ�С,�ж��Ƿ�d1С��d2
//	/*Less(d1, d2);*/
//	/*operator<(d1, d2);*/
//	//d1.operator<(d2);
//	//d1 < d2;//�����ͬ��operator<(d1,d2);
//	//cout << (d1<d2) << endl;
//	//cout << (d1>d2) << endl;
//	//d4 = d1;
//	////��ֵ��������غ���--�Ѿ����ڵ���������֮��ĸ��ƿ�����
//	//d3= d1 = d2;
//
//}
//class Data
//{
//public:
//	Data(int year = 2023, int month = 5, int day = 3)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	/*��ֵ���������--Ҳ��һ��Ĭ�ϳ�Ա����
//	������������ǳ������ֵ����
//	�Զ������ͻ�ȥ�������ĸ�ֵ��������غ�����*/
//	/*Data operator=(const Data& d)
//	{
//		if (this != &d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//			return *this;
//		}
//	}*/
//	//private:
//	int _year;
//	int _month;
//	int _day;
//};
//Data operator=(const Data d1,const Data& d2)
//{
//	
//		d1._year = d2._year;
//		d1._month = d2._month;
//		d1._day = d2._day;
//		return d2;
//
//}
class Time//ʱ����
{
public:
	Time()
	{
		_hour = 1;
		_minute = 1;
		_second = 1;
	}
	Time& operator=(const Time& t)
	{
		if (this != &t)
		{
			_hour = t._hour;
			_minute = t._minute;
			_second = t._second;
		}
		return *this;
	}
private:
	int _hour;
	int _minute;
	int _second;
};
class Date//������
{
private:
	// ��������(��������)
	int _year = 2023;
	int _month = 1;
	int _day = 1;
	// �Զ�������
	Time _t;
};
int main()
{
	Date d1;
	Date d2;
	d1 = d2;
	return 0;
}
//
//int main()
//{
//	Data d1(2023, 5, 1);
//	Data d2(2023, 5, 6);
//	Data d3(2023, 9, 9);
//	d1 = d2 = d3;
//	//�����ǵ��ú�������������һ����
//	d1.operator=(d2);
//}