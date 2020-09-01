#include<iostream>
#include<math.h>
using namespace std;

bool check(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int dem(int n) {
    int count = 0;
    int r = 0;
    for (int i = 0; i < n; i++) {
        if (check(r) == true)
           {
            cout << r << endl;
            count++;}
            r+=1;
    }
    cout << endl;
    return count;
}

int main() {
    cout << dem(42);
    return 0;
}
