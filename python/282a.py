def main():
    x = 0
    n = int(input().strip())
    for i in range(n):
        statement = input()
        if statement[0] == 'X':
            operation = statement[1:3]
            if operation == '++':
                x += 1
            else:
                x -= 1
        elif statement[2] == 'X':
            operation = statement[0:2]
            if operation == '++':
                x += 1
            else:
                x -= 1
    print(x)  

if __name__ == '__main__':
    main()
