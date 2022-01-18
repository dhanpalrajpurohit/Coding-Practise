for _ in range(int(input())):
    k,n = map(int, input().strip().split())
    line = list(map(int, input().strip().split()))
    line.sort()
    print(line[(k+n)//2])