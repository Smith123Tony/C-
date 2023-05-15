#define _CRT_SECURE_NO_WARNINGS 1

class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	//«∞÷√++
	Date& operator++()
	{
		_day += 1;
		return *this;
	}

	//∫Û÷√++
	Date operator++(int)
	{
		Date tmp(*this);
		_day += 1;
		return tmp;
	}
private:
	int _year;
	int _month;
	int _day;
};