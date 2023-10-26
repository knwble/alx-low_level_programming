#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    grid (List[List[int]]): A list of lists representing the grid with 0 for water and 1 for land.

    Returns:
    int: The perimeter of the island.

    Constraints:
    - Grid is rectangular, width and height don't exceed 100.
    - Grid is completely surrounded by water, and there is one island (or nothing).
    - The island doesn't have "lakes" (water inside that isn't connected to the water around the island).
    """
    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[0]):
            if grid[row][col] == 1:
                # Count the perimeter around the land cell
                perimeter += 4

                # Check adjacent cells
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter
