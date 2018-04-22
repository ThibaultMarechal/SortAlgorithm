/*
 * sortm.h
 *
 *  Created on: Apr 21, 2018
 *      Author: thibault
 */

#ifndef SORTM_H_
#define SORTM_H_
#include <vector>

using std::vector;

vector<int> vectorGenerator(int size,int min=0,int max=1000);
int bubbleSort(vector<int> &vec);
int reverseBubbleSort(vector<int> &vec);
void selectionSort(vector<int> &vec);
void printVector(const vector<int> &vec);

#endif /* SORTM_H_ */
