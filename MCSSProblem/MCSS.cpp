//
//  MCSS.cpp
//  MCSSProblem
//
//  Created by Aemon Zhou on 20/09/23.
//

#include "MCSS.hpp"

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
    return 0;
}

int MCSS::linearAlgorithm(int sequence[], int arrayLength){
    return 0;
}

