#include <algorithm>
#include <string>
#include "reverse_string.h"

namespace reverse_string {

    std :: string reverse_string(std :: string x){
        std :: reverse(x.begin() , x.end());
        return x;     
    }

}  // namespace reverse_string
