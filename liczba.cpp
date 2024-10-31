#include <iostream>

using namespace std;

bool czy_bezkwadratowa(int n)
{
	for (int i = 2; i * i <= n; i++)
		if (n % (i * i) == 0)
			return false;
	return true;
}

int main()
{
	int n;
	cin >> n;
	cout << n << (czy_bezkwadratowa(n) ? " jest bezkwadratowa." : " nie jest bezkwadratowa.") << endl;
	return 0;
}
