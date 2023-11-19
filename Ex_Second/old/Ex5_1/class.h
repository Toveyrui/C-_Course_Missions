/**
*@file		class.h
*@brief		Create a class TDate to seve year info.
*@author	Reiky
*@date		Nov.15.2023
*@see		Our course book page 163.
*/
using namespace std;
class TDate
{
public:
	void SetDate(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
	
	int IsLeapYear()
	{
		return (year%4==0&&year%100!=0)||(year%400==0);
	}

	void Print()
	{
		cout<<year<<"."<<month<<"."<<day<<endl;
	}

private:
	int year,month,day;
};
