#include "LP3.h"

bool endLeks(int k, bool* arr) {
	for (int i = 0; i < k; i++) {
		if (!arr[i])
			return 0;

	}
	return 1;
}
void mainLP3() {

		//3.2

		//	int n = 0, m, i;
		////char chb;
		//bool flag = 1;
		////bool arr[20],b;
	
		//cin >> n >> m;
	
		//bool* arr = new bool[n];
		//for (i = 0; i < n; i++)
		//	arr[i] = 0;
	
		//for (i = 0; i <= m; i++) {
		//	arr[n - i] = 1;
		//}
	
		//for (i = 0; i < n; i++)
		//	cout << arr[i];
		//cout << endl;
	
		//while (!endLeks(m,arr))
		//{
		//	nextLeks(arr, n);

		//	for (i = 0; i < n; i++)
		//		cout << arr[i];
		//	cout << endl;
		//}
//cout << N <<"\n";
		//3.3
		 
	//int* arr = new int[1000];
	//int n;
	//cin >> n;
	//for (int i = 0; i < n; i++) {
	//	cin >> arr[i];

	//}
	//
	//nextLeksRazbien(arr, n);
	//cout <<  arr[0];
	//for (int i = 1; arr[i]>0; i++) {
	//	cout << ' ' << arr[i];
	//}

	//3.4

	//int* arr = new int[1000];
	//int n;
	//cin >> n;
	//for (int i = 0; i < n; i++) {
	//	arr[i]=1;
	//	
	//}
	//cout << arr[0];
	//for (int i = 1; arr[i] > 0; i++) {
	//	cout << ' ' << arr[i];
	//}
	//cout << "\n";

	//int siz = n;
	//while (arr[0] != n) {
	//	
	//	nextLeksRazbien(arr, &siz);
	//	cout << arr[0];
	//	for (int i = 1; arr[i] > 0; i++) {
	//		cout << ' ' << arr[i];
	//	}
	//	cout << "\n";
	//}


}
