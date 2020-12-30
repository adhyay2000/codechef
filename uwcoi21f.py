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
# T = int(input())
# for i in range(T):
#     N,K = input().split(' ')
#     N=int(N)
#     K=int(K)
#     l = solve(N,K)
#     for i in range(len(l)-1):
#         print(l[i],l[i+1])
for N in range(3,18):
    for K in range(3,9):
        l = solve(N,K)
        if test(l) == 'FAILED':
            print(N,K)
            for i in range(len(l)-1):
                print(l[i],l[i+1])
            exit(0)
#         print(N,K)
#         l=solve(N,K)
#         l.pop()
#         if test(l)=="FAILED":
#             print(N,K)
#             print(l)
#             exit(0)
# print('DONE')
# for N in range(3,18):
# # T = int(input())
# # for i in range(T):
#     # N,K = input().split(' ')
#     # N=int(N)
#     # K=int(K)
#     for K in range(3,2**N+1):
#         d={}
#         l=[]
#         for i in range(N+1):
#             d[i]=[]
#         for i in range(2**N):
#             d[num_bits(i)].append(i)
#         prev=0
#         # print(d)
#         d[0]=[]
#         l.append(0)
#         index=1
#         i=K-1
#         while i>0:
#             while(d[index]==[]):
#                 index=(index+1)%(N+1)
#             if len(d[index])%2!=0 and len(d[index])!=1:
#                 curr=d[index][-1]
#                 d[index].pop()
#                 l.append(curr)
#                 # print("{} {}".format(prev,curr))
#                 # print("{}:{} {}:{},".format(prev,num_bits(prev),curr,num_bits(curr)))
#                 prev=curr
#                 curr=d[index][-1]
#                 d[index].pop()
#                 l.append(curr)
#                 # print("{} {}".format(prev,curr))
#                 # print("{}:{} {}:{},".format(prev,num_bits(prev),curr,num_bits(curr)))
#                 prev=curr
#                 index = (index+1)%(N+1)
#                 i=i-2
#             else:
#                 curr=d[index][-1]
#                 d[index].pop()
#                 l.append(curr)
#                 # print("{} {}".format(prev,curr))
#                 # print("{}:{} {}:{},".format(prev,num_bits(prev),curr,num_bits(curr)))
#                 index = (index+1)%(N+1)
#                 prev=curr
#                 i=i-1
#         l.append(0)
#         if test(l) == "FAILED":
#             print(K,N)
#             print(l)
#             exit(0)
        # print("{} {}".format(prev,0))
    # print("{}:{} {}:{},".format(prev,num_bits(prev),0,0))


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