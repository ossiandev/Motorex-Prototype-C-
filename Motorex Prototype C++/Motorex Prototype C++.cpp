// Motorex Prototype C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

class User
{
private:
    std::string name = "";
    int id = 0;
    float score = 0.0f;


};
class Challenges
{
public: 
    std::string challName = "";
    std::string challTask = "";
    float points = 0;
};

int main()
{
    std::vector<Challenges> task;
    Challenges *c1 = new Challenges;
    c1->challName = "1234";
    c1->challTask = "123456";
    c1->points = 100;
    task.push_back(*c1);


    
    std::cout << "Hello World!\n";
    std::cout << task[0].challName << "\n";
    std::cout << task[0].challTask << "\n";
    std::cout << task[0].points << "\n";
    std::string input = "";
    std::getline(std::cin, input);
    while (true) 
    {
        switch (stoi(input))
        {
        case 1: // find daily challenge

            break;
        case 2: // leaderboard 
            break;
        case 3: // add task
            bool makingTask = true;
                while (makingTask) 
                {
                    std::cout << "Make your own Task \n\n" << "Task Name: ";
                    getline(std::cin, input);
                    c1->challName = input;
                    std::cout << "\n\nTask Challenge: ";
                    getline(std::cin, input);
                    c1->challTask = input;
                    std::cout << "\n\Points worth: 100";
                    c1->points = 100;
                    std::cout << "Please type 'confirm' to confirm your challenge.\n\n";
                    getline(std::cin, input);

                    if (input == "confirm")
                    {
                        task.push_back(*c1);
                        std::cout << "Your task is added!\n\n";
                        makingTask = false;
                    }
                    else
                    {
                        std::cout << "Restarting task making process\n\n\n\n";
                    }
                }
            


            break;
        case 4:
            break;
        case 5: //exit
            std::getline(std::cin, input);
            return 0;
        }

    }




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
