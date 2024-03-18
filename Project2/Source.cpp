#include <iostream>
#include <string>
#include <set>
#include <stdio.h>
#include <time.h>

int i, j, res;
int siz;
int sizA, sizB;
using namespace std;
//std::string sort(std::string A,int siz) {
//    int b;
//   for(j=1;j<siz;j++)
//    for (i = 0; i < siz-j; i++) {
//        if (A[i] > A[i + 1]) {
//            b = A[i];
//            A[i] = A[i + 1];
//            A[i + 1] = b;
//        }
//    }
//    return A;
//}
//std::string nosit (std::string A, int siz) {
//std::string B;
//for (i = 0;  i < siz ; i++)
//    {
//    
//        if (A[i] != A[i + 1]) {
//            B=B+A[i];
//        }
//    }
//return B;
//}
//std::string OR (std::string A, std::string B) {
//    std::string C;
//   
//    sizA = A.size();
//    sizB = B.size();
//    for (i = 0, j = 0; i < sizA && j < sizB;) {
//        if (A[i] == B[j]) { C = C + A[i]; i++; j++; }
//        else if (A[i] > B[j]) { C = C + B[j]; j++; }
//        else if (A[i] < B[j]) { C = C + A[i];i++; }
//    }
//    if (i < sizA) {
//        for (;i < sizA;i++)  C = C + A[i];
//    }
//    else for (;j < sizB;j++)  C = C + B[j];
//    return C;
//
//
//}
//std::string AND (std::string A, std::string B) {
//
//    std::string C;
//   
//    sizA = A.size();
//    sizB = B.size();
//    for (i = 0, j = 0; i < sizA && j < sizB;) {
//        if (A[i] == B[j]) { C = C + A[i]; i++; j++; }
//        else if (A[i] > B[j])j++;
//        else if (A[i] < B[j])i++;
//    }
//    return C;
//}
//std::string ISCL(std::string A, std::string B) {
//    std::string C;
//
//    
//    sizA = A.size();
//    sizB = B.size();
//    for (i = 0, j = 0; i < sizA && j < sizB;) {
//        if (A[i] < B[j]) {
//            C =C + A[i]; 
//            i++;
//       
//        }
//        else if (A[i] > B[j]) 
//            j++;
//        else if (A[i] == B[j]) {
//            i++;
//            j++;
//        }
//    }
//    return C;
//        
//
//}
//void haractVect(std::string A, std::string U, bool* vect) {
//    for (i = 0, j = 0;j < siz-1;j++)
//        if (A[i] == U[j])
//        {
//            vect[j] = 1;
//            i++;
//        }
//};

//int main() {
//
//    std::string A, B[3],U;
//    for (k = 0; k < 3; k++) {
//        std::cin >> A;
//        siz = A.size();
//        A = sort(A, siz);
//        //  int i = 0;
//        B[k] = nosit(A, siz);
//        siz = B[k].size();
//    }
//    U = OR(B[0], OR(B[1],B[2]));
//    //for (k = 0; k < 3; k++) {
//    //    siz = B[k].size();
//    //    for (j = 0; j < siz; j++) {
//    //        std::cout << B[k][j] << ' ';
//    //    }
//    //    std::cout << std::endl;
//    //}
//    //siz = U.size();  
//    //for (j = 0; j < siz; j++) {
//    //    std::cout << U[j] << ' ';
//
//    //}
//    //std::cout << std::endl;
//    //bool* vectB[3];
//    //for (k = 0;k < 3;k++) {
//    //    vectB[k] = (bool*)calloc(siz, sizeof(bool));
//    //    haractVect(B[k],U,vectB[k]);
//    //    for (j = 0; j < siz; j++) {
//    //        std::cout << vectB[k][j] << ' ';
//    //    }
//    //    std::cout << std::endl;
//    //}
//    B[1] = AND(B[1], B[2]);
//    B[1] = ISCL(B[0], B[1]);
//    //siz = B[1].size();
//  
//        //std::cout << "R = {" ;
//        //if (siz) {
//        //    std::cout << B[1][0];
//        //    for (j = 1; j < siz; j++) {
//        //        std::cout << ',' << B[1][j];
//        //    }
//        //}
//        //std::cout << "}"<<std::endl;
//        siz = U.size();
//        bool* vectR = (bool*)calloc(siz, sizeof(bool));
//        haractVect(B[1], U, vectR);
//        //for (j = 0; j < siz; j++) {
//        //    std::cout << vectR[j] << ' ';
//        //}
//        //std::cout << std::endl;
//
//   // siz = B[1].size();
//        std::cout << "{";
//        for (j = 0; !vectR[j]; j++);
//        std::cout << U[j];
//        j++;
//           
//                for (; j < siz; j++) {
//                    if(vectR[j])
//            std::cout << ',' << U[j] ;
//        }
//                std::cout << "}";
//    
//                free (vectR);
//                
//}


int compar(const void* x1, const void* x2) {
    while ((*(int*)x1 == *(int*)x2)) {
        cout << "Ѕыл введен повтор¤ющийс¤ элемент: " << *(int*)x1 << " ¬ведите еще число : ";
        int* a = (int*)x1;
        cin >> *a;
    }
    return (*(int*)x1 - *(int*)x2);
}

//2.1

