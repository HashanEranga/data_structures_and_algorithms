from json.tool import main
import string

def CapitalizerMethodOne(str):
    return str.title()

def CapitalizerMethodTwo(str):
    return string.capwords(str)

if __name__ == "__main__":
    str = input() 
    print(CapitalizerMethodOne(str))
    print(CapitalizerMethodTwo(str))

