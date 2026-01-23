#include<iostream>
using namespace std;

void names(int n){
    if (n == 0) return;
    cout << "name\n";
    names(n-1);
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    names(n);
    return 0;
}