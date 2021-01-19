#!/bin/python

import math
import os
import random
import re
import sys

# Complete the findDigits function below.
def findDigits(n):
    t=n
    arr=[-1 for i in range(10)]
    arr[0]=0
    k=0
    while t>0:
        m=t%10
        t=int(t/10)
        if(arr[m]==-1):
            if(n%m==0):
                arr[m]=1
            else:
                arr[m]=0
        k+=arr[m]
    return k                

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(raw_input())

    for t_itr in xrange(t):
        n = int(raw_input())

        result = findDigits(n)

        fptr.write(str(result) + '\n')

    fptr.close()
