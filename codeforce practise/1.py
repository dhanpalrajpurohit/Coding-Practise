for test in range(int(input())):
    name = []
    surname = []
    for student in range(int(input())):
        n, s = input().split()
        name.append(n)
        surname.append(s)
    for attend in range(len(name)):
        if name.count(name[attend]) > 1:
            print(name[attend], surname[attend])
        else:
            print(name[attend])
