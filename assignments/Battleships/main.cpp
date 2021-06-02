#include <iostream>
#include "Game.h"

int main() {
    bool playerOne = false;
    Game game{};

    //Player 1 initialize
    game.PlaceSmallShip(true);
    game.PlaceSmallShip(true);
    game.PlaceNormalShip(true);
    game.PlaceMediumShip(true);
    game.PlaceBigShip(true);

    //Player 2 initialize
    game.PlaceSmallShip(false);
    game.PlaceSmallShip(false);
    game.PlaceNormalShip(false);
    game.PlaceMediumShip(false);
    game.PlaceBigShip(false);

    //BATTLE TO THE LAST SHIP!!!
    while(true){
        playerOne = !playerOne;
        game.Attack(playerOne);
    }
}
