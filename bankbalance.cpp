#include <iostream>
using namespace std;

class Bank {
public:
    int balance[101];
    int exists[101];

    Bank() {
        for(int i=0;i<101;i++) {
            balance[i]=0;
            exists[i]=0;
        }
    }
};

int main() {
    Bank b;
    int Q;
    cin >> Q;

    while(Q--) {
        string s;
        cin >> s;

        int x, y;

        if(s=="CREATE") {
            cin >> x >> y;
            if(b.exists[x]==0) {
                b.exists[x]=1;
                b.balance[x]=y;
                cout<<"true\n";
            } else {
                b.balance[x]+=y;
                cout<<"false\n";
            }
        }

        else if(s=="DEBIT") {
            cin >> x >> y;
            if(b.exists[x]==0 || b.balance[x]<y)
                cout<<"false\n";
            else {
                b.balance[x]-=y;
                cout<<"true\n";
            }
        }

        else if(s=="CREDIT") {
            cin >> x >> y;
            if(b.exists[x]==0)
                cout<<"false\n";
            else {
                b.balance[x]+=y;
                cout<<"true\n";
            }
        }

        else if(s=="BALANCE") {
            cin >> x;
            if(b.exists[x]==0)
                cout<<-1<<endl;
            else
                cout<<b.balance[x]<<endl;
        }
    }
}