from re import I


def comparing(li):
    
    loopcount = 0
    
    for y in range(4):
        i = 0

        loopcount += 1
        print("{}바퀴 돌았을 때".format(loopcount))
        for x in range(4):

            if li[i] >= li[i + 1]:
                savedvalue = li[x]
                li[i] = li[i + 1]
                li[i + 1] = savedvalue

            i += 1
            print(li)


    return li

print(comparing([4, 3, 5, 1, 2]))