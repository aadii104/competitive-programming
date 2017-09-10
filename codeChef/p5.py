# Input
# The first line of the input contains a single integer T denoting the number of test cases to follow.
# Description of each test case contains 2 lines. The first of these lines contain a single integer N,
# the number of cars. The second line contains N space separated integers, denoting the maximum speed of
# the cars in the order they entered the long straight segment.
#
# Output
# For each test case, output a single line containing the number of cars which were moving at their maximum
# speed on the segment.
#
# Example
# Input:
# 3
# 1
# 10
# 3
# 8 3 6
# 5
# 4 5 1 2 3
#
# Output:
# 1
# 2
# 2
#
# Constraints
# 1 ≤ T ≤ 100
# 1 ≤ N ≤ 10,000
# All speeds are distinct positive integers that fit in a 32 bit signed integer.

tc = int(input())
while tc:
    tc -= 1
    N = int(input())
    speed = [map(int, input().split())]
    maxi = speed[0]
    count = 0
    for i in range(i, len(speed)):
        if speed[i] > maxi:
            count += 1
        else:
                maxi = speed[i]
    print(N - count)
