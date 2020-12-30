from collections import deque
def solve(d):
    flag=True
    odd_list=[]
    skip_key=''
    for key,ele in d.items():
        if len(ele)%2!=0:
            if flag==False:
                print(-1)
                return
            else:
                flag=False
                odd_list=ele
                skip_key=key
    l = deque(odd_list)
    for ele in d:
        if(ele==skip_key):
            continue
        for i in range(len(d[ele])//2):
            l.appendleft(d[ele][i])
            l.append(d[ele][len(d[ele])-1-i])
    for i in range(len(l)-1):
        print(l[i],end=' ')
    print(l[-1])
T = int(input())
for i in range(T):
    s = input()
    d={}
    for j in range(len(s)):
        if s[j] not in d:
            d[s[j]]=[]
        d[s[j]].append(j+1)
    solve(d)