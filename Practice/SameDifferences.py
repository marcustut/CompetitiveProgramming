# https://codeforces.com/problemset/problem/1520/D
# Explaination: https://www.youtube.com/watch?v=OLYAB8r_7xU

############ ---- Input Functions ---- ############
def inp():
    return(int(input()))


def inlt():
    return(list(map(int, input().split())))


def insr():
    s = input()
    return(list(s[:len(s) - 1]))


def invr():
    return(map(int, input().split()))

# aj - j = ai - i  <- This means if it occurs more than once


t = inp()
while t > 0:
    n = inp()

    # Start with an empty map
    mp = {}
    ans = 0

    arr = inlt()

    # Loop through the array
    for i in range(len(arr)):
        # Create a key in map if not exist
        if arr[i] - i not in mp:
            mp[arr[i] - i] = 0
        # Add the occurences
        ans += mp[arr[i] - i]
        # Increment if occur
        mp[arr[i] - i] += 1

    print(ans)

    t -= 1
