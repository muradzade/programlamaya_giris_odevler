/****************************************************************************
*							SAKARYA ÜNÝVERSÝTESÝ							*
*			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ				*
*					    BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ						*
*				          PROGRAMLAMAYA GÝRÝÞÝ DERSÝ						*
*																			*
*						ÖDEV NUMARASI : 2									*
*						ÖÐRENCÝ ADI : Murad Abaszade						*
*						ÖÐRENCÝ NUMARASI : 1612.10556						*
*						DERS GRUBU : C (1.öðretim)							*
*****************************************************************************/

#include "stdafx.h"
#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int diziBoyut, okSatiri = 0;//okSatiri deðiþkeni okun hangi satýrda bastýrýlmasý için
	char okYonu;
	cin >> diziBoyut;
	system("Cls");
	int *dizi = new int[diziBoyut];
	for (int i = 0; i < diziBoyut; i++)//rasgele sayýlar diziye atanýyor
	{
		dizi[i] = rand() % 10;
	}
	do      //dizi bastýrýlýyor
	{
		for (int satir = 0; satir < diziBoyut; satir++)
		{
			if (satir == okSatiri)//flag deðeri deðiþmediði için ok ilk satira bastirilir
				cout << "--->";
			if (satir != okSatiri)//ok olmayan satýrlarda ok yerine bosluk basýlýr
				cout << setw(5);
			cout << dizi[satir] << endl;
		}
		cout << "(a veya A tuþu aþaðý götürür)\n(d veya D tuþu yukarý götürür)\n(c veya C tuþu programdan çýkarýr)\nokun yönünü seçin  : ";
		cin >> okYonu;
		system("Cls");
		if (okYonu == 'A' || okYonu == 'a')//girilen ok yonu A,a ise
		{
			okSatiri++;//ok satýrý bir artarak,ok bir altdaki elemaný gösterir
			for (int satir = 0; satir < diziBoyut; satir++)
			{
				if (satir == okSatiri)
					cout << "--->";
				if (satir != okSatiri)
					cout << setw(5);
				cout << dizi[satir] << endl;
			}
			cout << "(a veya A tuþu aþaðý götürür)\n(d veya D tuþu yukarý götürür)\n(c veya C tuþu programdan çýkarýr)\nokun yönünü seçin  : ";
		}

		else if (okYonu == 'D' || okYonu == 'd')//girilen ok yönü D,d ise
		{
			okSatiri--;//ok satýrý bir azalarak,ok üstdeki elemaný gösterir
			for (int satir = 0; satir < diziBoyut; satir++)
			{
				if (satir == okSatiri)
					cout << "--->";
				if (satir != okSatiri)
					cout << setw(5);
				cout << dizi[satir] << endl;
			}
			cout << "(a veya A tuþu aþaðý götürür)\n(d veya D tuþu yukarý götürür)\n(c veya C tuþu programdan çýkarýr)\nokun yönünü seçin  : ";
		}
		else if (okYonu == 'C' || okYonu == 'c')//girilen deðer C,c ise döngüden çýkar
			break;
		system("Cls");
	} while (true);
	system("pause");
}