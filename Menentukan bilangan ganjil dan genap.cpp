//Menentukan Bilangan Ganjil-Genap
#include <iostream>
using namespace std;
int main() {
    
    int angka;
    
    cout << "Masukkan Angka : ";
    cin >> angka;
    
    if ( angka % 2 == 0 ){
        cout << angka << " adalah bilangan genap\n";
    }else {
        cout << angka << " adalah bilangan ganjil";
    }
    return 0;
}