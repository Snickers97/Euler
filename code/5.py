num1 = 20
while num1 < 1000000000:
	ans = 1
	num2 = 2
	while num2<20:
		if num1%num2 != 0:
			ans = 0
			break
		num2 += 1
	if ans == 1:
		break
	num1 += 20
print(num1)
