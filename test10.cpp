/*
 * test.cpp
 *
 *  Created on: Nov 9, 2017
 *      Author: 120pj
 */




#include<iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream inputstream;
	ofstream outputstream;
	int a, b, c;
	string str;

	outputstream.open("result.txt");
	if (!outputstream)
		exit(0);
	outputstream<<"Writing this to file.\n";

	inputstream.open("result.txt", ios::in);
	while (getline(inputstream, str)) {
		cout << str <<endl;
	}


}
