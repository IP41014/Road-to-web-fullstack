from urllib.request import AbstractDigestAuthHandler


def coffeeorder(n):
    
    for x in range(n):
        coffee = input("커피를 선택하시오(아메리카노, 카페라떼, 카페모카) : " )
        print()
        
        print("1. 물을 준비한다.")
        print("2. 컵을 준비한다.")
        
        while True:
            if coffee == "아메리카노":
                print(coffee, "한 잔 서비스")
                break;
            elif coffee == "카페라떼":
                print(coffee, "한 잔 서비스")
                break;
            elif coffee == "카메모카":
                print(coffee, "한 잔 서비스")
                break;
    
coffeeorder(3)