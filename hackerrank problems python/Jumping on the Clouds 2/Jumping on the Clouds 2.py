#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the jumpingOnClouds function below.
def jumpingOnClouds(c):
    n=len(c)
    jmp=0
    i=0
    while(i<n-1):
        if i<n-2:
            if c[i+2]==1:
                i+=1
                jmp+=1
            else:
                i+=2
                jmp+=1
        else:
            i+=2
            jmp+=1
    return  jmp           





if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    c = list(map(int, input().rstrip().split()))

    result = jumpingOnClouds(c)

    fptr.write(str(result) + '\n')

    fptr.close()