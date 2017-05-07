/*
ID: chaser.1
PROG: test
LANG: C++
*/

#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    int first, second;
    ifstream fin("test.in");
    if (fin.fail())
    {
        cout << "Unable to open the file." << endl;
        return 0;
    }
    ofstream fout("test.out");

    fin >> first >> second;
    fout << first+second << endl;
    return 0;
}
