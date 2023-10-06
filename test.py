import sys
import math

def play_game(n, s):
    mex = 0  # Initialize the mex
    last = -1  # Initialize the last number added by Alice

    for i in range(n):
        if s[i] > mex:
            # If the current number in the set is greater than mex, add mex+1 to the set
            mex += 1
            print(mex)
            sys.stdout.flush()
            last = -1
        else:
            # If the current number is not greater than mex, add it to the set
            print(s[i])
            sys.stdout.flush()
            last = -1

        # Bob's move
        y = int(input())
        
        if y == -1:
            return
        
        if y == -2:
            # Invalid query, terminate
            return

    # Continue adding numbers to the set until the game ends
    while True:
        mex += 1
        print(mex)
        sys.stdout.flush()
        last = -1
        y = int(input())
        
        if y == -1:
            return

t = int(input())
for _ in range(t):
    n = int(input())
    s = list(map(int, input().split()))
    play_game(n, s)
