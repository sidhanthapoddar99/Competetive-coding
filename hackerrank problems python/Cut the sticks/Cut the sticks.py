#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the cutTheSticks function below.
def cutTheSticks(arr):
    #arr=sorted(arr)
    arr.sort()
    temp=0
    b=[]
    n=len(arr)
    for i in range(0,n):
        if(temp<arr[i]):
            b+=[n-i]
            temp=arr[i]
    return b

    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    result = cutTheSticks(arr)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
