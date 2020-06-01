    #!/bin/python

import math
import os
import random
import re
import sys

# Complete the libraryFine function below.
def libraryFine(*args):

    arr=[15,500,10000]

    for i in range (5,2,-1):
        z=args[i-3]-args[i]
        if z>0:
            return z*arr[i-3]
        if z<0:
            return 0
    return 0  

def libraryFine2(d2, m2, y2, d1, m1, y1):
    
    if(y2>y1):
        return (y2-y1)*10000
    if(y2<y1):
        return 0    
    if(m2>m1):
        return (m2-m1)*500
    if(m2<m1):
        return 0     
    if(d2>d1):
        return (d2-d1)*15
    return 0            

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    d1M1Y1 = raw_input().split()

    d1 = int(d1M1Y1[0])

    m1 = int(d1M1Y1[1])

    y1 = int(d1M1Y1[2])

    d2M2Y2 = raw_input().split()

    d2 = int(d2M2Y2[0])

    m2 = int(d2M2Y2[1])

    y2 = int(d2M2Y2[2])

    result = libraryFine(d1, m1, y1, d2, m2, y2)

    fptr.write(str(result) + '\n')

    fptr.close()
