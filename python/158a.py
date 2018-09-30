def findQualified(n,k,scores):
    count = 0
    scorek = scores[k-1]
    for x in range(n):
        if scores[x] >= scorek and scores[x] > 0:
            count += 1
    return count

if __name__ == '__main__':
    n,k = list(map(int,input().strip().split(' ')))
    scores = [int(i) for i in input().strip().split(' ')]
    ans = findQualified(n,k,scores)
    print(ans)
