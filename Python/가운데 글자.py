def solution(s):
    a = len(s) // 2
    if len(s) % 2 != 0:
        return s[a]
    else:
        return s[a - 1:a + 1]

print(solution("abcde"))


def string_middle(str):
    # 함수를 완성하세요

    return str[(len(str)-1)//2:len(str)//2+1]

print(string_middle("powe"))