import math
# Write your code here
n=int(input())
arr=list(map(int,input().split(' ')))
s=sum(arr)
k=int(s/n)+1

print(k)