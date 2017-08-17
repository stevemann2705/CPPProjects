// StringReversal.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	string str;
	getline(cin, str);
	char* c = new char[str.length()+1];
    char* chr = strdup(str.c_str());
	for(int i=0, j=str.length(); i<=str.length();i++,j--){
		c[j] = chr[i];
	}
	for(int i=0; i<=str.length(); i++){
		cout << c[i];
	}
	system("pause");
	return 0;
}

