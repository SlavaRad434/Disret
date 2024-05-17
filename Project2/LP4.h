#pragma once
#include<iostream>
#include<vector>

int sumStringMat(int* strinMat, int size);
int sumColumnMat(int* strinMat, int N_Column, int size, int sizeString);


//inline  void inMat(int n, int m, std::vector<std::vector<int>>& mat);

//template <class T>
//void outMat(T mat, int n, int m);

//template <class T>
void incidentInSmezhn(const std::vector<std::vector<int>>& mat, int n, int m, std::vector<std::vector<int>> arr);

int mainLP4();