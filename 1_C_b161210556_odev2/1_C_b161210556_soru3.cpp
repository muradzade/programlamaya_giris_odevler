/****************************************************************************
*							SAKARYA ÜNÝVERSÝTESÝ							*
*			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ				*
*					    BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ						*
*				          PROGRAMLAMAYA GÝRÝÞÝ DERSÝ						*
*																			*
*					ÖDEV NUMARASI : 2										*
*					ÖÐRENCÝ ADI : Murad Abaszade							*
*					ÖÐRENCÝ NUMARASI : 1612.10556							*
*					DERS GRUBU : C (1.ogretim)								*
*****************************************************************************/
#include "stdafx.h"
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double a, b, c, delta;
	setlocale(LC_ALL, "Turkish");
	cout << "ax² + bx + c = 0   olmak üzere ";
	cout << "a sayýsýný giriniz : "; cin >> a;
	cout << "b sayýsýný giriniz : "; cin >> b;
	cout << "c sayýsýný giriniz : "; cin >> c;
	delta = pow(b, 2) - 4 * a*c;
	if (delta > 0)//delta degeri 0-dan buyuk ise kokler hesaplanarak ekrana basilir
	{
		cout << "X1 = " << (-b - sqrt(delta)) / (2 * a) << endl;
		cout << "X2 = " << (-b + sqrt(delta)) / (2 * a) << endl;
	}
	else if (delta<0)//delta 0-dan kucuk ise kokler karmasik sayi seklinde ekrana basilir
	{
		cout << "X1 = " << -b / (2 * a) << "+" << sqrt((-1)*(delta)) / (2 * a) << "i" << endl;
		cout << "X2 = " << -b / (2 * a) << "-" << sqrt((-1)*(delta)) / (2 * a) << "i" << endl;
	}

	else //0-a esit ise bir koku var ve ekrana basilir
		cout << "X = " << (-b + sqrt(delta)) / (2 * a) << endl;

	system("pause");
}
