def josephus(n, k):
    if n == 1:
        return 0
    else:
        return (josephus(n - 1, k) + k) % n

# Example usage:
n = 13  
k = 3  
survivor_position = josephus(n, k)
print("Position of the survivor:", survivor_position)
