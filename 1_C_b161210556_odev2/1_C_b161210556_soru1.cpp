/****************************************************************************
*							SAKARYA ÜNÝVERSÝTESÝ							*
*			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ				*
*					    BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ						*
*				          PROGRAMLAMAYA GÝRÝÞÝ DERSÝ						*
*																			*
*					ÖDEV NUMARASI : 1										*
*					ÖÐRENCÝ ADI : Murad Abaszade							*
*					ÖÐRENCÝ NUMARASI : 1612.10556							*
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
	cout << "1.ödev notunu giriniz  :  "; cin >> odev1;
	cout << "2.ödev notunu giriniz  :  "; cin >> odev2;
	cout << "1.kýsa sýnav notunu giriniz  :  "; cin >> kisaSinav1;
	cout << "2.kýsa sýnav notunu giriniz  :  "; cin >> kisaSinav2;
	cout << "Final notunu giriniz  :  "; cin >> finalNotu;
	cout << "Vizenin yýl içine etkisi yüzde kaç olacaktýr  :  "; cin >> vizeYuzde;
	cout << "Ödevlerin yýl içine etkisi yüzde kaç olacaktýr  :  "; cin >> odevYuzde;
	cout << "Kýsa sýnavlarýn yýl içine etkisi yüzde kaç olacaktýr  :  "; cin >> kisaSinavYuzde;
	cout << "Yýl içi puanýnýn etkisi yüzde kaç olacaktýr  :  "; cin >> yilYuzde;
	int finalYuzde = 100 - yilYuzde;//finalin etki payi hesaplanir
	//aldigimiz bilgiler kullanilarak islem yapiliyor
	yilSonu = (vize*vizeYuzde + odev1*odevYuzde/2 + odev2*odevYuzde/2 + kisaSinav1*kisaSinavYuzde/2 + kisaSinav2*kisaSinavYuzde/2) / 100 * yilYuzde / 100 + finalNotu*finalYuzde / 100;
	if (90 <= yilSonu) //islemin sonucu ekrana bastiriliyor
		cout << "Yýl sonu puanýnýz  :" << yilSonu << "    Harf karþýlýðý  : AA" << endl;
	else if (85 <= yilSonu)
		cout << "Yýl sonu puanýnýz  :" << yilSonu << "    Harf karþýlýðý  : BA" << endl;
	else if (80 <= yilSonu)
		cout << "Yýl sonu puanýnýz  :" << yilSonu << "    Harf karþýlýðý  : BB" << endl;
	else if (75 <= yilSonu)
		cout << "Yýl sonu puanýnýz  :" << yilSonu << "    Harf karþýlýðý  : CB" << endl;
	else if (65 <= yilSonu)
		cout << "Yýl sonu puanýnýz  :" << yilSonu << "    Harf karþýlýðý  : CC" << endl;
	else if (58 <= yilSonu)
		cout << "Yýl sonu puanýnýz  :" << yilSonu << "    Harf karþýlýðý  : DC" << endl;
	else if (50 <= yilSonu)
		cout << "Yýl sonu puanýnýz  :" << yilSonu << "    Harf karþýlýðý  : DD" << endl;
	else
		cout << "Yýl sonu puanýnýz  :" << yilSonu << "    Harf karþýlýðý  : FF" << endl;

	system("pause");
}