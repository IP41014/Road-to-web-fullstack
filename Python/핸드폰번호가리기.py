def solution(phone_number):
    a = [x for x in phone_number]
    i = 0
    for x in range(len(a) - 4):
        a[i] = "*"
        i += 1
    a = "".join(a)
    return a

print(solution("01033334444"))