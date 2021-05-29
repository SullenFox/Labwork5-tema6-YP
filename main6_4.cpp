#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    string stroka;
    ifstream file1("/home/student/file1.txt");
    ofstream file2("/home/student/file2.txt", ios::app);
    while(getline(file1, stroka)){
        file2 << stroka << endl;
        }
        file1.close();
        file2.close();
    return 0;
}
