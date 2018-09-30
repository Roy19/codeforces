db = {}

if __name__ == '__main__':
	n = int(input().strip())
	for i in range(n):
		query = input().strip()
		if query in db:
			db[query] += 1
			print(query+str(db[query]))
		else:
			db[query] = 0
			print('OK')