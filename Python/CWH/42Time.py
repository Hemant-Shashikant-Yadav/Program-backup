import time
print(time.time())

print("Start:", time.time())
time.sleep(2)
print("End:", time.time())

t = time.localtime()
formatted_time = time.strftime("%Y-%m-%d %H:%M:%S", t)
print(formatted_time)