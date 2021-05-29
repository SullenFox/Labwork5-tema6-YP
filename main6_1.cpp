#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char **argv)
{
    int mas[10];
    int chislo;
    int f = 0;
    cout<<"Введите десять целых чисел: ";
    for (int i=0; i<10; i++){
        cin >> chislo;
        if (cin.good()){
            mas[i]=chislo;
            }
        else {
            cout << "Не правильно!" << endl;
            f = 1;
            break;
            }
        }
        if (f==0) {
            cout << "Десятичные  " << setw(10) << "Восьмиричные  " << setw(10) << "Шестнадцатиричные" << endl;
            for (int i=0; i < 10; i++){
                cout << dec << mas[i] << setw(17) << oct << mas[i] << setw(17) << hex << mas[i] << endl;
                }
            
            }
        
    return 0;
}
