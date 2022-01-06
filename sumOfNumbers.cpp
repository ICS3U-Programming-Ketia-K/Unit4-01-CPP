// Copyright (c) 2021 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Jan. 5, 2022
// This program asks the user to enter a positive number
// and then uses the loop to calculate and display the
// of all numbers from 0 to the number the user entered.
# include <iostream>

int main() {
    // initialize the loop counter and sum
    int counter = 0;
    int sum = 0;
    int userNum;
    std::string userNumString;

    // get the user number as a string
    std::cout << "Enter a positive number: ";
    std::cin >> userNumString;
    std::cout << std::endl;

    try {
        // convert the user number as string to an integer
        userNum = std::stoi(userNumString);
        std::cout << "" << std::endl;

        // check to see if user number is a positive number
        if (userNum > 0) {
            // calculate the sum of all numbers from 0 to user number
            while (counter <= userNum) {
                sum = sum +counter;
                std::cout << "Tracking " << counter <<
                     " times through the loop.\n";
                counter = counter + 1;
            }
            // display the sum to the user
            std::cout << "\nThe sum of the numbers from 0 to " << userNum <<
                " is: " << sum << std::endl;
        } else {
            std::cout << userNum << " is not a positive number.";
    }
    // tells the user that they did not enter a number
    } catch (std::invalid_argument) {
        std::cout <<userNumString << " is not a number.\n";
    }
}
