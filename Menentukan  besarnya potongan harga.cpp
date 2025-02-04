//Menentukan  besarnya potongan harga
#include <iostream>
using namespace std;
int main() {
    
    int totalPembelian = 0, diskon = 0;
    
    cout << "Masukkan Total Pembelian Anda : ";
    cin >> totalPembelian;
    
    
    if ( totalPembelian >= 100000){
        diskon = 0.05 * totalPembelian;
    }else{
        diskon = 0;
    }
    
    cout << " Besarnya Diskon yang Anda dapat : " << diskon;
    return 0;
}