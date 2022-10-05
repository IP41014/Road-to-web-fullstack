def solution(s):
    
    new_s = s.upper()
    a = new_s.count("P")
    b = new_s.count("Y")

    if "P" and "Y" not in new_s:
        return True
    else:
        if a == b:
            return True
        else:
            return False

        
print(solution("pPoooyY"))
print(solution("pPy"))