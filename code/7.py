import math
def isprime(i):
	test = 2
	prime = 1
	while test<=math.sqrt(i):
		if i%test == 0:
			prime = 0
		test += 1
	return prime

num = 2
counter = 0
while counter<10000:
	if isprime(num) == 1:
		counter += 1
		if counter == 10001:
			break
	if counter == 10001:
		break
	num += 1
print(num)
