#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n, greater<int>());

        int alex = 0, bob = 0;
        int lastA = -1, lastB = -1;

        bool turn = true; // true = Alex

        for(int i = 0; i < n; i++) {

            if(turn) {
                if(a[i] != lastA) {
                    alex += a[i];
                    lastA = a[i];
                    turn = false;
                }
            } else {
                if(a[i] != lastB) {
                    bob += a[i];
                    lastB = a[i];
                    turn = true;
                }
            }
        }

        if(alex > bob)
            cout << "Alex\n";
        else
            cout << "Bob\n";
    }
}