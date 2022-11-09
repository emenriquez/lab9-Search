// Use this file to try out any of your code
// use "make demo" to run this code anytime
#include <iostream>
using namespace std;

#include "Search.h"

int main() {

	int myArr[5] = {5, 0, 4, 6, 3};
	double myDarray[5] = {5.0, 0.0, 4.0, 6.0, 3.0};
	string myArr2[3] = {"Hello.", "How's", "it going?"};
	char myArr3[6] = {'g', 'a', 'b', 'a', 't', 'a'};

	printArray(myArr, 5);
	printArray(myArr2, 3);
	printArray(myArr3, 6);

	cout << "Array sorting test: " << endl << endl;

	printArray(myDarray, 5);

	newSort(myDarray, 5);
	printArray(myDarray, 5);
}