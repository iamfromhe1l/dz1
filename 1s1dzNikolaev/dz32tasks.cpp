#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double first_Task()
{
	int amount_x = 0;
	double f_sum = 0;
	cout << "������� ���������� �����: ";
	cin >> amount_x;
	for (int i = 0; i < amount_x; i++)
	{
		cout << "������� �������� Z, B, A, Betta ��� X" << i + 1 << ':' << endl;
		double z, b, a, betta;
		cout << "Z = ";
		cin >> z;
		cout << "B = ";
		cin >> b;
		cout << "A = ";
		cin >> a;
		cout << "Betta = ";
		cin >> betta;
		f_sum += pow(z, 3) - b + pow(a, 2) / pow(tan(betta), 2);
	}

	cout << "y = " << f_sum << endl;
	return f_sum;
}

int second_task()
{
	int n, k;
	cout << "������� N: ";
	cin >> n;
	cout << "������� ������� k: ";
	cin >> k;
	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += pow(i + 1, k);
	}
	cout << "�����: " << summ;
	return summ;
}

void third_task()
{
	int num;
	cout << "������� ����� �� ������� 99: ";
	cin >> num;
	cout << max(num % 10, num / 10) << " - ������� �����" << endl;
	cout << min(num % 10, num / 10) << " - ������� �����" << endl;
}

void fourth_task()
{
	cout << "V = ";
	int V = 0, T = 0;
	cin >> V;
	cout << endl
			 << "T = ";
	cin >> T;
	const double g = 9.81;
	cout << "Corner = " << asin(g * T / (2 * V));
}

void fifth_task()
{
	int number = 0, n_power = 0;
	cout << "Enter number: ";
	cin >> number;
	cout << "Enter power: ";
	cin >> n_power;
	cout << "number = " << pow(number, n_power) << endl;
}

void sixth_task()
{
	cout << "1. �����������" << endl
			 << "2. �������" << endl
			 << "3. �����" << endl
			 << "4. �������" << endl
			 << "5. �������" << endl
			 << "6. �������" << endl
			 << "7. �����������" << endl;
	int n;
	cout << "������� �����: ";
	cin >> n;
	switch (n)
	{
	case 1:
		cout << "�����������" << endl;
		break;
	case 2:
		cout << "�������" << endl;
		break;
	case 3:
		cout << "�����" << endl;
		break;
	case 4:
		cout << "�������" << endl;
		break;
	case 5:
		cout << "�������" << endl;
		break;
	case 6:
		cout << "�������" << endl;
		break;
	case 7:
		cout << "�����������" << endl;
		break;
	}
}

void seventh_task()
{
	int x, y, z;
	cout << "������� �: ";
	cin >> x;
	cout << "������� Y: ";
	cin >> y;
	cout << "������� Z: ";
	cin >> z;
	cout << "�� ����� ��������� �����: X = " << x << "; Y = " << y << "; Z = " << z << endl;
	cout << "����� �������: " << pow(x * x + y * y + z * z, 1 / 2) << endl;
}

void eighth_task()
{
	for (double x = -1.1; x <= 0.3; x += 0.2)
	{
		double res = 1.0;
		for (int m = 1; m < 5; m++)
		{
			res *= x * sin(x * m);
			cout << "�������� ������� = " << res << " ��� m = " << m << endl;
		}
		cout << "��������� ��� x = " << x << endl;
	}
}

void ninth_task()
{
	int count_n = 0;
	double now = 0, sum_now = 0;
	cout << "������� ������ �������: ";
	cin >> count_n;
	for (int i = 0; i < count_n; i++)
	{
		cin >> now;
		if (fabs(now) > 2.5)
		{
			sum_now += pow(now, 2);
		}
	}

	cout << sum_now;
}

void tenth_task()
{
	int x = 0, y = 0;
	double ans = 0;
	cout << "������� �������� � : ";
	cin >> x;
	cout << "������� �������� y : ";
	cin >> y;
	ans = pow(1 - tan(x), 1 / tan(x)) + cos(x - y);
	cout << "����� = " << ans << endl;
}

