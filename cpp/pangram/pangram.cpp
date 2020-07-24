#include "pangram.h"
#include <iostream>

using namespace std;

bool pangram::is_pangram(string str){
    bool arr[26] = {false};
    for(char x : str ){
        if ('A' <= x && x <= 'Z') 
            arr[ x - 'A'] = true; 
  
        
        else 
            arr[ x - 'a'] = true;
    }

    for (bool i : arr) 
        if (i == false) 
            return (false);

    return true;
    }

  // namespace pangram
