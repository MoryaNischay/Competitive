def findLowestStartingStair(jumps):

    #calculating sum of all jumps, not including first stair

    startingStair = -1 + sum(jumps)

    #if last jump is negative, adding last jump to startingStair

    if jumps[len(jumps)-1] > 0:

        startingStair -= jumps[len(jumps)-1]

    #absolute value of the startingStair is the lowest starting stair

    return abs(startingStair)



if __name__ == "__main__":

    #reading n value

    n = int(input())

    #an empty list for storing jumps

    jumps = []

    #iterating n times

    for j in range(n):

        #reading a jump and adding to jumps list

        jump = int(input())

        jumps.append(jump)

    print(findLowestStartingStair(jumps))