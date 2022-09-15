def solution(n):
    answer = 0
    
    for x in range(n, 0, -1):
        
        if n % x == 1:
            answer = x
            
    return answer

print(solution(10))