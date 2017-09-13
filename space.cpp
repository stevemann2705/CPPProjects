// opOverload.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class space{
	int x;

public:
	space(){
	
	}

	space(int a){
		x=a;
	}

	space(space &s){
		x=s.x;
	}

	void operator -(){
		x=-x;
	}
	
	void display(){
		cout << "x=" << x << endl;
	}

	//friend int operator -(space &s);
}

/*int operator -(space &s){
	return -s.x;
}*/

int _tmain(int argc, _TCHAR* argv[])
{
	space s1;
	space s2(4);
	space s3(10);
	s3.display();
	-s3;
	//s1 = -s2;
	s3.display();
	return 0;
}

