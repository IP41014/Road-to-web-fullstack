def nextSqure(n):

    return n == int(n**.5)**2 and int(n**.5+1)**2 or -1

# return 에서 and 연산자를 쓸 때:
    # 둘 다 참이면 B를
    # 둘 다 거짓이면 A를
    # 둘 중에 하나만 참이면 거짓인 값을 반환한다.

# return 에서 or 연산자를 쓸 때:
    # 둘 다 참이면 A를
    # 둘 다 거짓이면 B를
    # 둘 중에 하나만 참이면 참인 값을 반환한다.
    
print("결과 : {}".format(nextSqure(121)))
print("결과 : {}".format(nextSqure(101)))


# 또는 포문한줄처리
def solution(number):
    return sum([int(i) for i in str(number)])

print(solution(1234))

thislist = ["apple", "banana", "cherry"]
print([x for x in thislist])
[print(x) for x in thislist]