#include <iostream>
using namespace std;
#include <vector>
#include <string>

int main()
{
	int n = 0;
	cin >> n;
	int sum = 0;
	while (n--)
	{
		string tmp;
		cin >> tmp;
		if (tmp == "CLEAR")
		{
			sum = 0;
		}
	}
	return 0;
}