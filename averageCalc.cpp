// Copyright (c) 2022 All rights reserved.
// .
// Created by: Spencer S
// Date : Dec 18, 2022
// A program which uses lists and without functions
// to round a decimal number


#include <math.h>

#include <iostream>
#include <random>
using std::string;

// Declaring constants
int MAX_ARRAY_SIZE = 10;
int MIN_NUM = 0;
int MAX_NUM = 100;


int main() {
    // declaring variables
    int arrayOfSize[MAX_ARRAY_SIZE];
    int sum = 0;
    float average = 0;
    int randomNum;
    int counter;
    int counter2;
    std::cout << "This is a program that generates 10 numbers";
    std::cout << " and finds the average\n";

        // for loop to create 10 random numbers
        for (counter = 0; counter < 11; counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        randomNum = idist(rgen);
        arrayOfSize[counter] = randomNum;
        std::cout << randomNum << " added to the array ";
        std::cout << counter << "\n";
    }

    // for loop to calculate sum using the array of random numbers
    for (counter2 = 0; counter2 < 11; counter2++) {
        sum += arrayOfSize[counter2];
    }

    // average formula
    average = sum / 10;

    // output message of average
    std::cout << "\nThe average is " << average;
    std::cout << "\n";
}
