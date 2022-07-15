# 2> Write a progran for sum of all digits.

def sumOfDigits(num):
    sum=0
    while(num>0):
        rem=num%10
        sum=sum+rem
        num=num//10
    print(sum)
sumOfDigits(123456)