
import random
print('-------- 天天开心系列小游戏之猜数字 --------')
answer = random.randint(1,1000)

print('猜猜我心里的数字,1-1000:')
guess = int(input())
count = 1
while guess!=answer:
    guess = int(input('再给你一次机会重新输入:'))
    count+=1
    if guess > answer:
        print('大了大了!')
    elif guess == answer:
        break
    else:
        print('小了小了!')
print('\n恭喜你猜对了!')
print('但是您猜了%d次才猜出来,次数太多了哦~~' %count)
input()
