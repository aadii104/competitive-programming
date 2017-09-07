
# Neon Number

# A neon number is a number where the sum of digits of square of the number is equal
# to the number.The task is to check and print neon numbers in a range.

def checkNeon (x):
    sq = x*x;
    sum = 0
    while(sq!=0):
        sum = sum + sq%10;
        sq = sq/10
    return (sum == x)

i=1
while i <= 1000:
    if(checkNeon(i)):
        print (i)
    i = i+1