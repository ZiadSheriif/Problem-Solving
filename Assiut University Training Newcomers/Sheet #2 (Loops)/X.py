if __name__ == "__main__":
    t = 1
    t = int(input())
    while t > 0:
        cnt = 0
        n = int(input())
        while n > 0:
            if n % 2 != 0:
                cnt += 1
            n = int(n / 2)
        res = 0
        for i in range(0, cnt):
            res += int(pow(2, i))
        print(f'{res}')
        t -= 1