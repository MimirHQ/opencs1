column = int(input())
row = int(input())
grid = []


def load_crop_data():
    for c in range(column):
        rows = []
        for r in range(row):
            val = int(input())
            rows.append(val)
        grid.append(rows)


def get_row_count():
    return len(grid)


def get_row_length():
    return len(grid[0])


def get_crop_count(row, plot):
    print(grid[row][plot])
