#!/bin/python

import math
import os
import random
import re
import sys

# Complete the jumpingOnClouds function below.
def jumpingOnClouds(c, k):
    n=len(c)
    p=100
    i=0
    #debug=[]
    while(p>0):
        temp=(i+k)%n
        p-=1
        #debug+=[temp]
        if(c[temp]==1):
            p-=2
        if(temp==0):
           return p
           # return debug    
        i=temp
    return p    


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = raw_input().split()

    n = int(nk[0])

    k = int(nk[1])

    c = map(int, raw_input().rstrip().split())

    result = jumpingOnClouds(c, k)

    fptr.write(str(result) + '\n')

    fptr.close()
