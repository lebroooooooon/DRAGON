#include <iostream>
#include <string>
#include <limits>
#include <ios>
#include <cstdlib>

class Info {
    public:
    std::string name; //the name of the robot
    std::string type; // type/category of the robot
    std::string description; // brief description of the robot's capabilities
    double price; // price of the robot
    int stock; // number of robots available in stock
    double cart; // users cart total
};

void clearScreen() {
    #ifdef _WIN32
        system("cls");     
    #else
        system("clear");    
    #endif
}

void pauseConsole() {
    #ifdef _WIN32
        system("pause");
    #else
        std::cout << "\nPress Enter to continue...";
        std::cin.ignore(10000, '\n');
        std::cin.get();
    #endif
}

void displayRobotInfo(const Info& robot) {
    std::cout << "Robot Name: " << robot.name << std::endl;
    std::cout << "Type: " << robot.type << std::endl;
    std::cout << "Description: " << robot.description << std::endl;
    std::cout << "Price: $" << robot.price << std::endl;
    std::cout << "Stock Available: " << robot.stock << std::endl;
}

void displayCatalogue(const Info robots[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "------------------------" << std::endl;
        std::cout << (i+1) << ". " << robots[i].name << std::endl;
    }
    std::cout << "------------------------" << std::endl;
}

