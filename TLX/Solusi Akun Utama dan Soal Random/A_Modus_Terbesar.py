import statistics
n = int(input())
data = input().split()
modus = statistics.multimode(data)
modus_terbesar = max(modus)
print(modus_terbesar)