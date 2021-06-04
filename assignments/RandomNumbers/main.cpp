#include <iostream>
#include <ctime>
#include <bits/stdc++.h>

int GetRandomNumber(int start, int end){
    return rand() % end + start;
}

int CheckNo(int numbers[1000],int nCheck){
    int count = 0;
    for(int i = 0; i < 1000; i++){
        if(numbers[i] == nCheck){
            count += 1;
        }
    }
    return count;
}
int numbers [1000];
void GenerateNumbers(){
    for(int i = 0; i < 1000; i++){
        int toAdd = GetRandomNumber(1, 20);
        numbers[i] = toAdd;
    }
}

void CheckAllNumbers(int n[1000]){

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
    srand(time(0));
    //Generates 1000 numbers.
    GenerateNumbers();
    //Checks occurrences.
    CheckAllNumbers(numbers);

    return 0;
}

