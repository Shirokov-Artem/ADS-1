// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  unsigned long long a = 0;
  int flag = 0;
  if (value <= 1)
  {
    return false;
  }
  if (value > 1)
  {
    for (unsigned long long i = 2; i < value; i++)
    {
      a = i;
      if (value % a == 0)
      {
        flag = 1;
      }
    }
    if (flag == 1)
    {
      return false;
    }
    else
    {
      return true;
    }
  }
}


uint64_t nPrime(uint64_t n) {
  if (n >=1)
  {
    unsigned long long result = 0;
    unsigned long long count = 0;
    for (unsigned long long i = 0; n > count; i++)
    {
      if (checkPrime(i) == true)
      {
        result = i;
        count++;
      }
    }
    return result;
  }
  else
  {
    return 0;
  }
}

uint64_t nextPrime(uint64_t value) {
  do
  {
    ++value;
  } while (checkPrime(value) == false);
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
  unsigned long long sum = 0;
  for (unsigned long long i = 0; i < hbound; i++)
  {
    if (checkPrime(i) == true)
    {
      sum += i;
    }
  }
  return sum;
}
