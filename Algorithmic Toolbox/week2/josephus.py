# def josephus(n, k):
#     if n == 1:
#         return 0
#     else:
#         return (josephus(n - 1, k) + k) % n

# # Example usage:
# n = 13  
# k = 3  
# survivor_position = josephus(n, k)
# print("Position of the survivor:", survivor_position)


# another to solve : 
def josephus(n, k):
    # Allocate a Boolean array to track who is alive or dead
    alive_or_dead = [True] * n
    number_of_survivors = n
    current_position = 0
    index = 0

    while True:
        if alive_or_dead[current_position]:
            index += 1
        if index == k:
            number_of_survivors -= 1
            if number_of_survivors == 0:
                return current_position
            else:
                alive_or_dead[current_position] = False
                index = 0
        current_position = (current_position + 1) % n

# Example usage:
n = 13  # Number of rebels
k = 3   # Every 3rd rebel is eliminated
survivor_position = josephus(n, k)
print("Position of the survivor:", survivor_position)
