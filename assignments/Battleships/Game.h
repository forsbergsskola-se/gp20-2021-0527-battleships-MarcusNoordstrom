//
// Created by Bulten on 2021-06-02.
//

#ifndef BATTLESHIPS_GAME_H
#define BATTLESHIPS_GAME_H

class Game {
public:
    void PlaceSmallShip(bool playerOne);
    void PlaceNormalShip(bool playerOne);
    void PlaceMediumShip(bool playerOne);
    void PlaceBigShip(bool playerOne);
    void Attack(bool playerOne);
private:
    void DisplayPlayerField(bool playerOne);
    void Win(int player);
    void CheckIfShipSunk(int player, int shipType);
    int pOneField[10][10];
    int pTwoField[10][10];
    char xInput[10]{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
};



#endif //BATTLESHIPS_GAME_H