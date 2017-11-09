import math
ins = open("bignum.txt", 'r')
bignum = ""
while True:
	tmp = ins.readline()
	if tmp == "":
		break
	bignum += tmp[0:50]

numbers = [int(bignum[0])]
for i in range (1, 1000):
	numbers.append(int(bignum[i]))
	i += 1

product = [1]
for i in range (0, 1000):
	product.append(1)
	for j in range (0, 13):
		if i+j < 1000:
			product[i] *= numbers[i+j]
		j += 1
	i += 1

print(max(product[0:1000]))
