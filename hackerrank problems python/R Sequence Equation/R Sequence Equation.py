#!/bin/python

import math
import os
import random
import re
import sys

# Complete the permutationEquation function below.
def permutationEquation(p):
    a=[0]+p
    temp=[0 for i in range(0,len(a))]
    for i in range(0,len(a)):
        temp[a[i]]=i

    
    for i in range (0,len(p)):
        p[i]=temp[p[i]]
    for i in range (0,len(p)):
        p[i]=temp[p[i]]
    for i in range (0,len(p)):
        p[i]=temp[p[i]]    
    return p        



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input())

    p = map(int, raw_input().rstrip().split())

    result = permutationEquation(p)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
