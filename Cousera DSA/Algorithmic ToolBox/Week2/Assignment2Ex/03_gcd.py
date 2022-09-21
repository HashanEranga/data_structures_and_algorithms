from math import gcd


def gcd_naive(a,b):
    minVal = min(a,b)
    gcd_val = 1;
    for i in range(2,minVal+1):
        if(a%i==0 and b%i==0):
            gcd_val = i
    return gcd_val

a,b = list(map(int, input().split(" ")))

print(gcd_naive(a,b))