// 11
double getRandNum(int &x)
{
	const int m = 100, a = 8, u = 77;
	x = (a * x + u) % m;
	return x / double(m);
}

void elethenth_task()
{
	cout << "Pseudo-Random Nums: ";
	const int n = 15;
	int x = 2;
	for (int i = 0; i < n; i++, cout << getRandNum(x) << " ")
		;
}

int twelfth_task()
{
	int x, y;
	cout << "Write coord x: ";
	cin >> x;
	cout << "Write coord y: ";
	cin >> y;
	if (x > 0 && y > 0)
	{
		cout << "I" << endl;
		return 0;
	}
	else if (x > 0 && y < 0)
	{
		cout << "IV" << endl;
		return 0;
	}
	else if (x < 0 && y > 0)
	{
		cout << "II" << endl;
		return 0;
	}
	else
	{
		cout << "III" << endl;
		return 0;
	}
}

void thirteenth_task()
{
	int s;
	cout << "Enter three-digit a number: ";
	cin >> s;
	int num1 = s / 100, num2 = s % 100 / 10, num3 = s % 10;
	if (num1 == num2 || num1 == num3 || num2 == num3)
	{
		cout << "Among the digits of the entered three - digit number " << s << " there are identical" << endl;
	}
	else
	{
		cout << "Among the digits of the entered three - digit number " << s << " there are NO identical" << endl;
	}
}

void fourteenth_task(string s = "Я помню чудное мгновенье:/nПередо мной явилась ты,/nКак мимолетное виденье,/nКак гений чистой красоты.#")
{
	int count = 1;
	for (int i = 0; i < s.size() - 1; i++)
	{
		if (s[i] == '/' && s[i + 1] == 'n')
		{
			count += 1;
		}
	}
	cout << "Number of rows: " << count << endl;
}

int fifteenth_task()
{
	int a, b, c, l, h;
	cout << "Enter the length: ";
	cin >> a;
	cout << "Enter the width: ";
	cin >> b;
	cout << "Enter the height: ";
	cin >> c;
	cout << "Enter the length of the oppening: ";
	cin >> l;
	cout << "Enter the height of the oppening: : ";
	cin >> h;
	if ((b <= l && c <= l) && h >= a)
	{
		cout << "Brick went into the hole by the first party" << endl;
		return 0;
	}
	else if ((a <= l && c <= l) && h >= b)
	{
		cout << "Brick went into the hole by the second party" << endl;
		return 0;
	}
	else if ((a <= l && b <= l) && h >= c)
	{
		cout << "Brick went into the hole by the third party" << endl;
		return 0;
	}
	else
	{
		cout << "The brick cannot enter the hole" << endl;
		return 0;
	}
}

void printRhomb(char s, int h)
{
	int spaces = h / 2, dopSpaces = 1;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < spaces; j++)
		{
			cout << ' ';
		}
		if (i == 0 || i == h - 1)
		{
			cout << s;
			spaces--;
		}
		else
		{
			cout << s;
			for (int h = 0; h < dopSpaces; h++)
			{
				cout << ' ';
			}
			cout << s;
			if (i < h / 2)
			{
				dopSpaces += 2;
				spaces--;
			}
			else
			{
				dopSpaces -= 2;
				spaces++;
			}
		}
		cout << endl;
	}
}

int sixteenth_task()
{
	int choice, height, width;
	cout << "Enter the symbol to print the diamond:" << endl;
	cout << "1. #" << endl;
	cout << "2. @" << endl;
	cout << "3. $" << endl;
	cout << endl;

	cout << "Enter a number from 1 to 3: ";
	cin >> choice;

	cout << endl;
	cout << "You only need to enter positive odd numbers, otherwise the rhombus will not be built!!!!" << endl;
	cout << endl;

	cout << "Enter the height of the diamond: ";
	cin >> height;

	if (height <= 0 || height % 2 == 0)
	{
		cout << "Invalid input!" << endl;
		return 0;
	}

	switch (choice)
	{
	case 1:
		printRhomb('#', height);
		break;
	case 2:
		printRhomb('@', height);
		break;
	case 3:
		printRhomb('$', height);
		break;
	default:
		cout << "Invalid number!" << endl;
		break;
	}

	return 1;
}

