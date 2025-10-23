# ❌⭕ Tic-Tac-Toe Game (X-O Game)

A simple console-based **Tic-Tac-Toe** game written in **C++**.  
Two players (X and O) take turns placing their marks on a 3×3 grid — the first to get three in a row wins!

---

## 🎮 Game Overview

- The game board is a 3×3 grid.  
- Two players: **X** and **O**.  
- Players take turns entering their move coordinates.  
- The first player to align three marks horizontally, vertically, or diagonally wins.  
- If all cells are filled with no winner, the game ends in a **draw**.

---

## ⚙️ How It Works

1. The program displays the grid.  
2. The player enters their move as two numbers:  
   - **Row** (1–3)  
   - **Column** (1–3)  
3. The move is validated — if the position is already taken or invalid, the player must try again.  
4. After every move:
   - The grid updates.  
   - The program checks for a **winner** or **draw**.  
5. The game ends when a player wins or when all cells are filled.
