for _ in range(int(input())):
    line = list(map(int, input().strip().split()))
    sum=0
    for i in range(len(line)):
        sum=sum+line[i]
    if sum==0:
        print("beginner")
    elif sum==1:
        print("junior developer")
    elif sum==2:
        print("middle developer")
    elif sum==3:
        print("senior developer")
    elif sum==4:
        print("hacker")
    else:
        print("Jeff Dean")
    