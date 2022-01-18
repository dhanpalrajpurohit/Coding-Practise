def findprime(n):
    for i in range(2, n):
        if n%i == 0:
            return False
        else:
            return True



for test in range(int(input())):
    x, y = map(int, input().split())
    add = x+y+1
    while findprime(add) == False:
        add += 1
    print(add - (x + y))
