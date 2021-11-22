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
