t = int(input())

h = int((t / 3600))
m = int(((t % 3600) / 60))
s = int((t % 60))

print("{}:{}:{}".format(h, m, s))