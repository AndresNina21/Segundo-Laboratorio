#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    int fil, col, potencia;
 
    cout << "\nFilas de la matriz: "; cin >> fil;
    cout << "Columnas de la matriz: "; cin >> col;
 
    int matriz[fil][col];
 
    cout << "\nIntroducir datos d ela matriz:\n";
    for (int i = 0; i < fil; i++)
    {
        cout << "\nFila " << i + 1 << ":\n";
        for (int j = 0; j < col; j++)
        {
            cout << "Columna " << j + 1 << ": ";
            cin >> matriz[i][j];
        }
    }
 
    cout << "\nEl resultado de la matriz es:\n";
    for (int i = 0; i < fil; i++)
    {
        cout << " | ";
        for (int j = 0; j < col; j++)
        {
            cout << matriz[i][j]<< " ";
        }
        cout << " |\n";
    }
 
    cout << endl;
 
    return 0;
}
