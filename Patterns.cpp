// Patterns.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	
	for(int rows=0; rows<n;rows++){
		int zz =0;
		for(int spaces=n-(rows+1); spaces>=0;spaces--){
			cout << " ";
		}
		for(int col=0; col<rows+1; col++){
			if(zz==0)
				zz++;
			else if(zz==1)
				zz--;
			else
				cout << "Error";
			cout << zz;
		}
		for(int col=rows; col>0; col--){
			if(zz==0)
				zz++;
			else if(zz==1)
				zz--;
			else
				cout << "Error";
			cout << zz;
		}
		for(int spaces=n-(rows+1); spaces>=0;spaces--){
			cout << " ";
		}
		cout << endl;
	}

	for(int rows=0; rows<n;rows++){
		char zz =64;
		for(int spaces=n-(rows+1); spaces>=0;spaces--){
			cout << " ";
		}
		for(int col=0; col<rows+1; col++){
			zz++;
			cout << zz;
		}
		for(int col=rows; col>0; col--){
			zz--;
			cout << zz;
		}
		for(int spaces=n-(rows+1); spaces>=0;spaces--){
			cout << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

