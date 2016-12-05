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

	//îòêðûòèå ôàéëà
	
	ifstream vvod;
	vvod.open ("in.txt");
	vvod >> n;
	vvod.close();

	cout << "chislo v file " << n << endl;	

	//çàïèñü â ôàéë
	ofstream fout("out.txt"); // ñîçäà¸ì îáúåêò êëàññà ofstream äëÿ çàïèñè è ñâÿçûâàåì åãî ñ ôàéëîì cppstudio.txt

	//íàõîæäåíèå ïðîñòûõ ÷èñåë <n
	for (i = 0;i <= n;++i) {
		if (Number(i)){
		//	cout << i << endl;
			fout << i << endl; // çàïèñü ñòðîêè â ôàéë
		}
	}
		
	fout.close(); // çàêðûâàåì ôàéë

	system("pause");
    return 0;
}

