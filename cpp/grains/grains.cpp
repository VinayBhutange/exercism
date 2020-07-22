#include "grains.h"

namespace grains {
    ull square(unsigned short _square)
    {
        return 1ULL << (_square - 1);
    }

    ull total()
    {
        ull sum = 0;
        for (int i = 64; i > 0; --i)
        {
            sum += square(i);
        }
        return sum;
    }

}  // namespace grains
