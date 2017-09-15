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

	friend istream& operator >>(istream& din, item& i);

	friend ostream& operator <<(ostream& dout, item& i);

	void display(){
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	}

};

istream& operator >>(istream& din, item& i){
	cout << "Enter x:";
	din >> i.x;
	cout << "Enter y:";
	din >> i.y;
	return(din);
}

ostream& operator <<(ostream& dout, item& i){
	dout << "x: " << i.x;
	dout << "y: " << i.y;
	return(dout);
}

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
	cout << i4;
	system("pause");
	return 0;
}
