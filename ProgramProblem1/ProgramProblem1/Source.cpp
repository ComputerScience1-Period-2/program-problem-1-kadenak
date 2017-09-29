/*
Kaden Kobernat - September 25,2017 - 2
Program Problem 1
In this assignment I am displaying text that will say my name and my class period by storing them as variables and also the phrase "Hello World"
*/
#include <iostream>
#include <conio.h>
using namespace std;
void pause() {
	cout << "Press any key to continue";
	while (!_kbhit())
	_getch();
	cout << '\n';
}
void main() {
	char classperiod = '2';
	cout << "Period " << classperiod << endl;
	cout << "Hello World" << endl;
		pause();
}
