//Memberikan perintah sesuai warna lampu lalu lintas
#include <iostream>
using namespace std;
int main() {
    
    string lampu;
    
    cout << "Masukkan Warna Lampu : ";
    cin >> lampu;
    
    
    if ( lampu == "merah" ) {
        cout << "Berhenti!\n";
    } else {
        if ( lampu == "kuning" ) {
            cout << "Bersiap!\n";
        } else {
            if ( lampu == "hijau" ) {
                cout << "jalan!\n";
            } else {
                cout << "warna tidak valid";
            }
        }
    }
    
    return 0;
}