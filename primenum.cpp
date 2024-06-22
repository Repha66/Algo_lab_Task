#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    bool Flag = true;


    for (int i=2;i<=sqrt(n); ++i) {
        if (n%i== 0) {

            Flag = false;
            break;

        }
    }


    return Flag;
}

int main() {
    int num;
    cout<<"Enter the Number= ";
    cin >> num;

    if (isPrime(num)) {

    cout << num << " is a prime number" <<endl;


           }


    else {

    cout << num << " is not a prime number" <<endl;

    }

    return 0;
}
