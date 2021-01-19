#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the beautifulDays function below.
def beautifulDays(s, e, k):
    arr=0
    for i in range(s,e+1):
        temp=i
        temp2=0
        while temp>0:
            m=temp%10;
            temp2=temp2*10+m
            temp=int(temp/10)
        if(abs(i-temp2)%k==0):
            arr+=1   
    return arr
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    ijk = input().split()

    i = int(ijk[0])

    j = int(ijk[1])

    k = int(ijk[2])

    result = beautifulDays(i, j, k)

    fptr.write(str(result) + '\n')

    fptr.close()
