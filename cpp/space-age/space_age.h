#pragma once

#include <cstdint>

namespace space_age {

    class space_age {
        public:
            explicit space_age(std::int64_t seconds) :
                space_age_seconds(seconds),
                earth_years(static_cast<double>(seconds) / earth_year_seconds)
            { }

            std::int64_t seconds() const;
            double on_mercury() const;
            double on_venus() const;
            double on_earth() const;
            double on_mars() const;
            double on_jupiter() const;
            double on_saturn() const;
            double on_uranus() const;
            double on_neptune() const;

        private:
            const std::int64_t space_age_seconds;
            const double earth_years;

            static const std::int64_t earth_year_seconds = 31557600;
    };

}