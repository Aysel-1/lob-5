#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n;

    
    cout << "Matrisin olcusunu daxil edin (n x n): ";
    cin >> n;

    int matris[n][n];    
    srand(time(NULL));
    cout << "Matrisin elementleri:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matris[i][j] = rand() % 100;  
            cout << matris[i][j] << " ";
        }
        cout << endl;
    }

    int yeni_matris[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        
            if (i == j) {
                yeni_matris[i][j] = matris[n - i - 1][n - i - 1]; 
            } else if (i + j == n - 1) {
                yeni_matris[i][j] = matris[i][i]; 
            } else {
                yeni_matris[i][j] = matris[i][j]; 
            }
        }
    }

    cout << "\nYeni matris:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << yeni_matris[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

