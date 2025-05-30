#include<stdio.h>
#include<iostream>
using namespace std;
#define N 20

void combine(int *a, int *b, int lena, int lenb, int *c);

int main() {
    int a[N] = {0}, b[N] = {0}, c[N+N] = {0};
    int i, anum, bnum;

    scanf("%d", &anum);
    for(i = 0; i < anum; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &bnum);
    for(i = 0; i < bnum; i++) {
        scanf("%d", &b[i]);
    }

    combine(a, b, anum, bnum, c);

    for (int i = 0; i < anum + bnum; i++) {
        cout << c[i] << " ";
    }

    return 0;
}

void combine(int a[], int b[], int lena, int lenb, int c[]) {
    int i = 0, j = 0, k = 0;

    while (i < lena && j < lenb) {
        if (a[i] <= b[j]) {
             
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
             
        }
    }

    while (i < lena) {
        c[k++] = a[i++];
        
    }

    while (j < lenb) {
        c[k++] = b[j++];
        
    }
}

