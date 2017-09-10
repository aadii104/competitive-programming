# There are N horses in the stable. The skill of the horse i is represented by an integer S[i].
# The Chef needs to pick 2 horses for the race such that the difference in their skills is minimum.
# This way, he would be able to host a very interesting race. Your task is to help him do this and
# report the minimum difference that is possible between 2 horses in the race.
#
# Input:
# First line of the input file contains a single integer T, the number of test cases.
# Every test case starts with a line containing the integer N.
# The next line contains N space separated integers where the i-th integer is S[i].
#
# Output:
# For each test case, output a single line containing the minimum difference that is possible.
#
# Constraints:
# 1 ≤ T ≤ 10
# 2 ≤ N ≤ 5000
# 1 ≤ S[i] ≤ 1000000000
#
# Example:
#
# Input:
# 1
# 5
# 4 9 1 32 13
#
# Output:
# 3
# tv = testcases      n = No of input    UI = user inputs 

tc = int(input())
for i in range(0, tc):
    n = int(input())
    UI = input().split()
    UI = sorted([int(i) for i in UI])
    diff = (UI[1] - UI[0])
    for i in range (0,n-1):
        dif = UI[i+1] - UI [i]
        if dif < diff:
            diff = dif
    print(diff)