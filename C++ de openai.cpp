#include <iostream>
#include <string>

int main() {
    std::string playerName;
    int playerHealth = 100;
    int playerDamage = 10;

    std::cout << "Enter your name: ";
    std::cin >> playerName;

    std::cout << "Welcome, " << playerName << "! You have " << playerHealth << " health and deal " << playerDamage << " damage." << std::endl;

    int enemyHealth = 50;
    int enemyDamage = 5;

    std::cout << "You've encountered an enemy with " << enemyHealth << " health and " << enemyDamage << " damage." << std::endl;

    while (playerHealth > 0 && enemyHealth > 0) {
        std::cout << "What would you like to do? (attack / flee)" << std::endl;

        std::string playerInput;
        std::cin >> playerInput;

        if (playerInput == "attack") {
            std::cout << "You attacked the enemy for " << playerDamage << " damage." << std::endl;
            enemyHealth -= playerDamage;
        } else if (playerInput == "flee") {
            std::cout << "You ran away." << std::endl;
            break;
        } else {
            std::cout << "Invalid input. Please enter 'attack' or 'flee'." << std::endl;
            continue;
        }

        if (enemyHealth <= 0) {
            std::cout << "You defeated the enemy!" << std::endl;
            break;
        }

        std::cout << "The enemy attacked you for " << enemyDamage << " damage." << std::endl;
        playerHealth -= enemyDamage;

        if (playerHealth <= 0) {
            std::cout << "You have been defeated." << std::endl;
            break;
        }
    }

    return 0;
}