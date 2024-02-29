std::vector<int> primeFactors(int n) {
  std::vector<int> factors;

  // Handle special cases for 1 and negative numbers
  if (n == 1) {
    return factors;
  } else if (n < 0) {
    throw std::invalid_argument("Input number must be positive.");
  }

  // Efficiently handle divisibility by 2
  while (n % 2 == 0) {
    factors.push_back(2);
    n /= 2;
  }

  // Iterate through odd numbers up to the square root of n
  for (int i = 3; i <= std::sqrt(n); i += 2) {
    while (n % i == 0) {
      factors.push_back(i);
      n /= i;
    }
  }

  // If n is prime, add it as a factor
  if (n > 1) {
    factors.push_back(n);
  }

  return factors;
}
