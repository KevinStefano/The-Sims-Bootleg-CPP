#ifndef __SIMS_H__
#define __SIMS_H__

#include <iostream>

#define MAX_STATE 15
#define MIN_STATE 0

typedef struct {
    int Hygiene;
    int Energy;
    int Fun;
} State;

bool isDead(State x);
/* Apakah karakter sudah mati, yaitu semua state bernilai 0 */

bool isFull(State x);
/* Apakah kaarakter sudah penuh maksimal, yaitu semua state sudah 15 */

bool isStateValid(State x);
/* Apakah state karakter saat ini valid */

void changeState(State *currentstate, State statechange);
/* Mengubah current state dengan melakukan operasi dengan statechange jika valid.
Jika tidak, diberi pesan error */

void printState(State x);
/* Mencetak ke layar state saat ini */

State adjustState(State x, State y);
/* Melakukan penjumlahan state */

State Tidur(char c);
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */

State Makan(char c);
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */

State Minum(char c);
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */

State BuangAir(char c);
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */

State PergiKeKafe();
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */

State MainMedsos();
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */

State MainKomputer();
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */

State Mandi();
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */

State CuciTangan();
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */

State DengarRadio();
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */

State Membaca(char c);
/* Menghasilkan sebuah state yang berisi perubahan yang dialami jika melakukan aktivitas ini */

#endif