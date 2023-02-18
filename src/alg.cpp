// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
  uint64_t a = 0;
  int flag = 0;
  if (value <= 1)
  {
    return false;
  }
  if (value > 1)
  {
    for (uint64_t i = 2; i < value; i++)
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
// вставьте код функции
  if (n >=1)
  {
    uint64_t result = 0;
    uint64_t count = 0;
    for (uint64_t i = 0; n > count; i++)
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
// вставьте код функции
  do
  {
    ++value;
  } while (checkPrime(value) == false);
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  if (hbound > 1)
  {
    uint64_t sum = 0;
    for (uint64_t i = 0; i < hbound; i++)
    {
      if (checkPrime(i) == true)
      {
        sum += i;
      }
    }
    return sum;
  }
  else
  {
    return 0;
  }
}
