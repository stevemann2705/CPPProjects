// Banner.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <Windows.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char inp[10];
	char temp[10];
	cin >> inp;
	//cout <<  << endl;
	do{
		cout << inp << endl;
		for(int a=0; a < 9; a++){
			temp[a] = inp[a+1];
			
		
		}
		temp[9] = inp[0];
		for(int a=0; a < 10; a++){
			inp[a] = temp[a];
		}
		Sleep(1000);
		system("cls");
	}while(!(GetKeyState('q') & 0x8000));
	system("pause");
	return 0;
}

