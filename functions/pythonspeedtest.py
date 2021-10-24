import datetime
import time
start_time = datetime.datetime.now()

x = 0

for i in range(10000000):
	x+=1


end_time = datetime.datetime.now()
print(end_time - start_time)
