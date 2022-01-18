for _ in range(int(input())):
    m, n = map(int, input().strip().split())
    line = list(map(int, input().strip().split()))
    for i in range(len(line)):
        if n - line[i] >= 0:
            n = n - line[i]
            print("1", end='')
        elif n - line[i] < 0:
            print("0", end='')
    print()

