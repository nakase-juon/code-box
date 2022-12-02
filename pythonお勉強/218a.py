n = input()
list = input()
if list[int(n)-1] == 'o': #nは文字として認識されてるためint型に直す必要がある
    print('Yes')
else:
    print('No')