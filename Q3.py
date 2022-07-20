# 3> Write a program to reverse the Number


def rev(num):
    sum=0
    while(num>0):
        rem=num%10
        num=num//10
        sum= sum*10 + rem
        print(sum)
    print(sum)
    
rev(12632)   