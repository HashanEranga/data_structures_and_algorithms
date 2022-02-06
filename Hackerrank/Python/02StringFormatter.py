def print_formatted(number):
    # your code goes here
    sampleList = []
    
    for i in range(1,number+1):
        sampleList.append('{0:{width}d} {0:{width}o} {0:{width}X} {0:{width}b}'.format(i, oct(i)[2:], hex(i)[2:], bin(i)[2:]))
        # sampleList.append([i, oct(i)[2:], hex(i)[2:], bin(i)[2:]])
    ans = "\n".join(sampleList)
    print(ans)
    return ans

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)