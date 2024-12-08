#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);
void displayEndingScreen();

int main(){

    double balance = 0.00;
    int choice = 0;

    do{
                std::cout << "**************************************" << std::endl;
                std::cout << "Enter your choice:" << std::endl;
                std::cout << "**************************************" << std::endl;
                std::cout << "            1. Show Balance         " << std::endl;
                std::cout << "            2. Deposit Money        " << std::endl;
                std::cout << "            3. Withdraw Money       " << std::endl;
                std::cout << "            4. Exit                 " << std::endl;
                std::cout << "--------------------------------------" << std::endl;
                std::cin >> choice;

                std::cin.clear();
                fflush(stdin);

                switch(choice){
                case 1: showBalance(balance);
                        break;
                case 2: balance += deposit();
                        showBalance(balance);   
                        break;
                case 3: balance -= withdraw(balance);
                        showBalance(balance);
                        break;
                case 4: displayEndingScreen();
                        break;
                default: std::cout << "Invalid choice." << std::endl;
                }
        }while(choice != 4);


        return 0;
}

void showBalance(double balance){
                std::cout << "Your current balance is: $" << std::setprecision(2) << std::fixed << balance << std::endl;
}
double deposit(){
                double amount = 0;

                std::cout << "Enter the amount to be deposited: ";
                std::cin >> amount;

                if(amount > 0){
                return amount;
                }
                else{
                std::cout << "Thats not a valid amount." << std::endl;
                }
}
double withdraw(double balance){
                double amount = 0;

                std::cout << "Enter the amount to be withdrawn: ";
                std::cin >> amount;

                if(amount > balance){
                        std::cout << "Insufficient funds." << std::endl;
                        return 0;
                }
                else{
                        if(amount > 0){
                        return amount;
                        }
                        else{
                        std::cout << "Thats not a valid amount." << std::endl;
                }
        }
}

void displayEndingScreen() {
    std::cout << std::endl;
    std::cout << "**************************************" << std::endl;
    std::cout << "            THANK YOU!               " << std::endl;
    std::cout << "       Have a great day ahead!       " << std::endl;
    std::cout << "**************************************" << std::endl;
    std::cout << "         .::::.                       " << std::endl;
    std::cout << "       __...::O:::::                 " << std::endl;
    std::cout << "    ,'''''::::::'  ::                 " << std::endl;
    std::cout << "          `':'':..:::                 " << std::endl;
    std::cout << "           :  ::::::::                " << std::endl;
    std::cout << "          :  ::::::::::               " << std::endl;
    std::cout << "          :  ::::::::::               " << std::endl;
    std::cout << "          :  ::::::::::               " << std::endl;
    std::cout << "          :  ::::::::::               " << std::endl;
    std::cout << "          : :::::::::::                " << std::endl;
    std::cout << "          : :::: ::::::                " << std::endl;
    std::cout << "          : :::: ::::::                " << std::endl;
    std::cout << "          : ::: .::::::                " << std::endl;
    std::cout << "          : ::: :::::::                " << std::endl;
    std::cout << "          :  :: :::::::                " << std::endl;
    std::cout << "           :  : ::::::'                " << std::endl;
    std::cout << "           .:  :::::::                 " << std::endl;
    std::cout << "    l42 ,;;::'.:::::::" << std::endl;
    std::cout << std::endl;
}
