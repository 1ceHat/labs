#include <fstream>

using namespace std;

int main(){
    ifstream in("Test.txt");
    ofstream out("NewTest.txt");

    string a;
    in >> a;
    int b = stoi(a)*11;
    out << b << " ";
    while (!in.eof()){
        in >> a;
        int b = stoi(a)*11;
        out << b << " ";
    }
}
