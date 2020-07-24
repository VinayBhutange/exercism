#ifndef GIGASECOND_HPP_INCLUDED
#define GIGASECOND_HPP_INCLUDED 1

#include <boost/date_time/gregorian/gregorian_types.hpp>
#include <boost/date_time/posix_time/posix_time_types.hpp>

namespace gigasecond
{
  boost::posix_time::ptime advance( boost::posix_time::ptime time_of_birth );
  
  //For compatibility:
  boost::gregorian::date advance(
     boost::gregorian::date date_of_birth,
     boost::posix_time::time_duration time_of_day_of_birth
      //If not known, generously assume they were born at midnight
         = boost::posix_time::seconds(0) );
}

#endif