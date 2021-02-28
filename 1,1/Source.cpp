#include <iostream>
#include <string>

using namespace std;

class Fraction{
public:
	int first;
	int second;
	void ipart()
	{
		if ( second == 0)
		{
			cout << "Знаменник не може дорiвнювати нулю!! " << endl;
		}
		else
		{
			cout << first / second << endl;
		}
		
	}
};

int main()
{
	setlocale(LC_ALL, "ukr");

	Fraction first;
	
	cout << "Чисельник: ";
	cin >> first.first;
	cout << "Знаменник: ";
	cin >> first.second;
	cout << "Ответ: ";
	first.ipart();

	


	return 0;
}