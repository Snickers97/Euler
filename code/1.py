num = 0
sum_ = 0
while num < 1000:
	if num%3 == 0 or num%5 == 0:
		sum_ += num
	num += 1
print(sum_)
