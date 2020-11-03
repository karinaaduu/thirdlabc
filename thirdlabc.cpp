#include <iostream>
#include <cmath>
using namespace std;

long double fact(int m)
{
	if (m <0) // ���� ������������ ���� ������������� �����
		return 0; // ���������� ����
	if (m == 0) // ���� ������������ ���� ����,
		return 1; // ���������� ��������� �� ����
	else // �� ���� ��������� �������
		return m * fact(m - 1); // ������ ��������.
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
	cout << "������� x= ";
	cin >> x;
	cout << "������� n= ";
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
	else cout << "�� ������������� �������, ��� ��� 0<=n<5\n";
	system("pause");
	return 0;
}