int seventeenth_task()
{
	string s;
	char num;
	cout << "Enter a sequence of digits: ";
	cin >> s;
	cout << "Enter the number whose serial number you want to find out: ";
	cin >> num;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == num)
		{
			cout << "The digit is in position: " << i + 1 << endl;
			return 1;
		}
	}
	cout << "There is NO such figure in the sequence!" << endl;
	return 0;
}

void eighteenth_task()
{
	int num10;
	string num16 = "";
	cout << "Enter number: ";
	cin >> num10;
	while (num10 != 0)
	{
		int raz = num10 % 16;
		num10 /= 16;
		switch (raz)
		{
		case 10:
			num16.append("A");
			break;
		case 11:
			num16.append("B");
			break;
		case 12:
			num16.append("C");
			break;
		case 13:
			num16.append("D");
			break;
		case 14:
			num16.append("E");
			break;
		case 15:
			num16.append("F");
			break;
		default:
			num16.append(to_string(raz));
			break;
		}
	}
	reverse(num16.begin(), num16.end());
	cout << "A number in the hexadecimal system: " << num16 << endl;
}

int nineteenth_task()
{
	string num;
	cout << "Enter number: ";
	cin >> num;
	for (int i = 0; i < num.size() / 2; i++)
	{
		if (num[i] != num[num.size() - i - 1])
		{
			cout << "This number is NOT a palindrome" << endl;
			return 0;
		}
	}
	cout << "This number is a palindrome" << endl;
	return 1;
}

void twentieth_task()
{
	int a = 5, b = 35;
	int h = 5;
	cout << "y = ";
	for (int i = a; i <= b; i += h)
	{
		cout << pow(tan(log(i)), -1) << "; ";
	}
	cout << endl;
}

void twenty_first_task()
{
	int choice = 0;
	float rating = 0;

	cout << "1)How many cat lives?" << endl
			 << "answers :" << endl
			 << "->5 lives" << endl
			 << "->7 lives" << endl
			 << "->9 lives" << endl;
	cout << "Your answer: ";
	cin >> choice;
	switch (choice)
	{
	case 9:
		rating += 5;
		break;
	default:
		break;
	}

	cout << endl
			 << "2)How many centimeters in a meter?" << endl
			 << "answers :" << endl
			 << "->10 centimeters" << endl
			 << "->100 centimeters" << endl
			 << "->1000 centimeters " << endl;
	cout << "Your answer: ";
	cin >> choice;
	switch (choice)
	{
	case 100:
		rating += 5;
		break;
	default:
		break;
	}

	cout << endl
			 << "2)The speed of sound?" << endl
			 << "answers :" << endl
			 << "->340 m /s" << endl
			 << "->320 m /s" << endl
			 << "->240 m /s " << endl;
	cout << "Your answer: ";
	cin >> choice;
	switch (choice)
	{
	case 340:
		rating += 5;
		break;
	default:
		break;
	}

	cout << endl
			 << "Rating: " << rating << endl;
}

void twenty_second_task()
{
	int matrixSize, sled = 0;
	cout << "Enter matrix size: ";
	cin >> matrixSize;
	for (int i = 0; i < matrixSize; i++)
	{
		for (int j = 0; j < matrixSize; j++)
		{
			int num;
			cin >> num;
			if (i == j)
			{
				sled += num;
			}
		}
	}
	cout << endl
			 << "Sled: " << sled << endl;
}

void twenty_third_task()
{
	int n;
	float sr_summ = 0;
	cout << "Enter array size: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		float num;
		cin >> num;
		sr_summ += num;
	}
	cout << "Arithmetic mean: " << sr_summ / double(n) << endl;
}

