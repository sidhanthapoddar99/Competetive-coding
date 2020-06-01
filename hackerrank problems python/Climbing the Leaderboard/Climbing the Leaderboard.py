#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the climbingLeaderboard function below.
def finding(m,arr,k):
    temp=0
    mi=min([m,len(arr)-1])
    for i in range(mi,-1,-1):
        if k<arr[i]:
            z=i+1
            return (z)
    return(0)        

def climbingLeaderboard(arr, alice):
    arr2=[]
    arr+=[-1]
    prev=len(arr)-1
    for i in alice:
        temp=finding(prev,arr,i)
        arr2+=[temp+1]
        prev=temp

    return arr2                


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    scores_count = int(input())

    scores = list(map(int, input().rstrip().split()))

    arr=[]
    
    temp=-1

    for i in scores:
        if temp!=i:
            temp=i
            arr+=[i]


    alice_count = int(input())

    alice = list(map(int, input().rstrip().split()))

    result = climbingLeaderboard(arr, alice)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
