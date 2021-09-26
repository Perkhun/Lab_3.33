// Lab_03_3.cpp
// < Перхун Ірини >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 17

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; //Вхідний параметр
	double R; //Вхідний параметр
	double y; //Результат обчислення виразу

	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;
	 
	//Рогалуження в повній формі
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