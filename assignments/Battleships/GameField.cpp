//
// Created by Bulten on 2021-06-02.
//

#include "GameField.h"
#include <iostream>
#include "string"
using namespace std;

char IntToAlphabet( int i )
{
    return static_cast<char>('A' - 1 + i);
}

void GameField::DisplayPlayerField(bool playerOne){
    cout << "  0123456789" << endl;
    cout << "  ||||||||||" << endl;

    if(playerOne)
        for (int x = 0; x < 10; x++)
        {
            cout << IntToAlphabet(x + 1) << '|';
            for(int y = 0; y < 10; y++)
            {
                cout << pOneField[x][y];
            }
            cout << endl;
        }
    else{
        for (int x = 0; x < 10; x++)
        {
            cout << IntToAlphabet(x + 1) << '|';
            for(int y = 0; y < 10; y++)
            {
                cout << pTwoField[x][y];
            }
            cout << endl;
        }
    }
    cout << endl;
}

void GameField::PlaceSmallShip(bool playerOne) {
    DisplayPlayerField(playerOne);

    if(playerOne){
        cout << "Player 1's turn" << endl;
    }
    else{
        cout << "Player 2's turn" << endl;
    }

    cout << "Place small ship, Horizontal or Vertical? answer with H or V" << endl;
    char rotation;
    cin >> rotation;
    rotation = toupper(rotation);

    if(rotation != 'V' && rotation != 'H'){
        cout << "You did not enter V/v or H/h , invalid rotation." << endl;
        PlaceSmallShip(playerOne);
    }

    cout << "Enter location A0 - J9" << endl;
    string input;
    cin >> input;

    char xPlayerInput = toupper(input[0]);
    int yPlayerInput = input[1] - '0';

    if(playerOne){
        for(int i = 0; i < 10; i++){
            if(xInput[i] == xPlayerInput){
                if(rotation == 'H'){
                    if(yPlayerInput == 9 || pOneField[i][yPlayerInput] != 0 || pOneField[i][yPlayerInput + 1] != 0){
                        cout << "ERROR ! Invalid placement, try again." << endl;
                        PlaceSmallShip(playerOne);
                    }
                    pOneField[i][yPlayerInput] = 2;
                    pOneField[i][yPlayerInput + 1] = 2;
                }
                if(rotation == 'V'){
                    if(xPlayerInput == 'J' || pOneField[i][yPlayerInput] != 0 || pOneField[i  + 1][yPlayerInput] != 0){
                        cout << "ERROR ! Invalid placement, try again." << endl;
                        PlaceSmallShip(playerOne);
                    }
                    pOneField[i][yPlayerInput] = 2;
                    pOneField[i  + 1][yPlayerInput] = 2;
                }
            }
        }
    }
    else{
        for(int i = 0; i < 10; i++){
            if(xInput[i] == xPlayerInput){
                if(rotation == 'H'){
                    if(yPlayerInput == 9 || pTwoField[i][yPlayerInput] != 0 || pTwoField[i][yPlayerInput + 1] != 0){
                        cout << "ERROR ! Invalid placement, try again." << endl;
                        PlaceSmallShip(playerOne);
                    }
                    pTwoField[i][yPlayerInput] = 2;
                    pTwoField[i][yPlayerInput + 1] = 2;
                }
                if(rotation == 'V'){
                    if(xPlayerInput == 'J' || pTwoField[i][yPlayerInput] != 0 || pTwoField[i  + 1][yPlayerInput] != 0){
                        cout << "ERROR ! Invalid placement, try again." << endl;
                        PlaceSmallShip(playerOne);
                    }
                    pTwoField[i][yPlayerInput] = 2;
                    pTwoField[i  + 1][yPlayerInput] = 2;
                }
            }
        }
    }
}

void GameField::PlaceNormalShip(bool playerOne) {
    DisplayPlayerField(playerOne);

    if(playerOne){
        cout << "Player 1's turn" << endl;
    }
    else{
        cout << "Player 2's turn" << endl;
    }

    cout << "Place normal ship, Horizontal or Vertical? answer with H or V" << endl;
    char rotation;
    cin >> rotation;
    rotation = toupper(rotation);

    if(rotation != 'V' && rotation != 'H'){
        cout << "You did not enter V/v or H/h , invalid rotation." << endl;
        PlaceSmallShip(playerOne);
    }

    cout << "Enter location A0 - J9" << endl;
    string input;
    cin >> input;

    char xPlayerInput = toupper(input[0]);
    int yPlayerInput = input[1] - '0';

    if(playerOne){
        for(int i = 0; i < 10; i++){
            if(xInput[i] == xPlayerInput){
                if(rotation == 'H'){
                    if(yPlayerInput == 8 || pOneField[i][yPlayerInput] != 0 || pOneField[i][yPlayerInput + 1] != 0 || pOneField[i][yPlayerInput + 2] != 0){
                        cout << "ERROR ! Invalid placement, try again." << endl;
                        PlaceSmallShip(playerOne);
                    }
                    pOneField[i][yPlayerInput] = 3;
                    pOneField[i][yPlayerInput + 1] = 3;
                    pOneField[i][yPlayerInput + 2] = 3;
                }
                if(rotation == 'V'){
                    if(xPlayerInput == 'J' || xPlayerInput == 'I' || pOneField[i][yPlayerInput] != 0 || pOneField[i  + 1][yPlayerInput] != 0 || pOneField[i  + 2][yPlayerInput] != 0){
                        cout << "ERROR ! Invalid placement, try again." << endl;
                        PlaceSmallShip(playerOne);
                    }
                    pOneField[i][yPlayerInput] = 3;
                    pOneField[i  + 1][yPlayerInput] = 3;
                    pOneField[i  + 2][yPlayerInput] = 3;
                }
            }
        }
    }
    else{
        for(int i = 0; i < 10; i++){
            if(xInput[i] == xPlayerInput){
                if(rotation == 'H'){
                    if(yPlayerInput == 9 || pTwoField[i][yPlayerInput] != 0 || pTwoField[i][yPlayerInput + 1] != 0){
                        cout << "ERROR ! Invalid placement, try again." << endl;
                        PlaceSmallShip(playerOne);
                    }
                    pTwoField[i][yPlayerInput] = 3;
                    pTwoField[i][yPlayerInput + 1] = 3;
                    pTwoField[i][yPlayerInput + 2] = 3;
                }
                if(rotation == 'V'){
                    if(xPlayerInput == 'J' || pTwoField[i][yPlayerInput] != 0 || pTwoField[i  + 1][yPlayerInput] != 0){
                        cout << "ERROR ! Invalid placement, try again." << endl;
                        PlaceSmallShip(playerOne);
                    }
                    pTwoField[i][yPlayerInput] = 3;
                    pTwoField[i  + 1][yPlayerInput] = 3;
                    pTwoField[i  + 2][yPlayerInput] = 3;
                }
            }
        }
    }
}

void GameField::PlaceMediumShip(bool playerOne) {

}

void GameField::PlaceBigShip(bool playerOne) {

}
