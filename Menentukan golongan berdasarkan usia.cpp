//Menentukan golongan berdasarkan usia
#include <iostream>
using namespace std;
int main() {
    
    int usia;
    
    cout << "Masukkan Usia : ";
    cin >> usia;
    
    if ( usia <= 5 ) {
        cout << "Balita\n";
    } else {
        if ( usia <= 12 ) {
            cout << "Anak-anak\n";
        } else {
            if ( usia <= 17 ) {
                cout << "Remaja\n";
            } else { 
                if ( usia <= 59 ) {
                    cout << "Dewasa\n";
            } else {
                cout << "Lansia\n";
            }
        }
    }
}
    
    return 0;
}