// Copyright Kaitlyn Ip 2022
//
// Created by Kaitlyn Ip
// Created in Dec 2022
// This program finds the smallest number
// in a list of ten random numbers

#include <time.h>

#include <array>
#include <iostream>
#include <random>
#include <string>

template <size_t N>
int CalculateSmallestNum(std::array<int, N> listOfNums) {
    // This function identifies the largest number
    int min = listOfNums[0];

    for (int loopCounter = 0; loopCounter < listOfNums.size();
         loopCounter++) {
        if (listOfNums[loopCounter] < min) {
            min = listOfNums[loopCounter];
        }
    }
    return min;
}

int main() {
    // This function uses an array

    int aRandomNum;
    std::array<int, 10> randomNum;
    int smallestInt;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 100);

    for (int counter = 0; counter < 10; counter++) {
        aRandomNum = idist(rgen);
        randomNum[counter] = aRandomNum;
        std::cout << "The random number is " << aRandomNum;
        std::cout << std::endl;
    }

    // call function
    smallestInt = CalculateSmallestNum(randomNum);
    std::cout << "\nThe smallest number is " << smallestInt
    << "." << std::endl;

    std::cout << "\nDone." << std::endl;
}
