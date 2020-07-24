#include "gigasecond.hpp"
#include <boost/date_time.hpp>

namespace pt = boost::posix_time;
namespace g = boost::gregorian;

namespace gigasecond
{
   pt::ptime advance( pt::ptime time_of_birth )
   {
      //For this style of literal on gcc or clang use -std=c++1y.
         //MS's stuff simply can't handle it.
      static const auto OFFSET = pt::seconds( 1'000'000'000L );
      return time_of_birth + OFFSET;
   }
   g::date advance( g::date date_of_birth,
                   pt::time_duration time_of_day_of_birth )
   {
      //One cannot simply use date_duration( 1E9 / (60*60*24) )
      //Because they could've been born in the evening
      //and not all days have the same number of seconds in them
      return advance( pt::ptime(date_of_birth, time_of_day_of_birth) ).date();
   }
