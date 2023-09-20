//
//  MCSS.hpp
//  MCSSProblem
//
//  Created by Aemon Zhou on 20/09/23.
//

#ifndef MCSS_hpp
#define MCSS_hpp

#include <stdio.h>
class MCSS
{
private:
    MCSS();//To ensure the class cannot be initiated.
public:
    //The cubic algorithm used a exhausive search.
    static int cubicAlgorithm(int sequence[], int arrayLength);
    //The qruadratic algorithm also used a exhausive search. By removing some of the unneccssary calculation, we remove 1 forloop (sum of 0 to j is same as j + 0 to j - 1(previous sum)).
    static int quadraticAlgorithm(int sequence[], int arrayLength);
    //The linearAlgorithm uses a structure observation relate to the problem. The clue is that a best
    //sub sequence sum cannot include a negative sequence sum, it is better to not include (essentially means, we could move forwards).
    static int linearAlgorithm(int sequence[], int arrayLength);
};
#endif /* MCSS_hpp */
