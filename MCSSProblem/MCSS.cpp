//
//  MCSS.cpp
//  MCSSProblem
//
//  Created by Aemon Zhou on 20/09/23.
//
#include <iostream>
#include "MCSS.hpp"
using namespace std;
int MCSS::cubicAlgorithm(int sequence[], int arrayLength){
    int sum = 0;
    int startIndex = 0;
    int endIndex = 0;
    for(int i = 0; i < arrayLength; i++){
        for(int j = i; j < arrayLength; j++){
            int currentSum = 0;
            for(int k = i; k <= j; k++){
                currentSum += sequence[k];
            }
            if(currentSum > sum){
                sum = currentSum;
                startIndex = i;
                endIndex = j;
            }
        }
    }
    return sum;
}

int MCSS::quadraticAlgorithm(int sequence[], int arrayLength){
    int sum = 0;
    int startIndex = 0;
    int endIndex = 0;
    for(int i = 0; i < arrayLength; i++){
        int currentSum = 0;
        for(int j = i; j < arrayLength; j++){
            currentSum += sequence[j];
            if(currentSum > sum){
                sum = currentSum;
                startIndex = i;
                endIndex = j;
            }
        }
    }
    return sum;
}

int MCSS::linearAlgorithm(int sequence[], int arrayLength){
    int sum = 0;
    int startIndex = 0;
    int endIndex = 0;
    int currentSum = 0;
    for(int i = 0; i < arrayLength; i++){
        if(currentSum < 0){
            startIndex = i;
            currentSum = 0;
        }
        currentSum += sequence[i];
        if(currentSum > sum){
            sum = currentSum;
            endIndex = i;
        }
    }
    cout << "Start Index: " << startIndex << endl;
    cout << "End Index: " << endIndex << endl;
    return sum;
}

