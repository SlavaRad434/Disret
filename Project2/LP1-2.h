#pragma once
#include <iostream>
#include <string>
#include <set>
#include <stdio.h>
#include <time.h>

using namespace std;
int i, j;
int siz;
int sizA, sizB;
std::string sort(std::string A,int siz) {
    int b;
   for(j=1;j<siz;j++)
    for (i = 0; i < siz-j; i++) {
        if (A[i] > A[i + 1]) {
            b = A[i];
            A[i] = A[i + 1];
            A[i + 1] = b;
        }
    }
    return A;
}
std::string nosit (std::string A, int siz) {
std::string B;
for (i = 0;  i < siz ; i++)
    {
    
        if (A[i] != A[i + 1]) {
            B=B+A[i];
        }
    }
return B;
}

std::string OR (std::string A, std::string B) {
    std::string C;
   
    sizA = A.size();
    sizB = B.size();
    for (i = 0, j = 0; i < sizA && j < sizB;) {
        if (A[i] == B[j]) { C = C + A[i]; i++; j++; }
        else if (A[i] > B[j]) { C = C + B[j]; j++; }
        else if (A[i] < B[j]) { C = C + A[i];i++; }
    }
    if (i < sizA) {
        for (;i < sizA;i++)  C = C + A[i];
    }
    else for (;j < sizB;j++)  C = C + B[j];
    return C;


}
std::string AND (std::string A, std::string B) {

    std::string C;
   
    sizA = A.size();
    sizB = B.size();
    for (i = 0, j = 0; i < sizA && j < sizB;) {
        if (A[i] == B[j]) { C = C + A[i]; i++; j++; }
        else if (A[i] > B[j])j++;
        else if (A[i] < B[j])i++;
    }
    return C;
}
std::string ISCL(std::string A, std::string B) {
    std::string C;

    
    sizA = A.size();
    sizB = B.size();
    for (i = 0, j = 0; i < sizA && j < sizB;) {
        if (A[i] < B[j]) {
            C =C + A[i]; 
            i++;
       
        }
        else if (A[i] > B[j]) 
            j++;
        else if (A[i] == B[j]) {
            i++;
            j++;
        }
    }
    return C;
        

}
void haractVect(std::string A, std::string U, bool* vect) {
    for (i = 0, j = 0;j < siz-1;j++)
        if (A[i] == U[j])
        {
            vect[j] = 1;
            i++;
        }
};

int maxDigit(int x) {
    for (i = 1; x = x / 10; i++);
    return i;
};

void printRelation(set<int> arr) {
    int maxDigiArr, N;


    N = arr.size();
    auto it1 = arr.end();
    it1--;
    maxDigiArr = maxDigit(*it1);
    printf(" %*c", maxDigiArr, ' ');

    for (int n : arr) {
        printf("|\t%*d", maxDigiArr, n);

    }
    cout << endl;

    for (i = 0; i < N * 8 + maxDigiArr; i++)
        cout << '-';
    cout << endl;

    for (it1 = arr.begin(); it1 != arr.end(); it1++) {
        printf(" %*d|\t", maxDigiArr, *it1);
        for (auto it2 = arr.begin(); it2 != arr.end(); it2++)
            //printf("%*d\t", maxDigiArr,(bool)(*it1 % *it2));
            cout << endl;
    }
};

bool reflex(bool** relat, int N) {
        {
        if (relat[0][0]) {
            for (i = 1; i < N; i++)
                    if (relat[i][i])
                        return 0;//нерефлексивно
            return 1;//рефлексивно
        }
    
        else {
            for (i = 0; i < N; i++)
                for (j = i + 1; j < N; j++)
                    if (!relat[i][j])
                        return 0;//нерефлексивно
            return -1;//антирефлексивно
        }
    }
        return -1;// при x%x всегда антирефлективно
    }
    int simet(bool** relat,int N) {
        if (relat[0][1] == relat[1][0]) {
            for (i = 0; i < N; i++)
                for (j = i+1; j < N; j++)
                    if (relat[i][j] != relat[j][i])
                        return 0;//несиметрия
            return 1;//симетрия
        }
        
        else{
            for (i = 0; i < N; i++)
            for (j = i + 1; j < N; j++)
                if (relat[i][j] == relat[j][i])
                    return 0;//несиметрия;
            return -1;//антисиметрия
        }
    }
    
    bool tranzit(bool** relat, int N) {
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
            {
                if (i == j) continue;
                if (!relat[i][j]) continue;
                for (int k = 0; k < N; ++k)
                {
                    if (k == i || k == j) continue;
                    if (relat[j][k] == 0) continue;

                    if (relat[i][k] == 0) { return 0; }
                }
            }
        return 0;
    };

    bool relation(int x1, int x2) {
            return ((2*x1) % x2)== 0;
        }
        void revers_relation(bool**relat,int N,bool** r_relat)
        {
            for (i = 0; i < N; i++)
                for (j = 0; j < N; j++)
                if (relat[i][j])
                    r_relat[j][i] = 1;
                else r_relat[j][i] = 0;
        }
        void kompoz(bool** relat, bool** r_relat, int N, bool**kompoz) {
            int k;
            for (i = 0; i < N; i++)
                for (j = 0; j < N; j++)
                    if (relat[i][j])
                        for (k = 0; k < N; k++)
                            if (r_relat[j][k])kompoz[i][k] = 1;
                            else kompoz[i][k] = 0;
                    
        };