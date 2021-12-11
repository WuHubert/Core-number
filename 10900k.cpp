#include<iostream>
using namespace std;

int main()
{
	int money;
	int core = 18;
	int threads = 36;
	int number = 1;

	cin >> money;
	while (money >= 30000)
	{
		money = money - 30000;
		cout << number << "" << " i9 10980XE " << core << "C " << threads << "T" << endl;
		cout << "		money : " << money << endl;

		core = core + 18;
		threads = threads + 36;
		number = number + 1;
	}
	return 0;