#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

using namespace std;


class item{
	

public:
	int x;
	int y;

	item(){}

	item(int a){
		x=a;
		y=a;
	}

	item(int a, int b){
		x=a;
		y=b;
	}

	item(item &i){
		x=i.x;
		y=i.y;
	}

	item operator *(int a){
		item t;
		t.x=x*a;
		t.y=y*a;
		return(t);
	}

	friend item operator *(int a, item c);

	void display(){
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	}

};

item operator *(int a, item c){
	item temp;
	temp.x = a*c.x;
	temp.y = a*c.y;
	return(temp);
}

int _tmain(int argc, _TCHAR* argv[])
{
	item i1;
	item i2(4);
	item i3(5,7);

	i1 = i2 * 3;
	i1.display();

	item i4 = 3*i3;
	i4.display();
	system("pause");
	return 0;
}
