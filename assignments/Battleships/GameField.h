//
// Created by Bulten on 2021-06-02.
//

#ifndef BATTLESHIPS_GAMEFIELD_H
#define BATTLESHIPS_GAMEFIELD_H

class GameField {
public:
    int pOneField[10][10];
    int pTwoField[10][10];

    char xInput[10]{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    void PlaceSmallShip(bool playerOne);
    void PlaceNormalShip(bool playerOne);
    void PlaceMediumShip(bool playerOne);
    void PlaceBigShip(bool playerOne);
    void DisplayPlayerField(bool playerOne);
};

#endif //BATTLESHIPS_GAMEFIELD_H