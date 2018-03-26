#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include "split.h"

using namespace std;

int SplitString(char *strData, int intDel, vector<string> &vecData)
{
	char *ptr = NULL;
	int ret_val = -1;
	string data;

	if (NULL == strData)
		return ret_val;

	cout << "Splitting String with delimeter:\"" << (char)intDel << "\""<< endl;

	/*
		Algorithm will be added here.
	*/

	return ret_val;
}

int main()
{
	vector<string> vdata;
	char data[] = "Hello.World.I'm Here.";
	SplitString(data, '.', vdata);
	return 0;	
}
