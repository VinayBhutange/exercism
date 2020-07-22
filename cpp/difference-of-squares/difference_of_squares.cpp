#include "difference_of_squares.h"

namespace difference_of_squares {
    
    long long int square_of_sum(int n){
        int sum = (n * (n+1)) / 2;
        return sum * sum;
    } 
    
    long long int sum_of_squares(int n){
        return (n * (n+1) * (2*n + 1) ) / 6;
    }

    long long int difference(int n){
        return square_of_sum(n) - sum_of_squares(n);
    }

}  // namespace difference_of_squares
