package main

func isValidSudoku(board [][]byte) bool {

	frec := make([]int, 10, 10)
	for i := 0; i < 9; i++ {

		for j := 0; j < 9; j++ {

			if board[i][j] == '.' {
				continue
			}

			frec[board[i][j]-'0']++

			//check for each row
		}
		for k := 0; k <= 9; k++ {
			if frec[k] > 1 {
				return false
			}
		}

		for s := 0; s <= 9; s++ {
			frec[s] = 0
		}

	}

	for i := 0; i < 9; i++ {

		for j := 0; j < 9; j++ {

			if board[j][i] == '.' {
				continue
			}

			frec[board[j][i]-'0']++

			//check for each row
		}
		for k := 0; k <= 9; k++ {
			if frec[k] > 1 {
				return false
			}
		}

		for s := 0; s <= 9; s++ {
			frec[s] = 0
		}

	}

	for col := 0; col < 9; col += 3 {
		for row := 0; row < 9; row += 3 {

			for i := row; i < row+3; i++ {
				for j := col; j < col+3; j++ {

					if board[i][j] == '.' {
						continue
					}
					frec[board[i][j]-'0']++

				}
			}

			for k := 0; k <= 9; k++ {
				if frec[k] > 1 {
					return false
				}
			}

			for s := 0; s <= 9; s++ {
				frec[s] = 0
			}

		}
	}

	return true
}
