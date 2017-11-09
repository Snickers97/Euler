def ispal(i):
	s = str(i)
	s2 = s[::-1]
	if s == s2:
		return 1
	else:
		return 0

num1 = 100
largest = 0
while num1 < 1000:
	num2 = 100
	while num2 < 1000:
		num3 = num1*num2
		if ispal(num3) == 1 and num3 > largest:
			largest = num3
		num2 += 1
	num1 += 1
print(largest)
