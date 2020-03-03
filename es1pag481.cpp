#include <iostream>

using namespace std;

int main()
{
    int somma=0,a,n;
    cout << "Inserisci numero addendi ";
    cin >> n;
    for (int i = 0;i<n;i++){
        cout << "\nInserisci addendo ";
        cin >> a;
        somma += a;
    }
cout << "La somma è uguale a "<<somma;
}
