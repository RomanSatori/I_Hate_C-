// KeyGenerator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
static const char  alphnum[] = "0123456789" "!@#$%^&*" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";

int strLen = sizeof(alphnum) - 1;
char GetRand() {
	return alphnum[rand() % strLen];
}

int main(){
	int n, c = 0, s = 0;
	srand(time(0));
	cout << "Enter length password: ";
	cin >> n;
	cout << n << endl;
	cout << "Your Password:";
	N:
	char C;
	string D;
	for (int z = 0; z < n; z++) {
		C = GetRand();
		D += C;
		if (isdigit(C))
		{
			c++;
		}
		if (C == '!' || C == '@' || C == '#' || C == '$' || C == '%' || C == '^' || C == '&' || C == '*')
		{
			s++;
		}
		if (n > 2 && (s == 0 || c == 0))
		{
			goto N;
		}
		cout << D;
		cout << endl << endl << "HAPPY USING";
		return 0;
	}
}

