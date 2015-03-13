#include <iostream>
#include <string>
#include <cstring>
#include <map>

#include "smooth_string.h"

using namespace std;

int GooseTattarrattatDiv2::getmin(string s){

	map <char, int> NumOfChar;
	map <char, int>::iterator iter;

	int biggest_num_of_char = 0;
	for (int i = 0; i<s.length(); i++){
		iter = NumOfChar.find(s[i]);
		if (iter != NumOfChar.end()){
			iter->second++;
			biggest_num_of_char = (biggest_num_of_char>iter->second) ? biggest_num_of_char : iter->second;
		}
		else{
			NumOfChar[s[i]] = 1;
		}
	}
	/*
	//�Ż����һ��ѭ����(��ʵ�ڲ�ͬ����¸��и������ƣ����)
	//�����ҵ�����������ĸ�ĸ���
	for (iter = NumOfChar.begin(); iter != NumOfChar.end(); iter++){
	biggest_num_of_char = (biggest_num_of_char>iter->second) ? biggest_num_of_char : iter->second;
	}
	*/

	return (s.length() - biggest_num_of_char);
}

