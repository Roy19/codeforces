def divide(n):
    if (n % 2 != 0) or n == 2:
        return 'NO'
    else:
        return 'YES'
        
if __name__ == '__main__':
    n = int(input().strip())
    result = divide(n)
    print(result)
