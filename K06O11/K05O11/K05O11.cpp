// K05O11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char k_adi[10], k_sifre[20];
	char id[] = "SUHA";
	char sifre[] = "ENTER";

	while (1) {
		cout << "Kullanici Adi: ";
		gets_s(k_adi);

		if (strcmp(id, k_adi) == 0) {
			cout << "\nSifre: ";
			gets_s(k_sifre);
			if (strcmp(sifre, k_sifre) == 0)
				break;
			else
				cout << endl << "Yanlis Sifre!!!\n";
		}
		else
			cout << endl << "Kullanici Adi Yanlis!!!\n";
	}
	cout << "Kullanici Adi ve Sifre Dogru.\n";
	system("PAUSE");
    return 0;
}

