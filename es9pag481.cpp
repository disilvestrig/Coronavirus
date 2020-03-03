int main()
{
    int num,esp;
    long long int pot=1;
    cout << "Inserisci base ";
    cin >> num;
    cout << "\nInserisci esponente ";
    cin >> esp;
    for (int i = 0;i < esp;i++){
        pot = pot*num;
    }
    cout << num <<"^"<<esp<< " = "<<pot;
}
