#include <readF.hpp>
#include <iostream>
#include <fstream>

bool isPrime(int x);
void print10()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << std::endl;
	}
}
int maxOfDigits(int x)
{
	int max = 0;
	while (x > 0)
	{
		if (max < x % 10)
			max = x % 10;
		x /= 10;
	}
	return max;
}
void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void swapSort(int* mas, int n)  
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (mas[i] > mas[j])
				swap(mas[i], mas[j]);
}

void printMenu(int& n)
{
	std::cout << "This is menu" << std::endl;
	std::cout << "1. Press K to write something" << std::endl;
	std::cin >> n;
}
int main()
{
	std::ifstream in("text.txt");
	std::string str;
	in >> str;
	std::cout << str;
	return 0;
	std::cout << mt::cout(123);
}

bool isPrime(int x)
{
	if (x < 2)
		return false;
	for (int d = 2; d <= sqrt(x); d++)
	{
		if (x % d == 0)
			return false;
	}
	return true;
}
















/*#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;
int main() 
{/*
	char txt[100], wor[50][100]{ '\0' };
	int i = 0, j = 0, l = 0,k=0;
	gets_s(txt);
	while (j < 100)
	{
		while (((txt[j] > 64) && (txt[j] < 91)&&(txt[j]!=32)) || ((txt[j] > 96) && (txt[j] < 124)&&(txt[j]!=32)))//если буква,записываем до пробела
		{
			wor[i][l] = txt[j];
			j++;
			l++;
		}
		if (l > 0)//сколько слов + конце
		{
			wor[i][l] = '\0';
			i++;
		}
		l = 0;
		j++;
	}
	for (int l = 0; l < i; l++) {
		for (int q = 0; q < i - l; q++) {
			k = 0;
			while ((wor[q][k] != '\0') && (wor[q+1][k] != '\0')&& (tolower(wor[q][k])==tolower(wor[q+1][k])))
			{
				k++;
			}
			 if (tolower(wor[q][k])>tolower(wor[q+1][k]))
			 {
				 swap(wor[q], wor[q+1]);
			 }
		}
	}


	for (int n = 0; n <= i; n++)
	{
	cout << wor[n] << "\n";
	}
	
	return 0;
}
*/
/*
setlocale(LC_ALL, "Rus");
char str[100], str1[100], ye, no;
int q = 0, f = 0, u;
bool sim=true;
string hel[100];
ifstream in("input.txt", ios::in);
ofstream out("output.txt", ios::out);
in >> u;
in >> ye;
in >> no;

	while (!in.eof())
	{
		in >> hel[f];
		f++;
	}
for (int s = 0; s < f; s++)
{
	for (int y = s+1; y < f; y++)
	{
		if ((hel[s]) == (hel[y]))
		{
			hel[y].clear();
		}
		if (hel[s].length() == hel[y].length())
		{
			sim = true;
			for (int l = 1; l < hel[s].length(); l++)
			{
				if (hel[s][l] != hel[y][l])
				{
					sim = false;
				}
			}
			if (sim == true)
			{
				if ((hel[s][0] < -33) && (hel[s][0] > -67))
				{
					if ((hel[s][0]) == (hel[y][0] - 32))
					{
						hel[y].clear();
					}
					else if ((hel[s][0]) == (hel[y][0]))
					{
						hel[y].clear();
					}
				}
				else if ((hel[s][0]) == (hel[y][0]))
				{
					hel[y].clear();
				}
				else if ((hel[s][0]) == (hel[y][0] - 32))
				{
					hel[y].clear();
				}
			}
		}
	}
}

	for (int i = 0; i < f; i++)
	{
		for (int j = 0; j < f-i-1; j++)
		{
			if ((count(hel[j].begin(), hel[j].end(), ye) == 0)||(count(hel[j].begin(), hel[j].end(), no)>0)) {
				hel[j].clear();
			}

			if ((hel[j].length()) < (hel[j + 1].length()))
			{
				swap(hel[j], hel[j + 1]);
			}
		}
	}



	for (int y = 0; y < u; y++)
	{
		out << hel[y]<<"  ";
	}
	cout << u;

	return 0;
}
*/