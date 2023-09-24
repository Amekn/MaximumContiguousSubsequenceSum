//
//  main.cpp
//  MCSSProblem
//
//  Created by Aemon Zhou on 20/09/23.
//

#include <iostream>
#include <stdexcept>
#include <string>
#include "MCSS.hpp"
using namespace std;

int main(int argc, const char * argv[])
{
    
    try
    {
        //Check if a sequence is provided
        if(argc < 2){
            throw invalid_argument("Please enter a sequence of number as parameter");
        }
        //Create a new integer array to store the int elements for mathematical analysis.
        int integerArray[argc - 1];
        //Use a for loop to convert all elements in the string array and save them into the integer array.
        for(int i = 1; i < argc; i++){
            string s1(argv[i]);
            integerArray[i - 1] = stoi(s1);
        }
        //Now use algorithm to compute the results.
        int result = MCSS::NlogNDriver(integerArray, argc - 1);
        cout << "The maximum sum of subsequence is: " << result << endl;
    }
    catch(invalid_argument &e)
    {
        cerr << e.what();
        return -1;
    }
    
}


