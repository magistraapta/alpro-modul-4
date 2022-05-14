#include <iostream>

using namespace std;
int n;
int matriksA[10][10];
int matriksB[10][10];

int search_min(int choose){
	int min;
	if (choose == 1){
		min = matriksA[0][0];
		for(int i = 0; i<n; i++) {
			for(int j = 0; j<n; j++) {
				if(matriksA[i][j] < min) {
					min = matriksA[i][j];
				}
			}	
		}
	} else if (choose == 2){
		min = matriksB[0][0];
		for(int i = 0; i<n; i++) {
			for(int j = 0; j<n; j++) {
				if(matriksB[i][j] < min) {
					min = matriksB[i][j];
				}
			}	
		}
	} else {
		return 0;
	}
	return min;
}

int search_max(int choose){
	int max;
	if (choose == 1){
		max = matriksA[0][0];
		for(int i = 0; i<n; i++) {
			for(int j = 0; j<n; j++) {
				if(matriksA[i][j] > max) {
					max = matriksA[i][j];
				}
			}	
		}
	} else if (choose == 2){
		max = matriksB[0][0];
		for(int i = 0; i<n; i++) {
			for(int j = 0; j<n; j++) {
				if(matriksB[i][j] > max) {
					max = matriksB[i][j];
				}
			}	
		}
	} else {
		return 0;
	}
	return max;
}

void min_max_pos(int min1, int min2, int max1, int max2){
	if (max1 > max2) {
		cout << "\nAngka terbesar dari Matriks 1 dan Matriks 2 adalah '" << max1 << "' yang berada pada Matriks 1" << endl;
	} else if (max1 < max2) {
		cout << "\nAngka terbesar dari Matriks 1 dan Matriks 2 adalah '" << max2 << "' yang berada pada Matriks 2" << endl;
	} else {
		cout << "\nAngka terbesar dari Matriks 1 dan Matriks 2 adalah '" << max1 << "' yang berada pada Matriks 1 dan 2" << endl;
	}
	
	if (min1 < min2) {
		cout << "\nAngka tekecil dari Matriks 1 dan Matriks 2 adalah '" << min1 << "' yang berada pada Matriks 1" << endl;
	} else if (min1 > min2) {
		cout << "\nAngka terkecil dari Matriks 1 dan Matriks 2 adalah '" << min2 << "' yang berada pada Matriks 2" << endl;
	} else {
		cout << "\nAngka terkecil dari Matriks 1 dan Matriks 2 adalah '" << min1 << "' yang berada pada Matriks 1 dan 2" << endl;
	}
}

int main() {
	int min1, max1, min2, max2;
	cout << "Input ordo matriks persegi = "; cin >> n;
	cout << "Input nilai matriks pada matriks 1" << endl;
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cout << "Matriks [" << i << "][" << j << "] = ";
			cin >> matriksA[i][j];
		}
	}

	cout << endl;
	cout << "Input nilai matriks pada matriks 2" << endl;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cout << "Matriks [" << i << "][" << j << "] = ";
			cin >> matriksB[i][j];
		}
	}
	
	cout << "\nMatriks A : " << endl;
	for(int i = 0; i<n; i++) {
		cout << "[";
		for(int j = 0; j<n; j++) {
			cout << matriksA[i][j];
			if(j != n-1){
				cout << ",";
			}
		}
		cout << "]" << endl;
	}
	cout << "\nMatriks B : " << endl;
	for(int i = 0; i<n; i++) {
		cout << "[";
		for(int j = 0; j<n; j++) {
			cout << matriksB[i][j];
			if(j != n-1){
				cout << ",";
			}
		}
		cout << "]" << endl;
	}
	
	min1 = search_min(1);
	min2 = search_min(2);
	max1 = search_max(1);
	max2 = search_max(2);
	
	min_max_pos(min1, min2, max1, max2);
}
