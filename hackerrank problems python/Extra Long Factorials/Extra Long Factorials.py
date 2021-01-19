#!/bin/python

import math
import os
import random
import re
import sys

# Complete the extraLongFactorials function below.
def extraLongFactorials(n):
    k=1
    for i in range(1,n+1):
        k*=i
    print(k)     

if __name__ == '__main__':
    n = int(raw_input())

    extraLongFactorials(n)
