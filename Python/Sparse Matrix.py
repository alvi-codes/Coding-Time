u = [0, 1, 2, 3, 0, 1, 2, 3, 2, 1]
v = [1, 3, 0, 1, 2, 1, 2, 2, 1, 2]

correct_solution = [
    [1, 2],
    [3, 1, 2],
    [0, 2, 1],
    [1, 2]
]

print(correct_solution)

row = [[],[],[],[]]
#  row = [[] for _ in range(n)] with n being the number of lists inside

def compressed_sparse_row_format():
    for i in range(len(u)):
        row[u[i]].append(v[i])

compressed_sparse_row_format()
print(row)

def solution_is_correct(row):
    if len(row)!=4:
        return False
    for i in range(4):
        if len(row[i])!=len(correct_solution[i]):
            return False
        x = sorted(row[i])
        y = sorted(correct_solution[i])
        if any(x[j]!=y[j] for j in range(len(x))):
            return False
    return True

print(solution_is_correct(row))