// Lab_03_3.cpp
// < ������ ����� >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 17

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; //������� ��������
	double R; //������� ��������
	double y; //��������� ���������� ������

	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;
	 
	//����������� � ����� ����
	if (x <= -1 - R)
		y = 1;
	else
		if (-1 - R < x && x <= -1)
			y = -sqrt(R * R - (x + 1) * (x + 1));
		else
				if (-1 < x && x <= 2)
					y = -R;
				else
					y = (R * (x - 2))/ 2 - R;

	cout << endl;
	cout << "y= " << y << endl;

	cin.get();
	return 0;
}