#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    //Одномерные массивы
    //1
    int arr1[10]{0,1,2,3,4,5,6,7,8,9};
    for (int i = 0; i<10; i++){
        wcout << i+1 << L" = " << arr1[i] << "; ";
    };

    //2
    wcout << L"\nЗаполним массив случайными числами" << endl;
    for (int i = 0; i<10; i++){
        arr1[i] = -10 + rand()%21;
        cout << i+1 << " = " << arr1[i] << "; ";
    }

    //3
    int arr2[5];
    wcout << L"\nВведите массив из 5 чисел" << endl;
    for (int i = 0; i<5; i++){
        cin >> arr2[i];
    }

    //4
    wcout << L"\nПреобразуем массив случайных чисел" << endl;
    for (int i = 0; i<10; i++){
        if ((i+1)%2==0){
            arr1[i] *= 3;
            cout << i+1 << " = " << arr1[i] << "; ";
        }
        else{
            arr1[i] *= 5;
            cout << i+1 << " = " << arr1[i] << "; ";
        }
    }

    //Двумерные массивы
    //1, 2
    wcout << L"\n\nДвумерный массив" << endl;
    int sumStr = 0;
    int marr1[5][5];
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            marr1[i][j] = -10 + rand()%30;
            sumStr += marr1[i][j];
            cout << marr1[i][j] << " ";
        }
        wcout << L"\nСумма " << i << L" строки равна " << sumStr << endl;
        sumStr = 0;
    }

    //3
    wcout << L"Заменим отрицательные числа на 0" << endl;
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            if (marr1[i][j] < 0){
                marr1[i][j] = 0;
            }
            cout << marr1[i][j] << " ";
        }
        cout << "\n";
    }
}
