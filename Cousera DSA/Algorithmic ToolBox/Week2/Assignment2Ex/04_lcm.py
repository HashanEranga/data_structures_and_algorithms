def lcm_naive(a,b):
    for i in range(1,a*b+1):
        if(i%a==0 and i%b == 0):
            return i
    
    return a*b


a,b = list(map(int, input().split()))
print(lcm_naive(a,b)
)