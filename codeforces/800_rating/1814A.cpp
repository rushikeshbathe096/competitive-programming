/*
Problem: Coins

Description:
In Berland, there are two types of coins with denominations 2 and k burles. Given an integer n, determine whether it is possible to represent n burles using these coins, i.e., whether there exist non-negative integers x and y such that 2·x + k·y = n.

Input:
t test cases. For each test case:- Two integers n and k, where 1 ≤ k ≤ n ≤ 10^18 and k ≠ 2.

Output:
For each test case:- Print "YES" if it is possible to represent n burles using coins of denominations 2 and k, otherwise print "NO".

Approach:
If k is odd, the answer is always YES since any parity can be adjusted using 2-burle coins; if k is even, n must be even because both coin denominations are even.
*/
