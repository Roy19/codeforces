def main():
    n = int(input().strip())
    attempts = 0
    for i in range(n):
        petya,vasya,tonya = [int(x) for x in input().strip().split(' ')]
        if petya + vasya + tonya >= 2:
            attempts += 1
    print(attempts)

if __name__ == '__main__':
    main()
