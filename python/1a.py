import math

def numFlagStones(n,m,a):
    flagStonesl = math.ceil(n/a)
    flagstonesb = math.ceil(m/a)
    return (flagStonesl*flagstonesb)

if __name__ == '__main__':
    n,m,a = list(map(int,input().strip().split(' ')))
    x = numFlagStones(n,m,a)
    print(x)
