#include "stdafx.h"
#include <iostream>
#include <string.h>

using namespace std;

class string1{
	char* s;
	int len;

public:
	string1(){}

	string1(char* c1, int l){
		s = new char[l];
		len =l;
		strcpy(s,c1);
	}

	bool operator >=(string1 &s){
		bool flag;
		if(len >= s.len){
			flag = true;
		}else{
			flag = false;
		}
		return(flag);
	}

	string1 operator +(string1 &s1){
		char* temp = new char[len+s1.len];
		strcpy(temp, strcat(s, s1.s));
		string1 t(temp, len+s1.len);
		return(t);

	}

	void display(){
		cout << s << endl;
		cout << len<< endl;
	}
	
}

int _tmain(int argc, _TCHAR* argv[])
{
	string1 s1;
	string1 s2("hello", 5);
	string1 s3(" world",6);
	s1=s2+s3;
	s1.display();
	bool t= s2>=s3;
	cout << t;

	return 0;
}

