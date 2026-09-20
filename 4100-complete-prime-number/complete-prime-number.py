class Solution:
    def completePrime(self, num: int) -> bool:

        def isPrime(n):
            if n < 2:
                return False
            i = 2
            while i * i <= n:
                if n % i == 0:
                    return False
                i += 1
            return True
        s = str(num)
        for i in range(1, len(s) + 1):
            if not isPrime(int(s[:i])):
                return False
        for i in range(len(s)):
            if not isPrime(int(s[i:])):
                return False

        return True