import string

vowels = ['A','E','I','O','U','Y','a','e','i','o','u','y']

def main():
    in_str = input()
    for c in in_str:
        if c not in vowels:
            print('.',end='')
            if c == c.upper():
                print(c.lower(),end='')
            else:
                print(c,end='')
        else:
            pass
        
    print('\n')

if __name__ == '__main__':
    main()