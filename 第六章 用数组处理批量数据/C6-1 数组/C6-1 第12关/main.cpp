#include<iostream>
using namespace std;
#define M 10
#define N 10

void inputarr(int x[][N], int m, int n);
void printarr(int x[][N], int m, int n);
int maxvalue(int array[][N], int m, int n, int *r, int *c);

/********** Begin **********/
void inputarr(int x[][N], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> x[i][j];
        }
    }
}

void printarr(int x[][N], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
}

int maxvalue(int array[][N], int m, int n, int *r, int *c) {
    int max = array[0][0];
    *r = 0;
    *c = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (array[i][j] > max) {
                max = array[i][j];
                *r = i;
                *c = j;
            }
        }
    }
    return max;
}

int main() {
    int array[M][N];
    int m = 0, n = 0;
    int row = 0, col = 0;
    cin >> m >> n;
    inputarr(array, m, n);
    int max = maxvalue(array, m, n, &row, &col);
    cout << "max=" << max << " " << "row=" << row+1 << " " << "col=" << col+1 << endl;
    printarr(array, m, n);  // Fixed: Pass n instead of m for columns
    return 0;  // Good practice to include return 0;
}
/********** End **********/
