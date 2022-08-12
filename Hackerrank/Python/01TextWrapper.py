def wrapper(str, max_width):
    return "\n".join([str[i:i+max_width] for i in range(0, len(str), max_width)])

if __name__ == "__main__":
    str, max_width = input(), int(input())
    ans = wrapper(str, max_width)
    print(ans)
    