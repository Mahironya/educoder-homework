#include <iostream>
using namespace std;
void output_inorder(int n){
    if (n == 0){
        return;
    }
    output_inorder(n/10);
    cout<<n%10<<" ";
}

void output_reverse(int n){
    if (n == 0){
        return;
    }
    cout<<n%10<<" ";
    output_reverse(n/10);
    
}


int main(){
    int n;
    cin>>n;
    cout<<"顺序输出为：";
    output_inorder(n);
    cout<<endl;
    cout<<"逆序输出为：";
    output_reverse(n);
}
