import math

'''
def solution(n):
    if type(n**(1/2)) == int(n**(1/2)):
        return (n + 1)**2
    else:
        return -1
'''


def solution(n):
    sqrt = n ** (1/2)
    print(sqrt)

    if sqrt % 1 == 0:
        return (sqrt + 1) ** 2
    return -1

print(solution(121))
print(solution(100))
print(solution(3))

print(type(121**(0.5)))
print(type(math.sqrt(121)))