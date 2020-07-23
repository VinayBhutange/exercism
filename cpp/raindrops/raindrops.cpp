#include "raindrops.h"


    std::string raindrops::convert(int number){
        std::string ans = "";
        if(number % 3 == 0){
            ans += "Pling";
        }
        if(number % 5 == 0){
            ans += "Plang";  
        }
        if(number % 7 == 0){
            ans += "Plong";
        }

        if(ans.empty()){
            ans = std::to_string(number);
        }
        return ans;
    }

