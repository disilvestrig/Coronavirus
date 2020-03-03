#include <iostream>

using namespace std;

int main()
{
    for (int i = 0;i == 0; i+= 0){
        int n,dispari = 1,somma= 0;
        cout << "\nInserisci numero su cui eseguire la verifica (se inserisci 0 termina il programma) ";
        cin >> n;
        if (n == 0){
            break;
        }
        else if (n != 0){
            cout << n <<" * "<<n << " = " << n*n << "\n";
            for (int s = 0;s < n;s++){
                if (s < n-1){
                cout << dispari << " + ";}
                else{
                    cout << dispari << " = ";
                }
                somma += dispari;
                dispari += 2;
            }
            cout << somma;
        }
    }
}

