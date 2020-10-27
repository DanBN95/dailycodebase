/*
Made by Dan B.N.
Date: 27/10/20
FIZZBUZZ Game
*/
#include <iostream>
#include <string>

using namespace std;

int main() {

	cout << "*****THE FIZZBUZZ PROBLEM*****" << endl << endl;
	cout << "Enter how many numbers to play" << endl;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0 && i % 5 == 0)
			cout << "FIZZBUZZ";
		else if (i % 3 == 0)
			cout << "FIZZ";
		else if (i % 5 == 0)
			cout << "BUZZ";
		else
			cout << i;
		if(i!=n)
			cout << ", ";
	}
	return 0;
}