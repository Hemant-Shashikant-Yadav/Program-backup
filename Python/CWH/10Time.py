import time

time1 = time.gmtime()#USA
print(time1.tm_hour)

time1 = time.localtime()#Local Computers
print(time1.tm_hour)

time_string = time.strftime("%m/%d/%Y, %H:%M:%S", time1)
print(time_string)
