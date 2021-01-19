#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the beautifulTriplets function below.
def beautifulTriplets(d, arr):

    x=max(arr)

    a=[0 for i in range(0,x+1)]

    for i in arr:
        a[i]+=1

    sum=0

    i=0
    m=2*d
    z=x+1-m

    while(i<z):
        sum+=a[i]*a[i+d]*a[i+m]
        i+=1
    return sum

    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nd = input().split()

    n = int(nd[0])

    d = int(nd[1])

    arr = list(map(int, input().rstrip().split()))

    result = beautifulTriplets(d, arr)

    fptr.write(str(result) + '\n')

    fptr.close()
