// CppPrimer.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

int check_state(fstream::iostate s)
{
	if (s && fstream::badbit)
		wcout << "badbit" << endl;
	if (s && fstream::failbit)
		wcout << "failbit" << endl;
	if (s && fstream::eofbit)
		wcout << "eofbit" << endl;
	if (!s)
		wcout << "goodbit" << endl;
	return 0;
}
int main()
{
	//int i = 0;
	//int *const p1 = &i; // top-level const
	//const int ci = 43;  // top-level const
	//const int *p2 = &ci; //low-level const
	//const int *const p3 = p2; // top-level & low-level
	//const int &r = ci; //low-level
	//i = ci;
	//p2 = p3;

	//int *p = p3; //error
	//p2 = p3;
	//p2 = &i;

	//int &r = ci;
	//const int &r2 = i;
	ifstream File("Readme.txt");
	string s;
	int Line = 1;

	while (getline(File,s))
	{
		decltype(s.size()) count = 0;
		int word_count = 0;
		istringstream sstream(s);
		string word;
		while (sstream >> word)
		{
			word_count++;
		}

		for (auto &c : s)
		{
			c = toupper(c);
			count++;
		}

		cout << "Line " << Line << ' '<< count <<" chars " << word_count << " words:\t";
		cout << s << endl;
	//	check_state(File.rdstate());
	}
	//check_state(File.rdstate());
	system("PAUSE");
    return 0;
}

