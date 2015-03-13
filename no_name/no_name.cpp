#include "no_name.h"

#include <iostream>
#include <cstring>
#include <string>
#include <map>

using namespace std;

bool solution::no_name(string a, string b){
	if (a.length() != b.length())
		return false;

	map <char, int> NumOfChar;

	for (int i = 0; i<a.length(); i++){
		if (NumOfChar.find(a[i]) != NumOfChar.end()){
			NumOfChar[a[i]] ++;
		}
		else{
			NumOfChar[a[i]] = 1;
		}
	}

	for (int i = 0; i < b.length(); i++){
		/*
		if (!NumOfChar.size())//map中已经空了
		return false;
		*/
		map <char, int>::iterator iter;

		iter = NumOfChar.find(b[i]);
		if (NumOfChar.find(b[i]) != NumOfChar.end()){
			iter->second--;
			if (!iter->second)//如果b[i]个数已为0，则删除该key值对
				NumOfChar.erase(iter);
		}
		else{//没有重到该key，返回false
			return false;
		}
	}

	/*  //多余不用了
	if (NumOfChar.size()){ //b遍历完map中还有key，返回false
	return false;
	}
	*/

	return true;
}
