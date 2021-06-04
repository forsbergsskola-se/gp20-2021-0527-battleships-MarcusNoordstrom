#include <iostream>
#include <ctime>

//Gets a random number.
int GetRandomNumber(int start, int end){
    return rand() % end + start;
}

//Checks for occurrences in numbers for nCheck.
int CheckNo(const int numbers[1000],int nCheck){
    int count = 0;
    for(int i = 0; i < 1000; i++){
        if(numbers[i] == nCheck){
            count += 1;
        }
    }
    return count;
}

//Our numbers
int numbers [1000];

//Generate all numbers randomly.
void GenerateNumbers(){
    for(int & number : numbers){
        int toAdd = GetRandomNumber(1, 20);
        number = toAdd;
    }
}

//Check all numbers occurrences and their total percentage of 1000
void CheckAllNumbers(){
    std::cout << "Using RAND + random seed. 1000 different numbers" << std::endl;
    std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
    for(int i = 1; i < 21; i++){
        int occ = CheckNo(numbers, i);
        float percent = ((float) occ / 1000) * 100;
        std::cout << "Occurrences of: " << i << " - " << occ << " times" << std::endl;
        std::cout << "Total % of " << i << ": " << percent << '%' << std::endl;
        std::cout << "--------------------------" << std::endl;
    }
    std::cout << "-- END of RAND --" << std::endl;
}

int main() {
    //Sets a random seed.
    srand(time(nullptr));
    //Generates 1000 numbers.
    GenerateNumbers();
    //Checks occurrences.
    CheckAllNumbers();

    return 0;
}

