/****************************************************************************
*							SAKARYA �N�VERS�TES�							*
*			         B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�				*
*					    B�LG�SAYAR M�HEND�SL��� B�L�M�						*
*				          PROGRAMLAMAYA G�R��� DERS�						*
*																			*
*						�DEV NUMARASI : 2									*
*						��RENC� ADI : Murad Abaszade						*
*						��RENC� NUMARASI : 1612.10556						*
*						DERS GRUBU : C (1.��retim)							*
*****************************************************************************/

#include "stdafx.h"
#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int diziBoyut, okSatiri = 0;//okSatiri de�i�keni okun hangi sat�rda bast�r�lmas� i�in
	char okYonu;
	cin >> diziBoyut;
	system("Cls");
	int *dizi = new int[diziBoyut];
	for (int i = 0; i < diziBoyut; i++)//rasgele say�lar diziye atan�yor
	{
		dizi[i] = rand() % 10;
	}
	do      //dizi bast�r�l�yor
	{
		for (int satir = 0; satir < diziBoyut; satir++)
		{
			if (satir == okSatiri)//flag de�eri de�i�medi�i i�in ok ilk satira bastirilir
				cout << "--->";
			if (satir != okSatiri)//ok olmayan sat�rlarda ok yerine bosluk bas�l�r
				cout << setw(5);
			cout << dizi[satir] << endl;
		}
		cout << "(a veya A tu�u a�a�� g�t�r�r)\n(d veya D tu�u yukar� g�t�r�r)\n(c veya C tu�u programdan ��kar�r)\nokun y�n�n� se�in  : ";
		cin >> okYonu;
		system("Cls");
		if (okYonu == 'A' || okYonu == 'a')//girilen ok yonu A,a ise
		{
			okSatiri++;//ok sat�r� bir artarak,ok bir altdaki eleman� g�sterir
			for (int satir = 0; satir < diziBoyut; satir++)
			{
				if (satir == okSatiri)
					cout << "--->";
				if (satir != okSatiri)
					cout << setw(5);
				cout << dizi[satir] << endl;
			}
			cout << "(a veya A tu�u a�a�� g�t�r�r)\n(d veya D tu�u yukar� g�t�r�r)\n(c veya C tu�u programdan ��kar�r)\nokun y�n�n� se�in  : ";
		}

		else if (okYonu == 'D' || okYonu == 'd')//girilen ok y�n� D,d ise
		{
			okSatiri--;//ok sat�r� bir azalarak,ok �stdeki eleman� g�sterir
			for (int satir = 0; satir < diziBoyut; satir++)
			{
				if (satir == okSatiri)
					cout << "--->";
				if (satir != okSatiri)
					cout << setw(5);
				cout << dizi[satir] << endl;
			}
			cout << "(a veya A tu�u a�a�� g�t�r�r)\n(d veya D tu�u yukar� g�t�r�r)\n(c veya C tu�u programdan ��kar�r)\nokun y�n�n� se�in  : ";
		}
		else if (okYonu == 'C' || okYonu == 'c')//girilen de�er C,c ise d�ng�den ��kar
			break;
		system("Cls");
	} while (true);
	system("pause");
}