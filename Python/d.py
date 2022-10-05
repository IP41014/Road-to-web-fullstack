def solution(n):
    answer = 0
    
    for x in range(n, 0, -1):
        
        if n % x == 1:
            answer = x

    print("무조건 3이 프린트되게")
    
    return answer

print(solution(100))