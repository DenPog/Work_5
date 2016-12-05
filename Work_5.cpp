// Work_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <fstream>

using namespace  std;

int n = 0, i = 0;

bool Number(int n)
{
	if (n<1) return false;
	for (int i = 2;i*i <= n;++i)
		if (n%i == 0) return false;

	return true;
}

int main()
{
	setlocale(0, "");

	//открытие файла
	
	ifstream vvod;
	vvod.open ("in.txt");
	vvod >> n;
	vvod.close();

	cout << "Число в файле " << n << endl;	

	//запись в файл
	ofstream fout("out.txt"); // создаём объект класса ofstream для записи и связываем его с файлом cppstudio.txt

	//нахождение простых чисел <n
	for (i = 0;i <= n;++i) {
		if (Number(i)){
		//	cout << i << endl;
			fout << i << endl; // запись строки в файл
		}
	}
		
	fout.close(); // закрываем файл

	system("pause");
    return 0;
}

