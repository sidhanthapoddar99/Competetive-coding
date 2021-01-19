#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the nonDivisibleSubset function below.
def nonDivisibleSubset(k, S):


    arr=[0 for i in range(0,k+1)]
    for i in S:
        arr[i%k]+=1
    s=0
    l=int(k/2)

    if k%2==0:
        if arr[l]>0:
            s+=1
        l-=1
    if arr[0]>=1:
        s+=1        
    for i in range(1,l+1):
        s+=max(arr[i],arr[k-i])
    return s            




if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = int(nk[0])

    k = int(nk[1])

    S = list(map(int, input().rstrip().split()))

    result = nonDivisibleSubset(k, S)

    fptr.write(str(result) + '\n')

    fptr.close()