//template  <class Key,
//    class T = less<Key>,
//    class A = allocator<Key>>
//    class set;
//int main() {
//    int b;
//    setlocale(LC_ALL, "Russian");
//    int N;
//    cin >> N;
//    set<int> arr ;
//    // int arr[100];
//
//    for (i = 0; arr.size() < N;i) {
//        cin >> b;
//        auto ret = arr.insert(b);
//        if (!ret.second) {
//            cout << "Ѕыл введен повтор¤ющийс¤ элемент: " << b << " ¬ведите еще число : ";
//            cin >> b;
//            arr.insert(b);
//        }
//        else if (cin.get() == '\n' && arr.size() < N) {
//            cout << "¬ведите еще число : ";
//        }
//    }
//    for (int n : arr) {
//        std::cout << n << ' ';
//    }
//    cout << endl;
//
//   
//    
//    for ( auto it1 = arr.begin();it1 != arr.end();it1++) 
//        for(auto it2 = arr.begin();it2 != arr.end();it2++)
//            if (*it1 % *it2) {
//                cout << "(" << *it1 << "," << *it2 << ") ";
//        }
//
//}

//2.2

int maxDigit(int x) {
    for (i = 1; x = x / 10;i++);
    return i;
    
}

void printRelation(set<int> arr){
    int maxDigiArr, N;


    N = arr.size();
    auto it1 = arr.end();
    it1--;
    maxDigiArr = maxDigit(*it1);
    printf(" %*c", maxDigiArr,' ');

    for (int n : arr) {
        printf("|\t%*d", maxDigiArr, n);

    }
    cout << endl;

    for (i = 0;i < N * 8 + maxDigiArr;i++)
        cout <<'-';
        cout << endl;

    for ( it1 = arr.begin();it1 != arr.end();it1++) {
        printf(" %*d|\t", maxDigiArr, *it1);
        for (auto it2 = arr.begin();it2 != arr.end();it2++)
            printf("%*d\t", maxDigiArr,(bool)(*it1 % *it2));
        cout << endl;
    }
}

//int main() {
//    int N,maxDigitN;
//    setlocale(LC_ALL, "Russian");
//    cin >> N;
//    set<int> arr /*= {175, 54, 5, 24}*/;
//
//    
//    while (arr.size() < N) {
//        cin >> i;
//        auto ret = arr.insert(i);
//        if (!ret.second) {
//            cout << "Ѕыл введен повтор¤ющийс¤ элемент: " << i << " ¬ведите еще число : ";
//            cin >> i;
//            arr.insert(i);
//        }
//        else if (cin.get() == '\n' && arr.size() < N) {
//            cout << "¬ведите еще число : ";
//        }
//    }
//    //bool relat[100][100];
//    //for (i = 0;i<0) {
//    //    for (j=0;j<N;j++)
//    //        relat[i][j] = (bool)(*it1 % *it2));
//    //}
//    //relation()
//    printRelation(arr);
//}


//2.3


void writRelation(set<int>* arr) {
    //  i = 0;

}
bool reflex(int it) {
    return it % it;
}
bool sim() {
    int 232;
}

//int maxDigit(int x) {
//    for (i = 1; x = x / 10; i++);
//    return i;
//
//}

void printRelation(set<int>* arr, bool** relat) {
    int maxDigiArr, N;


    N = arr->size();
    auto it1 = arr->end();
    it1--;
    maxDigiArr = maxDigit(*it1);
    printf(" %*c", maxDigiArr, ' ');

    for (int n : *arr) {
        printf("|\t%*d", maxDigiArr, n);

    }
    cout << endl;

    for (i = 0; i < N * 8 + maxDigiArr; i++)
        cout << '-';
    cout << endl;
    i = 0;
    for (it1 = arr->begin(); it1 != arr->end(); it1++, i++) {
        printf(" %*d|\t", maxDigiArr, *it1);
        j = 0;
        for (auto it2 = arr->begin(); it2 != arr->end(); it2++, j++)
            // printf("%*d\t", maxDigiArr, relat[i][j]);
            cout << endl;
    }
}
bool relation(int x1, int x2) {
    return x1 % x2;

}


int main() {
    int N, maxDigitN;
    setlocale(LC_ALL, "Russian");
    //cin >> N;
    N = 200;
    set<int> arr /*= {175, 54, 5, 24}*/;


    while (arr.size() < N) {
        //cin >> i;
        i = rand() % 32000 + 1;
        auto ret = arr.insert(i);
        //if (!ret.second) {
        //    cout << "Ѕыл введен повтор¤ющийс¤ элемент: " << i << " ¬ведите еще число : ";
        //    //cin >> i;
        //    i = rand() % 32000;
        //    arr.insert(i);
        //}
        //else if (cin.get() == '\n' && arr.size() < N) {
        //    cout << "¬ведите еще число : ";
        //}
    }
    bool** relat = new bool* [N];
    for (int i = 0; i < N; i++)
        relat[i] = new bool[N];

    set<int>::iterator it1;
    set<int>::iterator it2;
    for (it1 = arr.begin(), i = 0; it1 != arr.end(); i++, it1++) {
        for (it2 = arr.begin(), j = 0; it2 != arr.end(); j++, it2++)
            relat[i][j] = relation(*it1, *it2);
    }
    double begin = clock();
    printRelation(arr);
    double end = clock();
    cout << (end - begin) / 1000;



}
//auto it = arr.begin();
//if(*arr.begin())
//for (bool reflex = 1;it != arr.end();it++) {
//    if()

//}