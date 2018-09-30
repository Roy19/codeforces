def abbreviate(word):
    if len(word) > 10:
        print(word[0]+str(len(word)-2)+word[-1])
    else:
        print(word)

def main():
    word = input().strip()
    abbreviate(word)

if __name__ == '__main__':
    n = int(input().strip())
    for i in range(n):
        main()