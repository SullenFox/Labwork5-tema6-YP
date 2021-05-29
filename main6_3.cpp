#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    ifstream file("/home/student/data_v10.txt");
    string stroka;
    int len, kol;
    double chislo, summa;
    summa = 0;
    kol = 0;
    while (getline(file, stroka)) {
        len = stroka.length();
        string s;
        int sdvig;
        sdvig = 0;
        for (int i = 0; i <= len; i++) {
            if ((stroka[i] == ' ') or (stroka[i] == '\t') or (stroka[i] == '\0')) {
                s = stroka.substr(sdvig,i);
                chislo = stod(s);
                summa += chislo;
                sdvig = i+1;
                kol += 1;
            }
        }
    }
    file.close();
    cout << "Среднее арифметическое: " << summa/kol << endl;
    return 0;
}
