def lastBitFibEfficient(n):
    fib_arr = []
    fib_arr.append(1)
    fib_arr.append(1)
    for i in range(2,n):
        fib_arr.append((fib_arr[i-1]+fib_arr[i-2])%10)
    
    return fib_arr[n-1]


n = int(input())
print(lastBitFibEfficient(n))

