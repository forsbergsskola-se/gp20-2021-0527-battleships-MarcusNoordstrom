#include <iostream>
#include "GameField.h"

int main() {
    GameField gameField{};

    //Player 1 initialize
    gameField.PlaceSmallShip(true);
    gameField.PlaceSmallShip(true);

    gameField.PlaceNormalShip(true);
    gameField.PlaceMediumShip(true);
    gameField.PlaceBigShip(true);

    //Player 2 initialize
    gameField.PlaceSmallShip(false);
    gameField.PlaceSmallShip(false);

    gameField.PlaceNormalShip(false);
    gameField.PlaceMediumShip(false);
    gameField.PlaceBigShip(false);





    return 0;
}
