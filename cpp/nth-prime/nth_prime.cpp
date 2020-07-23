#include "nth_prime.h"
#include <algorithm>
#include <stdexcept>
#include <vector>

namespace nth_prime {

std::uintmax_t nth(unsigned int i) {
  if( i == 0 ) {
    throw std::domain_error("bad argument");
  }

  // we can store each prime successively found
  // in a vector and the next prime is the first
  // that is not multiple of previous one
  std::vector<std::uintmax_t> primes;
  primes.reserve(i);

  for(std::uintmax_t next = 2; primes.size() < i; next++) {
    if( std::none_of(primes.begin(), primes.end(), [&next](auto previous_prime){
        return (next % previous_prime) == 0;
      })
    ) {
      primes.push_back(next);
    }
  }

  return primes.back();
}

}  // namespace nth_prime