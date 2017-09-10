# A man with name M is allowed to marry a woman with name W, only if M is a subsequence of W or W is a
# subsequence of M.
#
# A is said to be a subsequence of B, if A can be obtained by deleting some elements of B without changing
# the order of the remaining elements.
#
# Your task is to determine whether a couple is allowed to marry or not, according to Archer's rule.
#
# Input
# The first line contains an integer T, the number of test cases. T test cases follow. Each test case
# contains two space separated strings M and W.
#
# Output
# For each test case print "YES" if they are allowed to marry, else print "NO". (quotes are meant for
# clarity, please don't print them)
#
# Constraints
# 1 ≤ T ≤ 100
# 1 ≤ |M|, |W| ≤ 25000 (|A| denotes the length of the string A.)
# All names consist of lowercase English letters only.
#
# Example
# Input:
# 3
# john johanna
# ira ira
# kayla jayla
#
# Output:
# YES
# YES
#

tc = int(input())
while tc:
    tc -= 1
    n1 = input()
    n2 = input()
    
