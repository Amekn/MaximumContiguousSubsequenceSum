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
    static int* cubicAlgorithm(int sequence[]);
    static int* quadraticAlgorithm(int sequence[]);
    static int* linearAlgorithm(int sequence[]);
};
#endif /* MCSS_hpp */
