#include <iostream>

void PlayGame(){
    // Print welcome message to the terminal
    std:: cout << "+ There are 3 numbers in the code" << std::endl;
    std:: cout << "+ The code add-up to: " << std::endl;

    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB +  CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    std:: cout << std::endl;
    std:: cout << "+ There are 3 numbers in the code" <<std::endl;
    std:: cout << "\n+ The codes add-up to: " << CodeSum;
    std:: cout << "\n+ The codes multiply to give: " << CodeProduct <<std::endl;

    // Store players guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the pleyers guess is correct
    if(GuessSum == CodeSum && GuessProduct){
        std:: cout << "You Win" << std::endl;
    } else {
        std:: cout << "You Lose" << std::endl;
    }
}

int main(){

    while(true){

    }
    
    return 0;
}