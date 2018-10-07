#ifndef POINTS_CPP
#define POINTS_CPP

#include "points.h"
////////////////////////////////////////////////////////////////////////////////
Point::Point()
{
	point	= 0;
	rats	= 0;
	sum		= 0;
}
/*----------------------------------ВВОД--------------------------------------*/
void Point::cininfo(int& point, int& rats)	// Ввод кол-ва очков и крыс
{
	cout << "Введите сумму умений или кол-во одного умения: ";
	cin >>	point;
	
	cout << "Введите кол-во крыс которое хотите скрестить: ";
	cin >>	rats;
}
/*----------------------------------ПОДСЧЕТ-----------------------------------*/
void Point::count() // Подсчет
{
	cininfo(point, rats);

	sum = point/rats; // Остаток для 1 крысы
	
	if(sum <= 0)
		cout << "К сожелению вы не можете потратить на это 0 умений\n";
	else
	{
		cout << "Ваше число " << sum << endl;
		cout << "Список чисел:" << 
			"\n3-> 2\n6-> 3\n10-> 4\n15-> 5\n21-> 6\n28-> 7\n36-> 8\n";
	}
}
/*----------------------------------ВЫВОД-------------------------------------*/
void Point::show()
{
	cout << "\n\t***Калькулятор для игры \"Крысы Онлайн\"***" << endl;
	count();
	cout << "---------------------------------------------------------" << endl;
}

#endif
