/****************************************************************************
*							SAKARYA �N�VERS�TES�							*
*			         B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�				*
*					    B�LG�SAYAR M�HEND�SL��� B�L�M�						*
*				          PROGRAMLAMAYA G�R��� DERS�						*
*																			*
*					�DEV NUMARASI : 1										*
*					��RENC� ADI : Murad Abaszade							*
*					��RENC� NUMARASI : 1612.10556							*
*					DERS GRUBU : C (1.ogretim)								*
*****************************************************************************/
#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int odev1, odev2, kisaSinav1, kisaSinav2, vize, finalNotu, odevYuzde, kisaSinavYuzde, vizeYuzde, yilYuzde;
	double yilSonu;
	cout << "Vize notunu giriniz  :  "; cin >> vize;  //Tum verileri kullanicidan istiyoruz
	cout << "1.�dev notunu giriniz  :  "; cin >> odev1;
	cout << "2.�dev notunu giriniz  :  "; cin >> odev2;
	cout << "1.k�sa s�nav notunu giriniz  :  "; cin >> kisaSinav1;
	cout << "2.k�sa s�nav notunu giriniz  :  "; cin >> kisaSinav2;
	cout << "Final notunu giriniz  :  "; cin >> finalNotu;
	cout << "Vizenin y�l i�ine etkisi y�zde ka� olacakt�r  :  "; cin >> vizeYuzde;
	cout << "�devlerin y�l i�ine etkisi y�zde ka� olacakt�r  :  "; cin >> odevYuzde;
	cout << "K�sa s�navlar�n y�l i�ine etkisi y�zde ka� olacakt�r  :  "; cin >> kisaSinavYuzde;
	cout << "Y�l i�i puan�n�n etkisi y�zde ka� olacakt�r  :  "; cin >> yilYuzde;
	int finalYuzde = 100 - yilYuzde;//finalin etki payi hesaplanir
	//aldigimiz bilgiler kullanilarak islem yapiliyor
	yilSonu = (vize*vizeYuzde + odev1*odevYuzde/2 + odev2*odevYuzde/2 + kisaSinav1*kisaSinavYuzde/2 + kisaSinav2*kisaSinavYuzde/2) / 100 * yilYuzde / 100 + finalNotu*finalYuzde / 100;
	if (90 <= yilSonu) //islemin sonucu ekrana bastiriliyor
		cout << "Y�l sonu puan�n�z  :" << yilSonu << "    Harf kar��l���  : AA" << endl;
	else if (85 <= yilSonu)
		cout << "Y�l sonu puan�n�z  :" << yilSonu << "    Harf kar��l���  : BA" << endl;
	else if (80 <= yilSonu)
		cout << "Y�l sonu puan�n�z  :" << yilSonu << "    Harf kar��l���  : BB" << endl;
	else if (75 <= yilSonu)
		cout << "Y�l sonu puan�n�z  :" << yilSonu << "    Harf kar��l���  : CB" << endl;
	else if (65 <= yilSonu)
		cout << "Y�l sonu puan�n�z  :" << yilSonu << "    Harf kar��l���  : CC" << endl;
	else if (58 <= yilSonu)
		cout << "Y�l sonu puan�n�z  :" << yilSonu << "    Harf kar��l���  : DC" << endl;
	else if (50 <= yilSonu)
		cout << "Y�l sonu puan�n�z  :" << yilSonu << "    Harf kar��l���  : DD" << endl;
	else
		cout << "Y�l sonu puan�n�z  :" << yilSonu << "    Harf kar��l���  : FF" << endl;

	system("pause");
}