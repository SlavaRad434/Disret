#include "LP4.h"




int sumStringMat(int* strinMat, int size) {
    int sum = 0;
    while (size--)
        sum += strinMat[size];
    return sum;
}

int sumColumnMat(int* strinMat, int N_Column, int size, int sizeString) {
    int sum = 0;

    while (size--)
        sum += strinMat[N_Column + sizeString * size];
    return sum;
}

//inline  void inMat(int n, int m,  std::vector<std::vector<int>> &mat)
//{
//    int i, j;
//    for (i = 0; i < n; i++)
//        for (j = 0; j < m; j++)
//            std:: cin >> mat[i][j];
//
//}


// для простых не направленных графов

//void incidentInSmezhn(const std::vector<std::vector<int>>& mat, int n, int m, std::vector<std::vector<int>> *arr)
//{
//    int i,j,k;
//    int poz[2];
//    for (j = 0; j < m; j++) {
//
//        for (i = 0,k=0; i < n; i++)
//            if (mat[i][j])
//                poz[k++] = i;
//    
//        (*arr)[poz[0]][poz[1]]++;
//        (*arr)[poz[1]][poz[0]]++;
//    }
//}


//void outMat(const std::vector<std::vector<int>>& mat, int n, int m)
//{
//    int i, j;
//    for (i = 0; i < n; i++) {
//        std::cout << mat[i][0];
//        for (j = 1; j < n; j++)
//            std::cout<<' ' << mat[i][j];
//        std::cout << '\n';
//    }
//
//
//}