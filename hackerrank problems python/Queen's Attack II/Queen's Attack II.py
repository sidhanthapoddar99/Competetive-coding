import math
import os
import random
import re
import sys

def check(cl,ch,arr):
    a=[cl,ch]
    if (a in arr):
        return 0
    return 1    


def cond(ncl,nch,arr,d):
    
    if (ncl<=d) and (ncl>0) and (nch<=d) and (nch>0):
        
        if check(ncl,nch,arr)==1:
            return 1
    return 0        


def calc(cl,ch,l,h,d,arr):
    s=0
    cl+=l
    ch+=h
    f=cond(cl,ch,arr,d)
    while f==1:
        cl+=l
        ch+=h
        s+=1
        f=cond(cl,ch,arr,d)

    return s



# Complete the queensAttack function below.
def queensAttack(d, k, cl, ch, arr):

    s=0
    
    for i in range(-1,2,1):
        for j in range(-1,2,1):
            if not(i==0 and j==0):
                s+=calc(cl,ch,i,j,d,arr)

    return s




if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = int(nk[0])

    k = int(nk[1])

    r_qC_q = input().split()

    r_q = int(r_qC_q[0])

    c_q = int(r_qC_q[1])

    obstacles = []

    for _ in range(k):
        obstacles.append(list(map(int, input().rstrip().split())))

    result = queensAttack(n, k, r_q, c_q, obstacles)

    fptr.write(str(result) + '\n')

    fptr.close()
