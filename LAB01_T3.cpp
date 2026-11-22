/*
* Lab       : 01   -   T3
* Name      : Minahil Arshad
* Roll No   : SE-26-13
* Date      : 23-11-2026
* Purpose   : To Find Bugs
*/
#include <iostream>
using namespace std; /*BUG 01 : missing';' after std*/
int main ()
{
	cout << "Welcome to the lab!" << endl; /*BUG 02 : missing';' after endl*/
	cout << "Today we learn \"C++\"." << endl; /* BUG 03 : capital C of Cout*/
	cout << "Files are in C:\\Lab01" << endl; /*BUG 04 : missing '\' with \Lab*/
	cout << "Bye!" << endl; /*BUG 05 : missing terminating " character*/
	return 0;
	}
