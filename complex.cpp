#include "stdafx.h"
#include <iostream>

using namespace std;

class complex{
	int x;
	int y;

public:
	complex(){}

	complex(int a){
		x=a;
		y=a;
	}

	complex(int a, int b){
		x=a;
		y=b;
	}

	complex operator +(complex &c){
		complex c1;
		c1.x = x+c.x;
		c1.y = y+c.y;
		return(c1);
	}

	void display(){
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	complex c1;
	complex c2(3);
	complex c3(10,5);
	c1 = c2 + c3;
	c1.display();
	return 0;
}

