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
//	bool operator>( const Data& x)//运算符重载
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
//	/*拷贝构造函数*/
	//Data(const Data& d)
	//{
	//	cout << "666" << endl;
	//	_year = d._year;
	//	_month = d._month;
	//	_day = d._day;
	//}
//	/*赋值运算符重载--也是一个默认成员函数
//	对于内置类型浅拷贝，值拷贝
//	自定义类型会去调用他的赋值运算符重载函数。*/
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
//bool operator>(const Data& x1, const Data& x2)//运算符重载
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
//	//这两个本d质是一样的，在自定义类型中使用运算符本质就是调用对应的运算符重载函数
//	
//}

//int main()
//{
//	//为什么内置类型可以直接比较？自定义类型不可以直接比较？
//	Data d1(2023, 5, 4);
//	/*Data d2(d1);*/
//	//构造函数--用一个已存在的对象初始化新创建的对象
//	Data d3, d4;
//	//比较一下d1和d2的大小,判断是否d1小于d2
//	/*Less(d1, d2);*/
//	/*operator<(d1, d2);*/
//	//d1.operator<(d2);
//	//d1 < d2;//这个等同于operator<(d1,d2);
//	//cout << (d1<d2) << endl;
//	//cout << (d1>d2) << endl;
//	//d4 = d1;
//	////赋值运算符重载函数--已经存在的两个对象之间的复制拷贝。
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
//	/*赋值运算符重载--也是一个默认成员函数
//	对于内置类型浅拷贝，值拷贝
//	自定义类型会去调用他的赋值运算符重载函数。*/
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
class Time//时间类
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
class Date//日期类
{
private:
	// 基本类型(内置类型)
	int _year = 2023;
	int _month = 1;
	int _day = 1;
	// 自定义类型
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
//	//本质是调用函数，这两者是一样的
//	d1.operator=(d2);
//}