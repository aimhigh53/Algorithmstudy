#동전은 N종류
#가치를 k개,필요한 동전의 최솟값을 구하는 프로그램 작성
 
import sys
sys.setrecursionlimit(10000)
 
N,K=map(int,input().split(' '))
valuearray=[]
cnt=0
 
def sol(k):
    global cnt
    global valuearray
 
    for i in range(N-1,-1,-1):
        if k==0:
            return cnt
        if valuearray[i]>k:
            continue
        cnt+=k//valuearray[i]
        k%=valuearray[i]
    return cnt

    #시간초과 ㅠㅠㅠ
#     while k not in valuearray:
 
# #     if k in valuearray:
# #         cnt+=1
# #         return cnt
#         valuearray.append(k)
#         valuearray=sorted(valuearray)
 
#         idx=valuearray.index(k)
#         nextk=k-valuearray[idx-1]
 
#         k=nextk
#         cnt+=1
 
#     cnt+=1
#     return cnt
 
 
 
for i in range(N):
    value=int(input())
    valuearray.append(value)
 
print(sol(K))
 
