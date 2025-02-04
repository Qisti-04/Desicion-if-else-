//Menghitung harga setelah diskon
#include <iostream>
using namespace std;
int main() {
    
    float totalBelanja, diskon = 0.0, hargaSetelahdiskon;
    
    cout << "Masukkan Total Belanja : ";
    cin >> totalBelanja;
    
    if ( totalBelanja >= 500000) {
        diskon = 0.3;
    } else { 
        if ( totalBelanja >= 200000 ) {
            diskon = 0.2;
    } else {
        if ( totalBelanja >= 100000 ) {
            diskon = 0.1;
        } else {
                diskon = 0.0;
            }
        }
    }

    hargaSetelahdiskon = totalBelanja - (totalBelanja * diskon);
    cout << "Harga setelah Diskon : " << hargaSetelahdiskon;
    return 0;
  }
