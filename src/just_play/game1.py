#
#data 2018.5.26
#writer huangrichao
#module game1.py
#
import random

answer = random.randint(1,100)

print("------game------")
print("plese input your answer:")
guess = int(input())

while guess != 8:
    guess = int(input("wrong,please input again:"))

    if guess == 8:
        print("Congratulation!")
    else:
        if guess > 8:
            print("Sorry,it's bigger!")
        else:
            print("Sorry,it's smaller!")
