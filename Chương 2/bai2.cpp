#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print (int A[], int n){
    for (int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int find_phantu (int A[], int n, int x){
    int left = 0, right  = n-1, mid;
    do {
        mid = (left + right)/2;
        if (A[mid] == x){
            cout<<"Tim thay so "<<x<<" dang o vi tri "<<mid<<endl;
            return mid;
        }
        else {
            if (A[mid] < x) left  = mid + 1;
            else right = mid - 1;
        }
    }while (left<=right);
    cout<<x<<" ko tim thay trong mang"<<endl;
    return -1;
}

void xoa (int A[], int *n, int x){
    for (int j = x; j < *n - 1; j++){
        A[j] = A[j+1];
    }
    (*n)--;  
}

int main(){
    int n;
    NHAN:
    cout<<"Nhap so phan tu co trong mang(0, 100): "; cin>>n;
    if (n < 0 || n > 100){
        cout<<"Xin hay nhap lai so phan tu trong khoang (0, 100)";
        goto NHAN;
    }
    int A[n];
    for (int i = 0; i < n; i++){
        cout<<"A["<<i<<"]"<<" = "; cin>>A[i];
    }
    sort(A, A+n);
    print(A, n);
    int x;
    cout<<"Nhap so ban muon tim: "; cin>>x;
    int index = find_phantu (A, n, x);
    xoa (A, &n, index);
    print(A, n);
    cout<<endl;
    return 0;
}