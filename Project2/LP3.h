#pragma once
#include<iostream>
#include<algorithm>

using namespace std;

void mainLP3();

//void mixArr(int* arr, int n) {
//	int j, i, buff;
//	for (i = 0; i < n; i++) {
//		j = rand() % n;
//		buff = arr[i];
//		arr[i] = arr[j];
//		arr[j] = buff;
//	}
//}
//void getRand(int* arr, int size, int k, int* out) {
//	int j, i, buff;
//	//int* a = new int[k];
//	for (i = 0; i < k; i++, size--) {
//		j = rand() % size - 1;
//
//
//		buff = arr[size - 1];
//		out[i] = arr[j];
//		arr[size - 1] = arr[j];
//		arr[j] = buff;
//	}
//}
//
//void getRand(int* arr, int size, int k) {
//	int j, i, buff;
//	//int* a = new int[k];
//	for (i = 0; i < k; i++, size--) {
//		j = rand() % (size - 1);
//
//		buff = arr[size - 1];
//		//out[i] = arr[j];
//		arr[size - 1] = arr[j];
//		arr[j] = buff;
//	}
//}
//template <typename T>
//int indMinMore(T arr, int size, int begin, int minint)
//{
//	int i, minI = 99999, indMin;
//	for (i = size - 1; i >= begin; i--) {
//		if (arr[i] == minint + 1)
//			return i;
//		else if (arr[i] < minI) {
//			minI = arr[i];
//			indMin = i;
//		}
//	}
//	return indMin;
//}

bool endLeks(int k, bool* arr);

template <typename T>
void swapi(T& x1, T& x2) {
	T b;
	b = x1;
	x1 = x2;
	x2 = b;
}


template <typename T>
void rotation(T begin, T end)
{
	for (; begin < end; begin++, end--)
		swapi(*begin, *end);
}

template <typename T>
void nextLeks(T arr, int n) {
	int j, i;
	for (i = n - 1; i && arr[i] <= arr[i - 1]; i--);
	//cout << i;
	for (j = n - 1; arr[i - 1] >= arr[j]; j--);
	//cout << j;

	swapi(arr[j], arr[i - 1]);

	//b = arr[j];
	//arr[j] = arr[i - 1];
	//arr[i - 1] = b;

	rotation(arr + i, arr + n - 1);
}



template <typename T>
void nextLeksRazbien(T arr, int *n) {
	int b,bn;
	for (b = *n - 2; b && arr[b] == arr[b - 1]; b--);
	
	++arr[b];
	b = arr[*n - 1];
	arr[*n - 1] = 0;
	bn = *n + b - 2;
	while ( b-1)
		arr[*n - 2 + --b] = 1;
	*n = bn;
}