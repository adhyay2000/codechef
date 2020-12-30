from itertools import permutations
def num_bits(number):
    binary = bin(number)
    setBits = [ones for ones in binary[2:] if ones=='1']
    return len(setBits)
def test(l):
    #check if unique
    visited = set()
    for ele in l:
        if ele in visited:
            return "FAILED"
        visited.add(ele)
    size=len(l)
    for i in range(len(l)):
        if num_bits(l[i]) == num_bits(l[(i+2)%size]):
            # print(l[i])
            return "FAILED"
    return "PASSED"
T = int(input())
for i in range(T):
    N,K = input().split(' ')
    N = int(N)
    K = int(K)
    l = list(range(2**N))
    perm = permutations(l,K)
    answer = []
    for ele in list(perm):
        if test(ele) == 'PASSED':
            answer = ele
            break
    size = len(answer)
    for i in range(len(answer)):
        print(answer[i],answer[(i+1)%size])