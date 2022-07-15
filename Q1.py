# 1> Write a program to sum of n numbers
from tkinter import N


def funct(num):
    sum= (num*(num+1))/2
    print(sum)

    ## Way 2
    s=0
    i=1
    for i in range(1,num+1):
        s=s+i
        i+1
    print(s)
    
    
funct(6)