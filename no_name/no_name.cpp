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
		if (!NumOfChar.size())//map���Ѿ�����
		return false;
		*/
		map <char, int>::iterator iter;

		iter = NumOfChar.find(b[i]);
		if (NumOfChar.find(b[i]) != NumOfChar.end()){
			iter->second--;
			if (!iter->second)//���b[i]������Ϊ0����ɾ����keyֵ��
				NumOfChar.erase(iter);
		}
		else{//û���ص���key������false
			return false;
		}
	}

	/*  //���಻����
	if (NumOfChar.size()){ //b������map�л���key������false
	return false;
	}
	*/

	return true;
}
