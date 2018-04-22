/*
 * sortm.c
 *
 *  Created on: Apr 21, 2018
 *      Author: thibault
 */
#include "sortm.h"
#include <vector>
#include <iostream>
#include <stdlib.h>

using namespace std;

vector<int> vectorGenerator(int size, int min, int max) {
	vector<int> vec(size);
	for (unsigned int i = 0; i < vec.size(); i++) {
		vec[i] = ((rand() % (max - min)) + min);
	}
	return vec;
}

int bubbleSort(vector<int> &vec) {
	bool swapped = true;
	int cnt = 0;
	while (swapped) {
		swapped = false;
		for (unsigned int i = 0; i < vec.size() - 1; i++) {
			if (vec[i] > vec[i + 1]) {
				swap(vec[i], vec[i + 1]);
				cnt++;
//				cout << "count: " << cnt;
//				printVector(vec);
				swapped = true;
			}
		}
	}
	return cnt;
}

int reverseBubbleSort(vector<int> &vec) {
	bool swapped = true;
	int cnt = 0;
	while (swapped) {
		swapped = false;
		for (unsigned int i = 0; i < vec.size() - 2; i++) {
			if (vec[i] > vec[i + 1]) {
				swap(vec[i], vec[i + 1]);
				cnt++;
//				cout << "count: " << cnt;
//				printVector(vec);
				swapped = true;
			}
		}
		if(!swapped)
			break;
		for (unsigned int j = vec.size()-1; j > 1; j--) {
			if (vec[j] < vec[j - 1]) {
				swap(vec[j], vec[j - 1]);
				cnt++;
//				cout << "count: "<< cnt;
//				printVector(vec);
				swapped = true;
			}
		}
	}
	return cnt;
}

void selectionSort(vector<int> &vec){
	int min(0);
	for(unsigned int i=0; i< vec.size();i++){
		min = i;
		for(unsigned int j=i+1;j<vec.size();j++){
			if(vec[j] < vec[min]){
				min = j;
			}
		}
		swap(vec[i],vec[min]);
	}
}


void printVector(const vector<int> &vec) {
	cout << " vector: ";
	for (unsigned int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << endl;
}
