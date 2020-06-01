#!/bin/python

import math
import os
import random
import re
import sys

# Complete the appendAndDelete function below.
def appendAndDelete(s, t, k):

    n=len(s)
    m=len(t)
    if(k>(m+n)):
        return "Yes"
    c=0
    for i in range(0,min(m,n)):
        if(s[i]==t[i]):
            c+=1
        else:
            break
    z=m+n-2*c
    #return str(z)
    if(z<=k):
        if((k-z)%2==0):
            return "Yes"
    return "No"                    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = raw_input()

    t = raw_input()

    k = int(raw_input())

    result = appendAndDelete(s, t, k)

    fptr.write(result + '\n')

    fptr.close()
