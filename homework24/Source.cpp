#include <iostream>
# include <string>

using namespace std;

bool check_polindrom(const string& word) {
	for (size_t i = 0; i < word.length() / 2; ++i) {
		if (tolower(word[i]) != tolower(word[word.length() - (i + 1)]))
			return false;

	}

	return true;

}






int main() {
	setlocale(LC_ALL, "Russian");


	string str1;
	cout << "Task 1\nEnter the string : " << endl;
	getline(cin, str1);
	char sym;
	cout << "Enter symbol: " << endl;
	cin >> sym;
	cin.ignore();
	string res;
	for (int i = 0; i < str1.length(); i++)
		if (str1[i] == sym)
			res += sym;
	cout << "Ñharacters in the given string = " << res << endl;
	cout << endl << endl;


	string str;
	cout << "Task 2\nEnter a word: ";
	getline(cin, str);
	if (check_polindrom(str)) {
		cout << "That word is a palindrome!";
	}
	else {
		cout << "This is not a polydrome!" << endl;
	}
	cout << endl << endl;

	const int sz = 900;
	char s[sz + 1];
	char mas[] = { '.', ',', '!', '?', ' ' };
	cout << "Task 3\nEnter the string : " << endl;
	cin.getline(s, sz + 1);
	int count = 0;
	for (int i = 0; i < sz; ++i) {
		for (size_t k = 0; k < sizeof(mas); ++k) {
			if (s[i] == mas[k]) {
				++count;
			}
		}
	}
	cout << "Number of characters per line = " << count << endl;
	cout << endl << endl;


	string std;
	char d;
	cout << "Task 4\nEnter the string :" << endl;//
	getline(cin, std);
	cout << "Enter symbol: " << endl;
	cin >> d;
	cin.ignore();
	int pos = std.rfind(d);
	string sub = std.substr(pos + 1);
	if (isalpha(d))
		cout << "Line:\n" << sub << endl;

	return 0;
}
