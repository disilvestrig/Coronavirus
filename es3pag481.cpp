#include <iostream>

using namespace std;

int main()
{
    int somma = 0;
    for (int i = 10;i<=100;i+=5){
        somma += i;
    }
cout << "La somma di tutti i multipli di 5 compresi tra 10 e 100 è "<<somma;
}
