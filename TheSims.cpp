#include <iostream>
#include <string>
#include "sims.h"
using namespace std;

int main() {
    State current;
    string str;

    current.Hygiene=0;
    current.Fun=0;
    current.Energy=10;
    cout << "Kamu baru saja bangun dari tidur yang lelap. Sekarang, keadaan kamu adalah" << endl;
    printState(current);
    while(!isDead(current) && !isFull(current)) {
        cout << "\n";
        cout << "------------------------------------------"<<endl;
        cout << "Kamu mau apa nih sekarang?"<< endl;
        cout << "  Tidur Siang"<< endl;
        cout << "  Tidur Malam"<< endl;
        cout << "  Makan Hamburger"<< endl;
        cout << "  Makan Pizza"<< endl;
        cout << "  Makan Steak and Beans"<< endl;
        cout << "  Minum Air"<< endl;
        cout << "  Minum Kopi"<< endl;
        cout << "  Minum Jus"<< endl;
        cout << "  Buang Air Kecil"<< endl;
        cout << "  Buang Air Besar"<< endl;
        cout << "  Bersosialisasi ke Kafe"<< endl;
        cout << "  Bermain Media Sosia"<< endl;
        cout << "  Bermain Komputer"<< endl;
        cout << "  Mandi"<< endl;
        cout << "  Cuci Tangan"<< endl;
        cout << "  Mendengarkan Musik di Radio"<< endl;
        cout << "  Membaca Koran"<< endl;
        cout << "  Membaca Novel"<< endl;
        cout << "------------------------------------------"<<endl;
        cout << "\n";
        cout << "Tuliskan aksi yang kamu ingin lakukan sekarang" << endl;
        cout << "(Setiap kata diawali huruf kapital, kecuali kata depan ya~~)" << endl;
        cout << "\n";
        getline(cin,str);
        if(str == "Tidur Siang") {
            changeState(&current,Tidur('s'));
        } else if(str == "Tidur Malam") {
            changeState(&current,Tidur('m'));
        } else if(str == "Makan Hamburger") {
            changeState(&current,Makan('h'));
        } else if(str == "Makan Pizza") {
            changeState(&current,Makan('p'));
        } else if(str == "Makan Steak and Beans") {
            changeState(&current,Makan('s'));
        } else if(str == "Minum Air") {
            changeState(&current,Minum('a'));
        } else if(str == "Minum Kopi") {
            changeState(&current,Minum('k'));
        } else if(str == "Minum Jus") {
            changeState(&current,Minum('j'));
        } else if(str == "Buang Air Kecil") {
            changeState(&current,BuangAir('k'));
        } else if(str == "Buang Air Besar") {
            changeState(&current,BuangAir('b'));
        } else if(str == "Bersosialisasi ke Kafe") {
            changeState(&current,PergiKeKafe());
        } else if(str == "Bermain Media Sosial") {
            changeState(&current,MainMedsos());
        } else if(str == "Bermain Komputer") {
            changeState(&current,MainKomputer());
        } else if(str == "Mandi") {
            changeState(&current,Mandi());
        } else if(str == "Cuci Tangan") {
            changeState(&current,CuciTangan());
        } else if(str == "Mendengarkan Musik di Radio") {
            changeState(&current,DengarRadio());
        } else if(str == "Membaca Koran") {
            changeState(&current,Membaca('k'));
        } else if(str == "Membaca Novel") {
            changeState(&current,Membaca('n'));
        } else {
            cout << "\n";
            cout << "Input salah!" << endl;
        }
        cout << "\n";
        printState(current);
    }
    if(isDead(current)) {
        cout << "Kamu mati karena semua atributmu menyentuh angka 0" << endl;
    } else {
        cout << "Selamat! Kamu sudah terpuaskan dan semua atributmu sudah menyentuh angka 15" << endl;
    }
    cout << "\n";
    cout << "GAME OVER!" << endl;
    return 0;
}