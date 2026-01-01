#include <iostream>
#include <vector>
using namespace std;

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
    vector <int> B;
    for (int i = 0; i < n; i++){
        if (A[i] % 2 != 0){
            B.push_back(A[i]);
        }
    }
    cout<<"Cac phan tu so le dc luu trong mang B la:"<<endl;
    vector <int>::iterator it;
    for (it = B.begin(); it != B.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    return 0;
}