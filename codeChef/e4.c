// All submissions for this problem are available.
// Little kids, Jack and Evan like playing their favorite game Glass-and-Stone. Today they want to play something new and came across Twitter on their father's laptop.

// They saw it for the first time but were already getting bored to see a bunch of sentences having at most 140 characters each. The only thing they liked to play with it is, closing and opening tweets.

// There are N tweets on the page and each tweet can be opened by clicking on it, to see some statistics related to that tweet. Initially all the tweets are closed. Clicking on an open tweet closes it and clicking on a closed tweet opens it. There is also a button to close all the open tweets. Given a sequence of K clicks by Jack, Evan has to guess the total number of open tweets just after each click. Please help Evan in this game.

// Input
// First line contains two integers N K, the number of tweets (numbered 1 to N) and the number of clicks respectively (1 ≤ N, K ≤ 1000). Each of the following K lines has one of the following.
// CLICK X , where X is the tweet number (1 ≤ X ≤ N)
// CLOSEALL

// Output
// Output K lines, where the ith line should contain the number of open tweets just after the ith click.

// Example
// Input:
// 3 6
// CLICK 1
// CLICK 2
// CLICK 3
// CLICK 2
// CLOSEALL
// CLICK 1

// Output:
// 1
// 2
// 3
// 2
// 0
// 1

#include <stdio.h>
int main()
{
    int n, k, count = 0;
    scanf("%d%d", &n, &k);
    int a[n], i, x;
    for (i = 0; i < n; i++)
        a[i] = 0;
    char b[8];
    for (i = 0; i < k; i++)
    {
        scanf("%s%d", b, &x);
        if (b[2] == 'I')
        {
            if (a[x - 1] = 1)
            {
                count--;
                a[x - 1] = 0;
            }
            else
            {
                a[x - 1] = 1;
            }
        }
        else if (b[2] == 'O')
        {
            int I;
            for (I = 0; I < n; I++)
                a[I] = 0;
            count = 0;
        }
        printf("%d\n", count);
    }
    return 0;
}