def fibEfficient(n):
    fib_arr = []
    fib_arr.append(1)
    fib_arr.append(1)
    for i in range(2,n):
        fib_arr.append(fib_arr[i-1]+fib_arr[i-2])
    
    return fib_arr[n-1]

def lastBitFib(n):
    res = fibEfficient(n)
    return res % 10

n = int(input())
print(lastBitFib(n))

