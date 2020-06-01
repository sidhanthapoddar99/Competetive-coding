#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the repeatedString function below.
def repeatedString(s, n):
    k=s.count('a')
    m=len(s)
    z=int(n/m)
    c=z*k
    l=n-z*m
    s=list(s)
    for i in range(l):
        if s[i]=='a':
            c+=1
    return c        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    n = int(input())

    result = repeatedString(s, n)

    fptr.write(str(result) + '\n')

    fptr.close()
