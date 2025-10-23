# 🪨📄✂️ Paper Scissors Rock Game

A simple console-based **Rock-Paper-Scissors** game built in **C++**.  
You play against the computer — choose your move, and see who wins!

---

## 🎮 Game Overview

This game allows the player to compete with the computer for a number of rounds.  
Each round, both choose a move:

- `r` → **Rock**  
- `p` → **Paper**  
- `s` → **Scissors**

The computer’s move is randomly generated.

---

## 🏆 Winning Rules

| Player Move | Computer Move | Result |
|--------------|----------------|---------|
| Rock (r)     | Scissors (s)   | Player Wins 🏆 |
| Scissors (s) | Paper (p)      | Player Wins 🏆 |
| Paper (p)    | Rock (r)       | Player Wins 🏆 |
| Same Move    | Same Move      | Draw 🤝 |

---

## ⚙️ How It Works

1. The program asks how many rounds you want to play.  
2. In each round:
   - You enter your move (`r`, `p`, or `s`).  
   - The computer randomly selects a move.  
   - The winner of the round is displayed.
