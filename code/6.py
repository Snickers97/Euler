sum1 = 0
square = 0
num = 1
while num<=100:
	sum1 += num*num
	num += 1
num = 1
while num<=100:
	square += num
	num += 1
square = square*square
num = square-sum1
print(num)
