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
    static int quadraticAlgorithm(int sequence[], int arrayLength);
    static int linearAlgorithm(int sequence[], int arrayLength);
};
#endif /* MCSS_hpp */
