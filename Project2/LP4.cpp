#define main mainLP4

#include "LP4.h"

#include<iostream>
#include<vector>
using namespace std;





int main() {

    //4.1

    //vector<int> Ist,Stok;
   // int n, i, j;
   // int arr[100][100];
   // bool flag;


   // cin >> n;
   // for (i = 0; i < n; i++)
   //     for (j = 0; j < n; j++)
   //         cin >> arr[i][j];

   // for (i = 0; i < n; i++)
   //     if (sumColumnMat(arr[0], i, n, sizeof(arr[0]) / sizeof(int))) {
   //         if (!sumStringMat(arr[i], n))
   //             Stok.push_back(i);
   //     }
   //     else {
   //         if (sumStringMat(arr[i], n))
   //             Ist.push_back(i);
   //     }


   // cout << n << '\n';
   // cout << Ist.size() ;
   // for (i = 0; i < Ist.size(); i++)
   //     cout << ' ' << Ist[i]+1 ;
   // cout << '\n';
   // cout << Stok.size();
   // for (i = 0; i < Stok.size(); i++)
   //     cout << ' ' << Stok[i]+1 ;
   // cout << '\n';


    //4.2

    //int i, j,n,k;
    //
    //cin >> n;
    //vector<vector<int>> arr (n,vector<int>(n,0));
    //for (i = 0; i < n; i++) {
    //    cin >> k;
    //    while (k--) {
    //        cin >> j;
    //        arr[i][--j]++;
    //    }
    //}

    //for (i = 0; i < n; i++) {
    //    cout << arr[i][0];
    //    for (j = 1; j < n; j++)
    //        cout<<' ' << arr[i][j];
    //    cout << '\n';
    //}

    
    //4.1

    int i, j, n, m, k;
    
    cin >> n >> m;

    vector<vector<int>> matIncident(n, vector<int>(m, 0));

    vector<vector<int>> arr (n,vector<int>(n,0));

    //inMat(n, m, matIncident);

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            std::cin >> matIncident[i][j];

    int poz[2];
    for (j = 0; j < m; j++) {
        k = 0;
        for (i = 0 ; i < n; i++)
            if (matIncident[i][j])
                poz[k++] = i;

        arr[poz[0]][poz[1]]++;
        arr[poz[1]][poz[0]]++;
    }


   // outMat(arr, n, n);
 
    for (i = 0; i < n; i++) {
        std::cout << arr[i][0];
        for (j = 1; j < n; j++)
            std::cout << ' ' << arr[i][j];
        std::cout << '\n';
    }





    return 0;

}
