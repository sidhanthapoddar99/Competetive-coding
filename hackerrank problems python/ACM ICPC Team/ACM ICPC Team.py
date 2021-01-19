#!/bin/python3

import math
import os
import random
import re
import sys

def count(m,n):

    k=len(m)
    s=0
    for i in range(k):
        if(m[i]=='1' or n[i]=='1'):
            s+=1
    return s                

# Complete the acmTeam function below.
def acmTeam(topic):

    n=len(topic)
    m=0
    co=0

    for i in range(n):
        for j in range(i+1,n):
            temp=count(topic[i],topic[j])
            if temp>m:
                m=temp
                co=1
            elif temp==m:
                co+=1
    return (m,co)                


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nm = input().split()

    n = int(nm[0])

    m = int(nm[1])

    topic = []

    for _ in range(n):
        topic_item = input()
        topic.append(topic_item)

    result = acmTeam(topic)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
