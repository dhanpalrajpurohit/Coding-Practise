for _ in range(int(input())):
    n = int(input())
    lineA = list(map(int,input().strip().split()))
    lineB = list(map(int,input().strip().split()))
    a=sum(lineA)-max(lineA)
    b=sum(lineB)-max(lineB)
    if a<b:
        print("Alice")
    elif a>b:
        print("Bob")
    else:
        print("Draw")