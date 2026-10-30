n = abs(float(input()))
if 0 < n < 1:
     print("Это число не является палиндромом")
else:
    if n == int(n):
        n = int(n)
    else:
        while n != int(n):
            n*=10
    n_len = 0
    n_temp = n
    n_left = n
    n_right = 0
    while n > 0:
        n //= 10
        n_len+=1
    for i in range((n_len+1)//2):
            n_left //= 10
    for g in range(n_len//2):
        n_right = n_right*10 + n_temp%10
        n_temp//=10
    if n_left == n_right:
        print("Это число является палиндромом")
    else:
        print("Это число не является палиндромом")
    print(n_left, n_right) #Для проверки