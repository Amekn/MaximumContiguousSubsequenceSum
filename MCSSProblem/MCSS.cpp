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

int MCSS::NlogNAlgorithm(int sequence[], int left, int right){
    int leftBoarderSum = 0, rightBoarderSum = 0;
    int maxLeftBoarderSum = 0, maxRightBoarderSum = 0;
    if(left==right){
        return sequence[left] > 0 ? sequence[left] : 0;
    }
    int middle = (left + right) / 2;
    //Compute the sum on the left of the array
    int maxLeftSum = NlogNAlgorithm(sequence, left, middle);
    //Compute the sum on the right of the array.
    int maxRightSum = NlogNAlgorithm(sequence, middle + 1, right);
    
    //Compute the sum across the middle boarder.
    for(int i = middle; i >= left; i--){
        leftBoarderSum += sequence[i];
        if(leftBoarderSum > maxLeftBoarderSum){
            maxLeftBoarderSum = leftBoarderSum;
        }
    }
    
    for(int i = middle + 1; i <= right; i++){
        rightBoarderSum += sequence[i];
        if(rightBoarderSum > maxRightBoarderSum){
            maxRightBoarderSum = rightBoarderSum;
        }
    }
    
    //Compare the sums.
    int maxSum = maxLeftSum > maxRightSum ? maxLeftSum : maxRightSum;
    maxSum = (maxLeftBoarderSum + maxRightBoarderSum) > maxSum ? maxLeftBoarderSum + maxRightBoarderSum : maxSum;
    return maxSum;
}

int MCSS::NlogNDriver(int sequence[], int arrayLength){
    return arrayLength > 0 ? NlogNAlgorithm(sequence, 0, arrayLength - 1) : 0;
}

