def solution(number):
    return sum([int(i) for i in str(number)])

print(solution(1234))

thislist = ["apple", "banana", "cherry"]
print([x for x in thislist])
[print(x) for x in thislist]