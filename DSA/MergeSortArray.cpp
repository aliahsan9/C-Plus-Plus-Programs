#include<iostream>
using namespace std;

int arr[5] = {9, 7, 5, 3, 1};
int n = 5;
                                    
void merge(int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    int arr1[n1], arr2[n2];

    for(int i = 0; i < n1; i++) {
        arr1[i] = arr[p + i];
    }
    for(int j = 0; j < n2; j++) {
        arr2[j] = arr[q + 1 + j];
    }
                       
    int i = 0, j = 0, k = p;
    while(i < n1 && j < n2) {                                            
        if(arr1[i] <= arr2[j]) {
            arr[k] = arr1[i];
            i++;
        } else {
            arr[k] = arr2[j]; 
            j++;
        }
        k++;
    }

    while(i < n1) {
        arr[k] = arr1[i];
        i++;
        k++;
    }

    while(j < n2) {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void mergesort(int l, int r) {
    if(l < r) {
        int m = l + (r - l) / 2;
        mergesort(l, m);
        mergesort(m + 1, r);
        merge(l, m, r);
    }
}

void print() {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    cout << "Elements before sorting :" << endl;
    print();
    mergesort(0, n - 1);
    cout << "Elements after sorting :" << endl;
    print();
    return 0;
}