void twenty_fourth_task()
{
	int n;
	const double PI = 3.1415;
	cout << "Enter n: ";
	cin >> n;
	double amount = 0;
	for (int i = 0; i < n; i++)
	{
		double dopSumm = 0;
		for (int x = 1; x < i + 2; x += 1)
		{
			dopSumm += sin(x * PI / 180);
		}
		amount += 1 / dopSumm;
	}
	cout << "Amount: " << amount << endl;
}

void twenty_fifth_task()
{
	int amount = 0, gr_num;
	cout << "Enter the right border of the number interval: ";
	cin >> gr_num;
	int num = 0;
	while (num < gr_num)
	{
		num += 5;
		amount += num;
	}
	cout << "Amount: " << amount << endl;
}

void twenty_sixth_task()
{
	cout << "\t\tTable of squares of numbers\n\t\t---------------------------\n\nNumber  \tSquares of number\n------  \t-----------------\n";
	for (int i = 1; i <= 5; i++)
	{
		cout << "  " << i << "    \t\t\t"
				 << i * i << "\n"
				 << endl;
	}
}

void twenty_seventh_task()
{
	cout << "\t\tMultiplication table of the entered number\n\t\t------------------------------------------\n"
			 << endl;
	int num;
	cout << "Enter number: ";
	cin >> num;
	cout << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << i << " * " << num << " = " << num * i << endl;
	}
}

void twenty_eighth_task()
{
	cout << "y = ax^2+bx+c is the first equation. Enter the coefficients a, b, c" << endl;
	int a, b, c, d, k;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	cout << "y = dx+k is the first equation. Enter the coefficients d, k" << endl;
	cout << "d = ";
	cin >> d;
	cout << "k = ";
	cin >> k;

	double D = pow(b - d, 2) - 4 * a * (c - k);
	if (D < 0)
	{
		cout << "No intersection!" << endl;
	}
	else if (D == 0)
	{
		double x = (b - d) / (2 * a);
		double y = d * x + k;
		cout << "Intersection: [" << x << ", " << y << "]" << endl;
	}
	else
	{
		double x1 = (b - d - pow(D, 1 / 2)) / (2 * a);
		double y1 = d * x1 + k;
		double x2 = (b - d + pow(D, 1 / 2)) / (2 * a);
		double y2 = d * x2 + k;
		cout << "Intersection1: [" << x1 << ", " << y1 << "]" << endl;
		cout << "Intersection2: [" << x2 << ", " << y2 << "]" << endl;
	}
}

void twenty_ninth_task()
{
	double num;
	cout << "Enter number: ";
	cin >> num;
	if ((int)num != num)
	{
		cout << "The number is NOT an integer!" << endl;
	}
	else
	{
		cout << "The number is an integer!" << endl;
	}
}

void thirtieth_task()
{
	int num, i = 1;
	do
	{
		cout << "Enter " << i << " number: ";
		cin >> num;
	} while (num != 1);
}

void thirty_first_task()
{
	int amount = 0, gr_num;
	cout << "Enter the last number of the sequence: ";
	cin >> gr_num;
	int num = 0;
	while (num < gr_num)
	{
		num += 5;
		amount += num;
	}
	cout << "The amount of the numbers divisible by 5 from the sequence [0, " << gr_num << "] is equal to: " << amount << endl;
}

void thirty_second_task()
{
	int count, simbolsCount = 1;
	cout << "Enter number of triangles: ";
	cin >> count;
	int spaces = count - 1;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			for (int q = 0; q < spaces; q++)
			{
				cout << ' ';
			}
			for (int q = 0; q < simbolsCount; q++)
			{
				cout << '*';
			}
			for (int q = 0; q < spaces; q++)
			{
				cout << ' ';
			}
			cout << ' ';
		}
		spaces--;
		simbolsCount += 2;
		cout << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");
	thirty_second_task();
	return 0;
}