int main() {
   
    std::cout.precision(2);
    std::cout << std::fixed;
   
    Info robot1;
    robot1.name = "THE BUTLA";
    robot1.type = "Service robot";
    robot1.description = "Helps out with everyday chores like cleaning, cooking, and running errands;making life a bit easier at home.";
    robot1.price = 2999.99;
    robot1.stock = 15;

    Info robot2;
    robot2.name = "THE TECHNICIAN"; 
    robot2.type = "Industrial robot";
    robot2.description = "Takes care of tricky manufacturing jobs, handling everything from assembly to quality checks with high precision.";
    robot2.price = 14999.99;
    robot2.stock = 7;

    Info robot3;
    robot3.name = "SAGE";
    robot3.type = "Medical robot";
    robot3.description = "Assists doctors and nurses during surgeries and patient care, making sure everything goes smoothly and efficiently.";
    robot3.price = 24999.99;
    robot3.stock = 3;

    Info robot4;
    robot4.name = "PEP GUARDIOLA";
    robot4.type = "Educational robot";
    robot4.description = "Turns learning into an interactive experience, helping students understand new topics with fun, hands-on activities.";
    robot4.price = 1999.99;
    robot4.stock = 20;

    Info robot5;
    robot5.name = "PAOLO MALDINI";
    robot5.type = "Security robot";
    robot5.description = "Keeps an eye on your home or business, monitoring for any suspicious activity and making sure everything stays safe.";
    robot5.price = 3999.99;
    robot5.stock = 10;

    Info robot6;
    robot6.name = "VINCENT KOMPANY";
    robot6.type = "Agricultural robot";
    robot6.description = "Helps farmers by taking over tasks like planting, watering, and harvesting crops, making farming more efficient and less time-consuming.";
    robot6.price = 8999.99;
    robot6.stock = 5;

    Info robot7;
    robot7.name = "JARVIS";
    robot7.type = "INTELLIGENCE";
    robot7.description = "The most advanced AI companion that humanity has ever created.\nCapable of learning, adapting, and assisting in a wide range of tasks from personal assistance to complex problem-solving.";
    robot7.price = 999999.99;
    robot7.stock = 5;

    Info catalogue[7] = {robot1, robot2, robot3, robot4, robot5, robot6, robot7};

    std::cout << R"( /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\ )" << std::endl;
    std::cout << "( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )"<< std::endl;
    std::cout << " > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ < "<< std::endl;
    std::cout << R"( /\_/\                                                                 /\_/\ )" << std::endl;
    std::cout << "( o.o )  .______        ______   .______     ______   .___________.   ( o.o )"<< std::endl;
    std::cout << " > ^ <   |   _  \\      /  __  \\  |   _  \\   /  __  \\  |           |    > ^ < "<< std::endl;
    std::cout << R"( /\_/\   |  |_)  |    |  |  |  | |  |_)  | |  |  |  | `---|  |----`    /\_/\ )" << std::endl;
    std::cout << R"(( o.o )  |      /     |  |  |  | |   _  <  |  |  |  |     |  |        ( o.o ))"<< std::endl;
    std::cout << R"( > ^ <   |  |\  \----.|  `--'  | |  |_)  | |  `--'  |     |  |         > ^ < )" << std::endl;
    std::cout << R"( /\_/\   | _| `._____| \______/  |______/   \______/      |__|         /\_/\ )" << std::endl;
    std::cout << "( o.o )                                                               ( o.o )"<< std::endl;
    std::cout << " > ^ <        _______.___________.  ______   .______       _______     > ^ < "<< std::endl;
    std::cout << R"( /\_/\       /       |           | /  __  \  |   _  \     |   ____|    /\_/\ )" << std::endl;
    std::cout << "( o.o )     |   (----`---|  |----`|  |  |  | |  |_)  |    |  |__      ( o.o )"<< std::endl;
    std::cout << R"( > ^ <       \   \       |  |     |  |  |  | |      /     |   __|      > ^ < )" << std::endl;
    std::cout << R"( /\_/\   .----)   |      |  |     |  `--'  | |  |\  \----.|  |____     /\_/\ )" << std::endl;
    std::cout << "( o.o )  |_______/       |__|      \\______/  | _| `._____||_______|   ( o.o )"<< std::endl;
    std::cout << " > ^ <                                                                 > ^ < "<< std::endl;
    std::cout << R"( /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\ )" << std::endl;
    std::cout << "( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )"<< std::endl;
    std::cout << " > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ < "<< std::endl;
        
    std::cout << "\nWelcome to MY robot STORE!\nHere we have some of the best robots around!\nIf you would like to browse our assortment, please press ENTER to continue...\n";                   
    std::cin.putback('\n');
    std::cin.get();
    std::cin.ignore(10000, '\n');
    clearScreen();
    bool Shopping = true;
    do { 
        displayCatalogue(catalogue, 7);
        int choice;
        std::cout << "Please enter the number of the robot you would like to learn more about." << std::endl;

        while (!(std::cin >> choice) || choice < 1 || choice > 7) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid choice. Please enter a number between 1 and 7." << std::endl;
        }

        if (choice >= 1 && choice <= 7) {
            clearScreen();
            displayRobotInfo(catalogue[choice - 1]);
            std::cout << "\nBUY (1)\nRETURN (2)\nEXIT (3)\n";
            
            int action;
            while (!(std::cin >> action) || action < 1 || action > 3) {
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                std::cout << "Invalid choice. Please enter 1, 2, or 3." << std::endl;
            }
            if (action == 1) {
                
                std::cout << "\nHow many would you like to buy?\n";
                int quantity; 
                
                while (!(std::cin >> quantity) || quantity < 1 || quantity > catalogue[choice - 1].stock) {
                    std::cin.clear();
                    std::cin.ignore(10000, '\n');
                    std::cout << "Please enter a valid quantity!\n";
                
                } if (quantity >= 1 && quantity <= catalogue[choice - 1].stock) {
                    double total = quantity * catalogue[choice - 1].price;
                    catalogue[choice - 1].stock -= quantity;
                    std::cout << "Total price: $" << total << std::endl;
            
                    std::cout << "\nWould you like to continue shopping?\nYES (1)\nNO (0)\n";
                    
                    int cont;
                    
                    while (!(std::cin >> cont) || (cont != 1 && cont != 0)) {
                        std::cin.clear();
                        std::cin.ignore(10000, '\n');
                        std::cout << "Please enter '1' to continue shopping or '0' to exit.\n";
                    
                    } if (cont == 1) {
                        clearScreen();
                    
                    } else if (cont == 0) {
                        Shopping = false;
                        clearScreen();
                        std::cout << "Thank you for visiting our store! Goodbye!\n";
                    }

                 } 
        
            }
            
            else if (action == 2) {
                clearScreen();
            }
            
            else if (action == 3) {
                Shopping = false;
                clearScreen();
                std::cout << "Thank you for visiting our store! Goodbye!\n";
                }
            } 
        } 
    
    while (Shopping);   
        
    pauseConsole();
    return 0;
}




    
    


   




