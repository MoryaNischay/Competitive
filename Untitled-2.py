import math

def getidealnums(low,high):
    max_x=math.floor(math.log(high,3))
    max_y=math.floor(math.log(high,5))
    count = 0
    for x in range(max_x+1):
        for y in range(max_y+1):
            num = 3*x * 5*y
            if num >= low and num <= high:
                count += 1
    return count
    
    

print (getidealnums(1,1))