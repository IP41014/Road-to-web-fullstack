"""
def solution(n):
    result = []
    for x in str(n):
        result.append(x)
    return [int(x) for x in result][::-1]

print(solution(12345))
"""


def solution(n):
    answer = 0
    # a = list(map(int, str(n)))
    a = [int(x) for x in str(n)]
    a.sort()
    
    for x in range(len(n)):
        

    return a

print(solution(12301))

"""
a = [1, 5, 2, 3, 9]
a.sort()
print(a)

"""
