#include <iostream>
#include <cstdlib>
using namespace std;

int check_validity(int x, int y) {

	if ( x>=y ) {
		return 0; }
	else {
		return 1;
	}
}

int sum_up(int x,int y) {
	int sum;
	for ( int i = x; i<= y; i++) {
		sum += i;
	}
	return sum;
}

int main(int argc, char *argv[]) {
	int num1, num2;
	cin >>  num1;
	cin >>  num2;
	cout << "x=" <<  num1 << endl;
	cout << "y=" <<  num2 << endl;

	if (check_validity(num1, num2) == 1) {
		cout << sum_up(num1, num2) << endl;}
	else {
		return 1;}

	return 0;
}

