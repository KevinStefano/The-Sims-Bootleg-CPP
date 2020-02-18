#include <iostream>
#include "sims.h"
using namespace std;

bool isDead(State x)
/* Apakah karakter sudah mati, yaitu semua state bernilai 0 */
{
    return (x.Hygiene==MIN_STATE && x.Fun==MIN_STATE && x.Energy==MIN_STATE);
}

bool isFull(State x)
/* Apakah kaarakter sudah penuh maksimal, yaitu semua state sudah 15 */
{
    return (x.Hygiene==MAX_STATE && x.Fun==MAX_STATE && x.Energy==MAX_STATE);
}

bool isStateValid(State x)
/* Apakah state karakter saat ini valid */
{
    return (x.Hygiene>=MIN_STATE && x.Hygiene<=MAX_STATE && x.Fun>=MIN_STATE && x.Fun<=MAX_STATE && x.Energy>=MIN_STATE && x.Energy<=MAX_STATE);
}

void changeState(State *currentstate, State statechange)
/* Mengubah current state dengan melakukan operasi dengan statechange jika valid.
Jika tidak, diberi pesan error */
{
    if (isStateValid(adjustState((*currentstate),statechange)))
    {
        (*currentstate)=adjustState((*currentstate),statechange);
    }
    else
    {
        cout << "\n";
        cout << "Aksi tidak valid!" << endl;
    }
}

void printState(State x)
/* Mencetak ke layar state saat ini */
{
   cout << "<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>"<<endl;
    cout << "     Hygiene = " << x.Hygiene  <<endl;
    cout << "     Energy  = " << x.Energy  <<endl;
    cout << "     Fun     = " << x.Fun     <<endl;
    cout << "<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>"<<endl;
}

State adjustState(State x, State y)
/* Melakukan penjumlahan state */
{
    State z;
    z.Energy=x.Energy+y.Energy;
    z.Fun=x.Fun+y.Fun;
    z.Hygiene=x.Hygiene+y.Hygiene;  
    return z;
}

State Tidur(char c)
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */
{
    State x;
    if (c=='s') {
        x.Energy=10;
        x.Fun=0;
        x.Hygiene=0;
        }
    else if (c=='m'){
        x.Energy=15;
        x.Fun=0;
        x.Hygiene=0;
        }
    return x;
}

State Makan(char c)
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */
{
    State x;
    if (c=='h') {
        x.Energy=5;
        x.Fun=0;
        x.Hygiene=0;
        }
    else if (c=='p'){
        x.Energy=10;
        x.Fun=0;
        x.Hygiene=0;
        }
    else if (c=='s'){
        x.Energy=15;
        x.Fun=0;
        x.Hygiene=0;
        }
    return x;
}

State Minum(char c)
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */
{
    State x;
    if (c=='a') {
        x.Energy=0;
        x.Fun=0;
        x.Hygiene=-5;
        }
    else if (c=='k'){
        x.Energy=5;
        x.Fun=0;
        x.Hygiene=-10;
        }
    else if (c=='j'){
        x.Energy=10;
        x.Fun=0;
        x.Hygiene=-5;
    }
    return x;
}

State BuangAir(char c)
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */
{
    State x;
    if (c=='k') {
        x.Energy=0;
        x.Fun=0;
        x.Hygiene=5;
        }
    else if (c=='b'){
        x.Energy=-5;
        x.Fun=0;
        x.Hygiene=10;
        }
    return x;
}

State PergiKeKafe()
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */
{
    State x;
    x.Energy=-10;
    x.Fun=15;
    x.Hygiene=-5;
    return x;
}

State MainMedsos()
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */
{
    State x;
    x.Energy=-10;
    x.Fun=10;
    x.Hygiene=0;
    return x;
}

State MainKomputer()
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */
{
    State x;
    x.Energy=-10;
    x.Fun=15;
    x.Hygiene=0;
    return x;
}

State Mandi()
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */
{
    State x;
    x.Energy=-5;
    x.Fun=0;
    x.Hygiene=15;
    return x;
}

State CuciTangan()
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */
{
    State x;
    x.Energy=-0;
    x.Fun=0;
    x.Hygiene=5;
    return x;
}

State DengarRadio()
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */
{
    State x;
    x.Energy=0;
    x.Fun=10;
    x.Hygiene=-5;
    return x;
}

State Membaca(char c)
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */
{
    State x;
    if (c=='k') {
        x.Energy=-5;
        x.Fun=5;
        x.Hygiene=0;
        }
    else if (c=='n'){
        x.Energy=-5;
        x.Fun=10;
        x.Hygiene=0;
        }     
    return x;  
}