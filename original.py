def num_bits(number):
    binary = bin(number)
    setBits = [ones for ones in binary[2:] if ones=='1']
    return len(setBits)
def test(l):
    for i in range(len(l)-2):
        if num_bits(l[i]) == num_bits(l[i+2]):
            print(l[i])
            return "FAILED"
    return "PASSED"
T = int(input())
for i in range(T):
    N,K = input().split(' ')
    N=int(N)
    K=int(K)
    d={}
    l=[]
    for i in range(N+1):
        d[i]=[]
    for i in range(2**N):
        d[num_bits(i)].append(i)
    prev=0
    print(d)
    d[0]=[]
    l.append(0)
    index=1
    i=K-1
    while i>0:
        while(d[index]==[]):
            index=(index+1)%(N+1)
        if len(d[index])%2!=0 and len(d[index])!=1:
            curr=d[index][-1]
            d[index].pop()
            l.append(curr)
            # print("{} {}".format(prev,curr))
            # print("{}:{} {}:{},".format(prev,num_bits(prev),curr,num_bits(curr)))
            prev=curr
            curr=d[index][-1]
            d[index].pop()
            l.append(curr)
            # print("{} {}".format(prev,curr))
            # print("{}:{} {}:{},".format(prev,num_bits(prev),curr,num_bits(curr)))
            prev=curr
            index = (index+1)%(N+1)
            i=i-2
        else:
            curr=d[index][-1]
            d[index].pop()
            l.append(curr)
            # print("{} {}".format(prev,curr))
            # print("{}:{} {}:{},".format(prev,num_bits(prev),curr,num_bits(curr)))
            index = (index+1)%(N+1)
            prev=curr
            i=i-1
    l.append(0)
    # print("{} {}".format(prev,0))
    # print("{}:{} {}:{},".format(prev,num_bits(prev),0,0))

print(l)


def solve(N,K):
    even = []
    odd = []
    for i in range(0,2**N+1):
        if num_bits(i)%2==0:
            even.append(i)
        else:
            odd.append(i)
    l = [-1]*K
    # print(l)
    print(even)
    print(odd)
    i=0
    while True:
        if(len(even)==0 or len(odd)==0):
            break
        if l[i]!=-1:
            break
        l[i]=even[-1]
        i=(i+2)%K
        if l[i]!=-1:
            break
        l[i]=odd[-1]
        i=(i+2)%K
        even.pop()
        odd.pop()
    i=1
    while True:
        if(len(even)==0 or len(odd)==0):
            break
        if l[i]!=-1:
            break
        l[i]=even[-1]
        i=(i+2)%K
        if l[i]!=-1:
            break
        l[i]=odd[-1]
        i=(i+2)%K
        even.pop()
        odd.pop()
    l.append(l[0])
    return l
    # print(l)
    # for i in range(K//2):
    #     print(i)
    #     l[2*i]=even[-1]
    #     even.pop()
    #     l[2*i+1]=odd[-1]
    #     odd.pop()
    # print(l)

print(solve(4,16))

'''
0 4
4 2
2 5
5 3
3 7
7 1
1 6
6 0
'''


'''
N!
N/2! N/2!
(1+x)4 = 1,-4x,6x2,-4x3,x4
f(f(x)) = [15, 16, 12, 14, 10, 13, 9, 11, 6, 8, 5, 7, 3, 4, 0, 2]
15,6,16,8,12,5,14,7,10,3,13,4,9,0,11,2,15
0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15
10 _ 13 _ 9 _ 11 _ 6 _ 8 _ 5
0 15 9 4 
0 8 12 14 15 4 10 13 2 9 11 
'''
