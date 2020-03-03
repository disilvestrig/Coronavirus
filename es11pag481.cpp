#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    for(int i = 0;i<=100;i++){
        if (i %10 == 7 || i/10 == 7){
            count ++;
        
        }
    
}
cout << "La cifra 7 compare nei numeri da 0 a 100 " << count << " volte";
}

