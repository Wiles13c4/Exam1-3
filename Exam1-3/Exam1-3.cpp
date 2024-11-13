#include <iostream>
using namespace std;

unsigned long long factorial1(int n) {
    return (n <= 1) ? 1 : n * factorial1(n - 1);
}

unsigned long long factorial2(int n) {
    unsigned long long result = 1;
    while (n > 0) result *= n--;
    return result;
}

int main() {
    int n;
    cout << "請輸入一個非負整數: ";
    cin >> n;

    if (n < 0) {
        cout << "錯誤：請輸入非負整數" << endl;
        return 1;
    }

    cout << "遞迴計算結果: " << factorial1(n) << endl;
    cout << "迴圈計算結果: " << factorial2(n) << endl;

    return 0;
}