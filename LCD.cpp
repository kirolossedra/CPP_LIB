    
bool isPrime(int num) {
  if (num <= 1) {
    return false;
  }
  if (num <= 3) {
    return true;
  }
  if (num % 2 == 0 || num % 3 == 0) {
    return false;
  }
  for (int i = 5; i * i <= num; i += 6) {
    if (num % i == 0 || num % (i + 2) == 0) {
      return false;
    }
  }
  return true;
}

int sedra(const vector<int>& arr) {
  // Calculate the greatest common divisor (GCD) of all elements.
  int gcd = arr[0];
  for (int num : arr) {
    gcd = __gcd(gcd, num);  // Use built-in __gcd function
  }

  // If the GCD is 1, there is no common factor other than 1, so return 1.
  if (gcd == 1) {
    return 1;
  }

  // Find a prime factor of the GCD (any factor will do)
  while (!isPrime(gcd)) {
    // Find the first prime factor that divides gcd and update gcd
    for (int i = 2; i * i <= gcd; i++) {
      if (gcd % i == 0) {
        gcd /= i;
        break;
      }
    }
  }

  return gcd;
}
