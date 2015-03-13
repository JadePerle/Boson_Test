#include <iostream>
#include <string>
#include <cstring>

#include "helpful_maths.h"

using namespace std;

int * solution::helpful_maths(string s){
	//初始化数组
	int *r = new int[r_length];
	for (int i = 0; i < r_length; i++){
		r[i] = 0;
	}
	
	for (int i = 0; i < s.length();){
		r[(int)s[i]-48]++;
		i += 2;
	}
	return r;
}


string solution::print_maths(int * r){
	string res;
	for (int i = 1; i < r_length; i++){
		char ch = '0' + i;//int to char
		for (int j = 1; j <= r[i]; j++){
			res += ch;
			res += "+";
		}
	}
	//删除最后多出来的+号
	res = res.substr(0, res.length() - 1); 

	return res;
}