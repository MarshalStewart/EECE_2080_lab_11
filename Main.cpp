#include <iostream>
#include <string>
#include <cstdlib>
#include "Dictionary.cpp"

using namespace std;

int main()
{
    bool run = true;
    int input = 0;
    char use_matrix;
    std::string row = "";
    Dictionary dict(100);
    std::shared_ptr<Node> node = nullptr;
    std::string payload = "";

    int n_1, n_2, n, hash_val;
    while(run)
    {
        std::cout <<
        "Press 1 to hash an integer" << std::endl << // says this is a private function, so maybe don't need this actually
        "Press 2 add an item to the dictionary" << std::endl << 
        "Press 3 to find an item in the graph" << std::endl << 
        "Press 4 to get the length of the table" << std::endl << 
        "Press 9 to quit" << std::endl; 

        std::cin >> input;
        switch(input)
        {
            case 1: // hash an integer
                // Get input
                std::cout << "Enter the integer:" << std::endl;
                std::cin >> n_1;

                std::cout << "Hash: " << (n_1 % 100) << std::endl;   
                break;

            case 2: // add item to dict
                // Get input
                std::cout << "Enter value of the item you wish to add:" << std::endl;
                std::cin >> n_1;

                node = std::make_shared<Node>(nullptr, std::to_string(n_1));
                if (!dict.addItem(node))
                {
                    std::cout << "Failed to add an item\n";
                }
                break;
                

            case 3: // find item in dict
            
                // Get input
                std::cout << "Enter value of the item you wish to find:" << std::endl;
                std::cin >> n_1;

                // Check if valid input
                if (n_1 >= 100 || n_1 < 0)
                {
                    std::cout << "Invalid nodes\n";
                    break;
                }

                node = dict.getItem(std::to_string(n_1));
                if (node == nullptr)
                {
                    std::cout << "Failed to find node\n";
                    break;
                }

                payload = node->getPayload();
                std::cout << "Found node with payload: " << payload << std::endl;
                break;

            case 4: // get length of dict
            
                std::cout << "Length: " << to_string(dict.getLength()) << std::endl;
                break;

            case 9: // quit
                run = false;
                break;
            
            default:
                std::cout << "Invalid input\n";
                break;
        }
    }

    std::cout << "Thanks for playing\n";

    return EXIT_SUCCESS;
}
