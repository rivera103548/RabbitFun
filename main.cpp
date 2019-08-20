//
//  main.cpp
//  RabbitFun
//
//  Created by Alexis on 8/19/19.
//  Copyright © 2019 Alexis. All rights reserved.
//

/** Computes a term in the Fibonacci sequence. @pre n is a positive integer.
 @post None.
 @param n The given integer.
 @return The nth Fibonacci number. */
/*
int rabbit(int n) {
    if (n <= 2) return 1;
    else // n > 2, so n - 1 > 0 and n - 2 > 0
        return rabbit(n - 1) + rabbit(n - 2);
}//end rabbit
*/
#include <iostream>
using namespace std;
int rabbit(int);

int rabbit(int n, int parameter)
{
    int value;
    
    for(int i = 0; i < parameter; i++)
    {
        cout << " ";
    }
    cout << "Enter rabbit: n = " << n << endl;
    
    if(n <=2)
    {
        value = 1;
    }
    else
    {
        value = rabbit(n - 1, parameter + 1) + rabbit(n - 2, parameter + 1);
    }
    for(int i = 0; i < parameter; i++)
    {
        cout << " ";
    }
    cout << "Leave rabbit: n = " << n << " value = " << value << endl;
    return value;
}

//___________________________________________//


int main(){
    
        cout << rabbit(4) << endl;
    
    return 0;
}

//___________________________________________//

