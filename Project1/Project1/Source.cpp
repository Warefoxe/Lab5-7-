#include <iostream>
#include <iomanip>
#include <conio.h>


using namespace std;

int main()
{
	setlocale(LC_ALL, "UKR");


	/*int day = 1;

	while (day <= 5)
	{

		cout << endl << "День#" << day;
		switch (day)
		{
		case 1: cout << " Понедiлок" << endl;
			break;
		case 2: cout << " Вiвторок" << endl;
			break;
		case 3: cout << " Середа" << endl;
			break;
		case 4: cout << " Четвер" << endl;
			break;
		case 5: cout << " П'ятниця" << endl;
			break;
		}
		cout << "Пiдйом!\n";
		cout << "Снiданок!\n";
		cout << "Навчання!\n";
		cout << "Вiдпочинок\n";
		day++;
	}*/


	/*{
		int num = 1, max_num, sum = 0;
		cout << "Введiть деяке додатне число А: " << endl;
		cin >> max_num;
		while (num <= max_num)
		{
			cout << num << endl;
			sum += num;
			num++;
		}
		cout << "Сума цих чисел = " << sum << endl; 
	}*/


	
	/*int num, max_num = 0;
	float sum = 0;
	cout << "Введiть деяке додатне число А: " << endl;
	cin >> max_num;
	num = max_num;
	while (num > 0)

	{
		cout << num << endl;
		sum += num;
		--num;
	}
	cout << "Середнє = " << sum / max_num << endl;*/






	/*int num = 0, sum = 0;
		cout << "Введiть число : " << endl;
		cin >> num;
		while (num <= 500)
	
		{
			cout << num << endl;
			sum += num;
			++num;
		}
		cout << "Сума = " << sum << endl;*/






	/*int num = 0, c = 0;
		char symbol;
		cout << "Введiть знак лiнiї: " << endl;
		cin >> symbol;
		cout << "Введiть довжину: " << endl;
		cin >> num;
		
	
		while (c < num)
	
		{
			cout << symbol;
			++c;
		}
		cout << endl << endl;*/
	




			//int start_num = 0, finish_num = 0, a = 0, b = 0, c = 0, d = 0, e = 0;
		
			//cout << "Введiть початкове значення дiапазону : " << endl;
			//cin >> start_num;
			//cout << "Введiть кiнцеве значення дiапазону : " << endl;;
			//cin >> finish_num;
		
			//if (start_num > finish_num)
			//{
			//	b = start_num;
			//	start_num = finish_num;
			//	finish_num = b;
			//}
		
			//a = start_num; c = start_num; d = start_num; e = start_num;
		
			//cout << endl << "Всi числа з дiапазону: ";
			//while (a <= finish_num)
			//{
			//	cout << a << ", ";
			//	++a;
			//}

			////  Варіант а

			//cout << "\n\nА.) Всi парнi числа з дiапазону: ";
			//while (c <= finish_num)
			//{
			//	if (c % 2 == 0)
			//	{
			//		cout << c << ", ";
			//	}
			//	++c;
			//}

			//// Варіант b
			//
			//cout << "\n\nВ.) Всi непарнi числа з дiапазону: ";
			//while (d <= finish_num)
			//{
			//	if (d % 2 != 0)
			//	{
			//		cout << d << ", ";
			//	}
			//	++d;
			//} 

			//// Варіант c


			//cout << "\n\nС.) Всi числа, кратнi 7: ";
			//while (e <= finish_num)
			//{
			//	if ((e % 7 == 0) && !(e == 0))
			//	{
			//		cout << e << ", ";
			//		
			//	}
			//	++e;
			//}
			//cout << endl << endl;




			////	7.  Ocean Levels. Assuming the ocean’s level is currently rising at about 1.5 millimeters
			////	per year, write a program that displays a table showing the number of millimeters that the
			////	ocean will have risen each year for the next 25 years.
			//
			//int Year = 1;
			//int a = 1, b = 1;

			//const float Risen = 1.5;

			//cout << "Таблиця яка показує загальний рiвень океану\n"
			//	<< "який буде рости в наступнi 25 рокiв.\n\n";
			//cout << "Введiть початковий рiк : " << endl;
			//cin >> Year;

			//cout << endl << "    \tРiк      На скiльки виросло\n"
			//<< "                   (мiлiметри)\n"
			//<< "-----------------------------\n";

			//while (b <= 25)
			//{
			//	cout << a << ".\t" << Year << " =        " << b * 1.5 << endl;

			//	
			//++Year;
			//a++; b++;
			//}



		

			//int n, f = 1, i = 1;
			//cout << "Обчислити факторiал (n!) додатного цiлого числа: n!= 1*2*3*...n \n" << endl;
			//cout << "Введiть додатнє цiле число:" << endl;
			//cin >> n;

			//while (i <= n)
			//{
			//	f = f * i;				
			//	//cout << "Факторiал числа " << i << " є " << f << endl;
			//	i++;	

			//}

			//cout << "Факторiал числа " << n << " є " << f << endl;




			/*int num = 0, dil = 1;
			cout << "Вивести дільники заданого натурального числа.(while). \n" << endl;
			cout << "Введiть натуральне число: " << endl;
			cin >> num;
			cout << "Дiльники: " ;

			while (dil <= num)
				{

				if (num % dil == 0)
					{
					cout << endl << dil;
					}
				dil++;
				}
			cout << endl;*/




			/*int number = 0, a = 1;
			int num = 0;
			cout << "Введiть цiле число: " << endl;
			cin >> number;

			num = abs(number);
			while (num > 0)
			{
				num /= 10;
				if (num > 0)
				{
					++a;
				}
			}
					
			cout << endl << "Ви ввели " << a << " - цифрове число " << endl;*/




			

			//int lift = 0, sum = 0, mas = 100, count = 0;
			//
			//	cout << "Введiть критичну вантажопiд'ємнiсть лiфта: " << endl;
			//	cin >> lift;
			//	
			//	while (sum <= lift && mas <= lift)
			//	{
			//		if (mas <= lift)
			//		{		
			//		sum += mas;
			//		
			//		}
			//		count++;
			//		
			//	}
			//
			//	cout << "Пасажир № " << count << " постраждає!" << endl;




				/*int password = 123;
				int i = 1;
				int a = 0;



				do
				{
					cout << "Введiть пароль для входу. " << "Спроба# " << i << endl;
					cin >> a;
					if (a == password)
					{
						cout << "Пароль вiрний" << endl;
					}
					i++;
					system("cls");

				} while (a != password && i <= 3);





				int balance = 1000;
				int znyatya = 0;
				int b;
				int c;
				if (password == a)
				{

					do
					{
						cout << "Вхiд в систему виконаний \n" << endl;
						cout << "1. Поточний баланс \n" << "2. Зняти готiвку \n" << "3. Вихiд \n" << endl;
						cout << "Виберiть  операцiю " << endl;
						cin >> b;

						switch (b)
						{
						case 1:
							cout << "Ваш баланс складає: \n" << balance << endl;
							_getch();
							system("cls");
							cout << "\nНатиснiть будь-яку клавiшу для того, щоб повернутися в меню" << endl;
							break;
						case 2:
							cout << "Введiть суму яку ви хочете зняти " << endl;
							cin >> znyatya;
							if (znyatya <= balance)
							{
								balance = balance - znyatya;
								cout << "Баланс " << balance << endl;

							}

							else
							{
								cout << "Недостатньо коштiв " << "\nВаш баланс = " << balance << endl;
							}
							cout << "\nНатиснiть будь-яку клавiшу для того, щоб повернутися в меню" << endl;

							_getch();
							system("cls");
							break;

						case 3:
							cout << "Вихiд" << endl;
							break;
						}

					} while (b != 3);

				}

				else
				{
					cout << "Пароль невiрний. Всi спроби вичерпанi " << endl;
				}
*/



				srand(time(0));
				int temp, day = 0, count = 0;
				
				while (day < 7)
				{
					temp = rand() % 31 - 10;
					cout << "Температура дня #" << day + 1 << ": " << temp << endl;
					if (temp > 10)
						count++;
					day++;
				}
				if (count > 0)
					cout << "Кiлькiсть днiв з температурою вище 10 C: " << count << endl;
				else
					cout << "Не було днiв з температурою бiльше 10 C!" << endl;




				


	system("pause");
	return 0;
}