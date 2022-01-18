friend=0
for _ in range(int(input())):
    name = str(input())
    if (name.find('ch')!=-1 or name.find('che')!=-1 or name.find('chef')!=-1 or name.find('chef')!=-1 or
    name.find('he')!=-1 or name.find('hef')!=-1 or
    name.find('ef')!=-1 ):
        friend+=1
print(friend)