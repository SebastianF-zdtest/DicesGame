#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
    int age;
    srand( time(NULL) );

    cout << "\n***********!!! UWAGA GRA DLA OSOB PELNOLETNICH !!!***********\n";
    cout << "\nCzy jestes uzytkownikiem powyzej 18 roku zycia?\n";
    cout << "Podaj swoj wiek: ";
    cin >> age;

    if (age >= 18) {
        char answer;
        int pln = 100;

        cout << "\n\n****************Witaj w grze: DICES****************\n\n";
        cout << "Opis i instrukcja gry: \n";
        cout << "1) Jeden rzut = dwie kostki. \n";
        cout << "2) Poczotkowa wartosc portfela = 100zl. \n";
        cout << "3) Gra ma 10 rund. \n";
        cout << "4) Za wygrana otzymujesz 20zl. \n";
        cout << "5) Za przegrana placisz 30zl. \n";
        cout << "6) Jesli w pierwszej rundzie suma punktow to: 7 lub 11, WYGRYWASZ!!! \n";
        cout << "7) Jesli w pierwszej rundzie suma punktow to: 2,3 lub 12, PRZEGRYWASZ!!! \n";
        cout << "8) Jesli w pierwszej rundzie suma punktow to: 4,5,6,8,9 lub 10, bedzie to ilosc punktow dzieki ktorym WYGRYWASZ runde. \n";
        cout << "9) Jesli w kolejnych rundach suma punktow to 7, PRZEGRYWASZ runde. \n";
        cout << "Aby rzucisz kostkami wprowadz 't' wcisnij ENTER. \n";
        cout << "\nCzy wszystko jest jasne? Zaczynamy? \n";
        cout << "T/N: ";
        cin >> answer;

        if (answer == 't') {

            char turn;

            cout << "\n\n****************Runda I****************\n\n";
            cout << "Rzut\n";
            cin >> turn;

            if (turn == 't') {

                int dice1 = rand() % 6 + 1;
                int dice2 = rand() % 6 + 1;
                int dices_all = dice1 + dice2;

                if (dices_all == 7 || dices_all == 11) {

                    int plnTotal = pln + 20;

                    cout << "Kosc numer jeden: " << dice1 << endl;
                    cout << "Kosc numer dwa: " << dice2 << endl;
                    cout << "WYGRANA !!!" << endl;
                    cout << "Twoj wynik to: " << dices_all << endl;

                    cout << "Stan portfela: " << plnTotal << endl;

                    cout << "\n\n****************Runda II****************\n\n";
                    cout << "Rzut\n";
                    cin >> turn;

                    if(turn == 't'){
                        int plnTotal2 = 0;
                        int dice1_2 = rand() % 6 + 1;
                        int dice2_2 = rand() % 6 + 1;
                        int dices_all2 = dice1_2 + dice2_2;

                        if(dices_all2 != 7){
                            cout << "Kosc numer jeden: " << dice1_2 << endl;
                            cout << "Kosc numer dwa: " << dice2_2 << endl;
                            cout << "WYGRANA !!!" << endl;
                            cout << "Twoj wynik to: " << dices_all << endl;

                            int plnTotal2 = plnTotal + 20;

                            cout << "Stan portfela: " << plnTotal2 << endl;
                        }

                        else
                            int plnTotal2 = plnTotal - 30;
                            cout << "Kosc numer jeden: "<<dice1_2<<"\nKosc numer dwa: "<<dice2_2<<"\nPRZEGRANA !!!\nTwoj wynik to: "<<dices_all2<<"\nStan portfela: " << plnTotal2 << endl;
                    }
                }

                else if (dices_all == 2 || dices_all == 3 || dices_all == 12){
                    cout << "Kosc numer jeden: " << dice1 << endl;
                    cout << "Kosc numer dwa: " << dice2 << endl;
                    cout << "PRZEGRANA !!!" << endl;
                    cout << "Twoj wynik to: " << dices_all << endl;

                    int plnTotal = pln - 30;

                    cout << "Stan portfela: " << plnTotal << endl;
                }

                else if(dices_all == 4 || dices_all ==5 || dices_all == 6 || dices_all == 8 || dices_all == 9 || dices_all == 10){
                    cout << "Kosc numer jeden: " << dice1 << endl;
                    cout << "Kosc numer dwa: " << dice2 << endl;
                    cout << "Twoj wynik to: " << dices_all << endl;

                    cout << "\n\n****************Runda II****************\n\n";
                    cout << "Rzut\n";
                    cin >> turn;

                    if(turn == 't'){
                        int plnTotal2 = 0;

                        int dice1_2 = rand() % 6 + 1;
                        int dice2_2 = rand() % 6 + 1;
                        int dices_all2 = dice1_2 + dice2_2;

                        if(dices_all2 != 7){
                            cout << "Kosc numer jeden: " << dice1_2 << endl;
                            cout << "Kosc numer dwa: " << dice2_2 << endl;
                            cout << "WYGRANA !!!" << endl;
                            cout << "Twoj wynik to: " << dices_all << endl;

                            plnTotal2 = pln + 20;

                            cout << "Stan portfela: " << plnTotal2 << endl;

                            cout << "\n\n****************Runda III****************\n\n";
                            cout << "Rzut\n";
                            cin >> turn;

                            if (turn == 't') {
                                int plnTotal3 = 0;

                                int dice1_3 = rand() % 6 + 1;
                                int dice2_3 = rand() % 6 + 1;
                                int dices_all3 = dice1_3 + dice2_3;

                                if (dices_all3 != 7) {
                                    cout << "Kosc numer jeden: " << dice1_3 << endl;
                                    cout << "Kosc numer dwa: " << dice2_3 << endl;
                                    cout << "WYGRANA !!!" << endl;
                                    cout << "Twoj wynik to: " << dices_all3 << endl;

                                    plnTotal3 = plnTotal2 + 20;

                                    cout << "Stan portfela: " << plnTotal3 << endl;
                                }

                                else if (dices_all3 == dices_all) {
                                    cout << "Kosc numer jeden: " << dice1_3 << endl;
                                    cout << "Kosc numer dwa: " << dice2_3 << endl;
                                    cout << "WYGRANA !!!" << endl;
                                    cout << "Twoj wynik to: " << dices_all3 << endl;

                                    plnTotal3 = plnTotal2 + 20;

                                    cout << "Stan portfela: " << plnTotal3 << endl;
                                }

                                else if (dices_all3 != dices_all){
                                    plnTotal3 = plnTotal2 - 30;
                                    cout << "Kosc numer jeden: " << dice1_3 << "\nKosc numer dwa: " << dice2_3 << "\nPRZEGRANA !!!\nTwoj wynik to: " << dices_all3 << "\nStan portfela: " << plnTotal3 << endl;
                                }
                            }
                        }

                        else if(dices_all2 == dices_all){
                            cout << "Kosc numer jeden: " << dice1_2 << endl;
                            cout << "Kosc numer dwa: " << dice2_2 << endl;
                            cout << "WYGRANA !!!" << endl;
                            cout << "Twoj wynik to: " << dices_all << endl;

                            plnTotal2 = pln + 20;

                            cout << "Stan portfela: " << plnTotal2 << endl;

                            cout << "\n\n****************Runda III****************\n\n";
                            cout << "Rzut\n";
                            cin >> turn;

                            if (turn == 't') {
                                int plnTotal3 = 0;

                                int dice1_3 = rand() % 6 + 1;
                                int dice2_3 = rand() % 6 + 1;
                                int dices_all3 = dice1_3 + dice2_3;

                                if (dices_all3 != 7) {
                                    cout << "Kosc numer jeden: " << dice1_3 << endl;
                                    cout << "Kosc numer dwa: " << dice2_3 << endl;
                                    cout << "WYGRANA !!!" << endl;
                                    cout << "Twoj wynik to: " << dices_all3 << endl;

                                    plnTotal3 = plnTotal2 + 20;

                                    cout << "Stan portfela: " << plnTotal3 << endl;
                                }

                                else if (dices_all3 == dices_all) {
                                    cout << "Kosc numer jeden: " << dice1_3 << endl;
                                    cout << "Kosc numer dwa: " << dice2_3 << endl;
                                    cout << "WYGRANA !!!" << endl;
                                    cout << "Twoj wynik to: " << dices_all3 << endl;

                                    plnTotal3 = plnTotal2 + 20;

                                    cout << "Stan portfela: " << plnTotal3 << endl;
                                }

                                else if (dices_all3 != dices_all){
                                    plnTotal3 = plnTotal2 - 30;
                                    cout << "Kosc numer jeden: " << dice1_3 << "\nKosc numer dwa: " << dice2_3 << "\nPRZEGRANA !!!\nTwoj wynik to: " << dices_all3 << "\nStan portfela: " << plnTotal3 << endl;
                                }
                            }
                        }

                        else if(dices_all2 != dices_all){
                            plnTotal2 = pln - 30;
                            cout << "Kosc numer jeden: "<<dice1_2<<"\nKosc numer dwa: "<<dice2_2<<"\nPRZEGRANA !!!\nTwoj wynik to: "<<dices_all2<<"\nStan portfela: " << plnTotal2 << endl;

                            cout << "\n\n****************Runda III****************\n\n";
                            cout << "Rzut\n";
                            cin >> turn;

                            if (turn == 't') {
                                int plnTotal3 = 0;

                                int dice1_3 = rand() % 6 + 1;
                                int dice2_3 = rand() % 6 + 1;
                                int dices_all3 = dice1_3 + dice2_3;

                                if (dices_all3 != 7) {
                                    cout << "Kosc numer jeden: " << dice1_3 << endl;
                                    cout << "Kosc numer dwa: " << dice2_3 << endl;
                                    cout << "WYGRANA !!!" << endl;
                                    cout << "Twoj wynik to: " << dices_all3 << endl;

                                    plnTotal3 = plnTotal2 + 20;

                                    cout << "Stan portfela: " << plnTotal3 << endl;
                                }

                                else if (dices_all3 == dices_all) {
                                    cout << "Kosc numer jeden: " << dice1_3 << endl;
                                    cout << "Kosc numer dwa: " << dice2_3 << endl;
                                    cout << "WYGRANA !!!" << endl;
                                    cout << "Twoj wynik to: " << dices_all3 << endl;

                                    plnTotal3 = plnTotal2 + 20;

                                    cout << "Stan portfela: " << plnTotal3 << endl;
                                }

                                else if (dices_all3 != dices_all){
                                    plnTotal3 = plnTotal2 - 30;
                                    cout << "Kosc numer jeden: " << dice1_3 << "\nKosc numer dwa: " << dice2_3 << "\nPRZEGRANA !!!\nTwoj wynik to: " << dices_all3 << "\nStan portfela: " << plnTotal3 << endl;
                                }
                            }
                        }
                    }

                }




            }
            else
                cout << "\n\n****************Dowidzenia !!!****************\nTwoj blad niestety. \n ";
        }
        else
            cout << "\n\n****************Dowidzenia!!!****************\nPrzykro mi, ze nie chcesz sprobowac. \n";
    }
    else
        cout << "\n\n****************ZEGNAMY !!!****************\nNiestety nie mozesz wziac udzialu w grze, wroc kiedy ukonczysz 18 lat.\n";

    return 0;
}
