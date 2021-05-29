#include <iostream>
#include <iomanip>
using namespace std;
void tabl(int sis)
{
    if (sis == 10) {
        for (int i = 1; i < 10; i++) {
            for (int j = 1; j < 10; j++) {
                cout << setw(3) << i * j;
                
            }
            cout << endl;
        }
    } else if (sis == 8) {
        for (int i = 1; i < 8; i++) {
            for (int j = 1; j < 8; j++) {
                cout << setw(3) << oct <<  i * j;
               
            }
            cout << endl;
        }
    } else if (sis == 16) {
        for (int i = 1; i < 16; i++) {
            for (int j = 1; j < 16; j++) {
                cout << setw(3) << hex <<  i * j;
                
            }
            cout << endl;
        }
    } else {
        cout << " Не правильно!" << endl;
    }
}
int main(int argc, char **argv)
{
    int sis;
    cin >> sis;
    tabl(sis);
    return 0;
}
