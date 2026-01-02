#include <iostream>
using namespace std;

void input(int n, int a[]){
    for (int i = 0; i < n; i++){
        cout<<"A["<<i+1<<"] = "; cin>>a[i];
    }
}

void output(int n, int a[]){
    cout<<"A["<<n<<"] = ";
    for (int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void InterchangeSort (int a[], int n) {
    int i, j;
    for (i = 0; i<n-1; i++){
        for (j = i+1; j<n; j++){
             if (a[j]<a[i]) {
                    int t = a[i];
                    a[i] = a[j];
                    a[j]= t;//Đổi chỗ a[i] và a[j]
             }
        }
    }
}

int main(){
    int n;
    cout<<"Nhap so phan tu cho mang: "; cin>>n;
    int a[100];
    input(n, a);
    output(n, a);
    InterchangeSort(a, n);
    cout<<"Mang sau khi duoc sap xep theo kieu InterchangeSort"<<endl;
    output(n, a);
    return 0;
}