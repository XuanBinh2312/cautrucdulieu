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

void SelectionSort (int a[], int n){
    int min; //min dùng để lưu vị trí của phần tử nhỏ nhất
    for(int i = 0; i<n-1; i++) {
        min = i;
        for (int j=i+1;j<n;j++){
            if (a[j]<a[min]) min = j;
        }
        if(min!=i){
            int t = a[i]; //Đổi chỗ a[i] và a[min] cho nhau
            a[i]= a[min];
            a[min]= t;
        }
    }
}