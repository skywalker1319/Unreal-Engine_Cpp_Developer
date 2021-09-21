 /*
    Developer: Master Skywalker
    Purpose: Project-GameOne
    Stardate: 12021.255.19:45:00
*/

#include <iostream>


// User Defined Functions
void GameIntro()
{
    std::cout << "\n\t\t\t\"ASAI's Research Lab Is Under Attack, Break The Codes To Get Into The Datacentre Facility, Cut The Hard Line & Save The Research Data From Going Into Wrong Hands...\"\n\n\n";

}


void PlayGame()
{
    GameIntro();

    int CodeA = 3;
    int CodeB = 6;
    int CodeC = 9;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << ">_    Here's Some Information About The Codes...\n\n";
    std::cout << "+ The Total Numbers Of Code: 3\n";
    std::cout << "+ The Codes Join Upto: " << CodeSum << std::endl;
    std::cout << "+ The Codes Product Upto: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cout << "\n\tNow, Enter The Codes: ";
    std::cin >> GuessA >> GuessB >> GuessC;
    
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n\t\t\t Welcome To The ASAI'S Datacentre Facility :)\n\n";
    }
    else
    {
        std::cout << "\n\t\t Alert! There's A Breach In The Datacentre Facility :(\n\n";
        std::cout << "\tWell, The Codes Were: " << CodeA << CodeB << CodeC << std::endl;
    }

}


// Main Function
int main(int argc, char const *argv[])
{
    // While Loop
    while (true)
    {
        PlayGame();
        std::cin.clear();   // Clears any error...
        std::cin.ignore();  // Discard the buffer...
        
    }

    return 0;
}


