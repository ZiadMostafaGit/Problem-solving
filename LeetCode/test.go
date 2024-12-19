package main

import (
	"fmt"
)

// SolveSudoku solves the given Sudoku puzzle using backtracking
func SolveSudoku(board [][]int) bool {
	row, col := findEmpty(board)
	if row == -1 && col == -1 {
		return true // no empty cell left, puzzle solved
	}

	for num := 1; num <= 9; num++ {
		if isValid(board, row, col, num) {
			board[row][col] = num // place the number

			if SolveSudoku(board) {
				return true
			}

			board[row][col] = 0 // backtrack
		}
	}

	return false
}

// findEmpty finds the first empty cell (marked as 0)
func findEmpty(board [][]int) (int, int) {
	for i := 0; i < 9; i++ {
		for j := 0; j < 9; j++ {
			if board[i][j] == 0 {
				return i, j
			}
		}
	}
	return -1, -1
}

// isValid checks if placing num at board[row][col] is valid
func isValid(board [][]int, row, col, num int) bool {
	// Check row
	for j := 0; j < 9; j++ {
		if board[row][j] == num {
			return false
		}
	}

	// Check column
	for i := 0; i < 9; i++ {
		if board[i][col] == num {
			return false
		}
	}

	// Check 3x3 subgrid
	boxRow, boxCol := row/3*3, col/3*3
	for i := 0; i < 3; i++ {
		for j := 0; j < 3; j++ {
			if board[boxRow+i][boxCol+j] == num {
				return false
			}
		}
	}

	return true
}

// printBoard prints the Sudoku board
func printBoard(board [][]int) {
	for i := 0; i < 9; i++ {
		for j := 0; j < 9; j++ {
			fmt.Printf("%d ", board[i][j])
		}
		fmt.Println()
	}
}

func main() {
	// Example Sudoku puzzle (0 represents empty cells)
	board := [][]int{
		{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9},
	}

	fmt.Println("Original Sudoku:")
	printBoard(board)

	if SolveSudoku(board) {
		fmt.Println("\nSolved Sudoku:")
		printBoard(board)
	} else {
		fmt.Println("\nNo solution exists.")
	}
}
