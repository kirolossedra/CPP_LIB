#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>


int main() {
    std::string input1;
    std::string input2;
    std::string pattern = "STOP"; // Change this to your desired stopping pattern

    std::cout << "Enter the first string with newlines. Type \"" << pattern << "\" to stop:\n";

    while (true) {
        std::string line;
        std::getline(std::cin, line);

        // Check if the line contains the stopping pattern
        if (line.find(pattern) != std::string::npos) {
            break;
        }

        input1 += line + '\n';
    }

    std::cout << "Enter the second string with newlines. Type \"" << pattern << "\" to stop:\n";

    while (true) {
        std::string line;
        std::getline(std::cin, line);

        // Check if the line contains the stopping pattern
        if (line.find(pattern) != std::string::npos) {
            break;
        }

        input2 += line + '\n';
    }

    std::cout << "First string you entered:\n" << input1;
    std::cout << "Second string you entered:\n" << input2;

    std::string word;
    int word_count1 = 0;
    int word_count2 = 0;
    std::vector<std::string> words1;
    std::vector<std::string> words2;

    std::istringstream iss1(input1);
    std::istringstream iss2(input2);

    // Split the first input string based on spaces (including white spaces and newlines)
    while (iss1 >> word) {
        word_count1++;
        words1.push_back(word); // Store the word in the first vector
    }

    // Split the second input string based on spaces (including white spaces and newlines)
    while (iss2 >> word) {
        word_count2++;
        words2.push_back(word); // Store the word in the second vector
    }

    std::cout << "Word count in the first string: " << word_count1 << std::endl;
    std::cout << "Word count in the second string: " << word_count2 << std::endl;

    std::cout << "Words in the first string: ";
    for (int i = 0; i < words1.size(); ++i) {
        std::cout << words1[i];
        if (i < words1.size() - 1) {
            std::cout << " ";
        }
    }

    std::cout << "\nWords in the second string: ";
    for (int i = 0; i < words2.size(); ++i) {
        std::cout << words2[i];
        if (i < words2.size() - 1) {
            std::cout << " ";
        }
    }
    
    // Declare a vector to store the unique words
std::vector<std::string> unique_words;

// Loop through the words in the first vector
for (int i = 0; i < words1.size(); ++i) {
    // Assume the word is unique until proven otherwise
    bool is_unique = true;

    // Loop through the words in the second vector
    for (int j = 0; j < words2.size(); ++j) {
        // Compare the words
        if (words1[i] == words2[j]) {
            // The word is not unique, so break the inner loop
            is_unique = false;
            break;
        }
    }

    // If the word is unique, add it to the unique vector
    if (is_unique) {
        unique_words.push_back(words1[i]);
    }
}



    std::sort(unique_words.begin(), unique_words.end());
    
    
    for (std::string& word : unique_words) {
        word.insert(0, "SELECT * FROM ");
    }

// Print the unique words
std::cout << "\nUnique words in the first string that are not in the second string: ";
for (int i = 0; i < unique_words.size(); ++i) {
    std::cout << unique_words[i];
    if (i < unique_words.size() - 1) {
        std::cout << "\n";
    }
}


std::cout<< unique_words.size();
    
   

    
    
    

    return 0;
}


