#include <iostream>
#include <cmath>
using namespace std;

long double fact(int m)
{
	if (m <0) // если пользователь ввел отрицательное число
		return 0; // возвращаем ноль
	if (m == 0) // если пользователь ввел ноль,
		return 1; // возвращаем факториал от нул€
	else // ¬о всех остальных случа€х
		return m * fact(m - 1); // делаем рекурсию.
}

int main()
{
	setlocale(0, "");
	float x,
		n,
		a, 
		b,
		S, 
		eps;
	cout << "¬ведите x= ";
	cin >> x;
	cout << "¬ведите n= ";
	cin >> n;
	int k = 0;
	eps = 0.0001;
	S = 0;
	if (n >= 0 and n < 5)
	{
		do {
			b = pow((-1), k) * pow(x / 2, n + 2 * k);
			a = b / (fact(k) * fact(k + n));
			S = S + a;
			k = k + 1;
		} while (a >= eps);
		cout << "S=" << S<<"\n";
	}
	else cout << "Ќе соответствует условию, так как 0<=n<5\n";
	system("pause");
	return 0;
}
