//============================================================================
// Name        : SortMethods.cpp
// Author      : Thibault MARECHAL
// Version     :
// Copyright   : Hey
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "sortm.h"
#include "functions_test.h"
using namespace std;

int main() {
//Generating a random vector
	srand(time(NULL));
	vector<int> a = vectorGenerator(55555);
	printVector(a);
//creating a copy of the random vector
	vector<int> b = a;

	clock_t begin = clock();
	cout << "cnt Bubble" << bubbleSort(b) << endl;
	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	cout << elapsed_secs << endl;
//	printVector(b);

	b = a; //reset the vector
	begin = clock();
	cout << "cnt reverseBubble: " << reverseBubbleSort(b) << endl;
	end = clock();
	elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	cout << elapsed_secs << endl;
//	printVector(b);

	b = a; //reset the vector
	begin = clock();
	selectionSort(b);
	end = clock();
	elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	cout << elapsed_secs << endl;
//	printVector(b);



	  std::cout<<"test1: "<<funcTime(bubbleSort,a)<<"\n";

	return 0;
}
