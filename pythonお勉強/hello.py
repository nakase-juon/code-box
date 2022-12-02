#文字列の表現
print('python-izm')
print("python-izm")

#クォート記号3つで複数行に分けて書くことも可能
test_str = """
test_1
test_2
test_3
test_4
"""
print(test_str)

#文字列の連携は+または+=
test_str1 = 'python'
test_str1 = test_str1 + '_'
test_str1 = test_str1 + 'izm'
print(test_str1)

test_str2 = '012'
test_str2 += '345'
test_str2 += '6789'
print(test_str2)
