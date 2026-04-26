#include <iostream>
using namespace std;

class MovieTicket {
public:
    int b[101][101];  
    int seats[101];    

    MovieTicket() {
        for(int i = 0; i < 101; i++) {
            seats[i] = 100;
            for(int j = 0; j < 101; j++) {
                b[i][j] = 0;
            }
        }
    }

    void BOOK(int x, int y) {
        if(b[x][y] == 1 || seats[y] == 0)
            cout << "false\n";
        else {
            b[x][y] = 1;
            seats[y]--;
            cout << "true\n";
        }
    }

    void CANCEL(int x, int y) {
        if(b[x][y] == 0)
            cout << "false\n";
        else {
            b[x][y] = 0;
            seats[y]++;
            cout << "true\n";
        }
    }

    void IS_BOOKED(int x, int y) {
        if(b[x][y] == 1)
            cout << "true\n";
        else
            cout << "false\n";
    }

    void AVAILABLE(int y) {
        cout << seats[y] << endl;
    }
};

int main() {
    int Q;
    cin >> Q;

    MovieTicket m;

    while(Q--) {
        string s;
        cin >> s;

        if(s == "BOOK") {
            int x, y;
            cin >> x >> y;
            m.BOOK(x, y);
        }
        else if(s == "CANCEL") {
            int x, y;
            cin >> x >> y;
            m.CANCEL(x, y);
        }
        else if(s == "IS_BOOKED") {
            int x, y;
            cin >> x >> y;
            m.IS_BOOKED(x, y);
        }
        else if(s == "AVAILABLE_TICKETS") {
            int y;
            cin >> y;
            m.AVAILABLE(y);
        }
    }
}