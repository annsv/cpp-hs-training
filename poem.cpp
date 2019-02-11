#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	string text;
	string str;

	ifstream myfile("poem.txt");

	while (getline(myfile, str))
		text += ' ' + str;

	myfile.close();

	istringstream istr(text);

	map< string, size_t > dictionary;
	string word;

	while (istr >> word)
		++dictionary[word];

	for (map< string, size_t >::const_iterator it = dictionary.begin(); it != dictionary.end(); ++it)
	{
		cout << it->first << " : " << it->second << endl;
	}

	return 0;
}
