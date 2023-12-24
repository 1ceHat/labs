#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int num, i=0;

    // №1
    cout << "Input number: " << endl;
    cin >> num;
    for (int i=0; i<=num; i++)
    {
        cout<<i<<' ';
    }


    // №2
    wcout << L"\nВведи число: " << endl;
    cin >> num;

    while (i<num)
    {
        if (i%2 == 0) {
            cout<<i<<' ';
        }
        else{
            cout<<"b"<<' ';
        }
        i++;
    }


    // №3
    wcout << L"\nВведи четырёхзначное число: " << endl;
    cin >> num;
    for (int i=1; i<=num; i++)
    {
        if(i%1000==0)
    {
        wcout<<L"Прошла " <<i/1000<< L" тысяча итераций"<< endl;
    }
    }
}
