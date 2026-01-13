# Bottom-Right Inward Spiral Matrix

This project implements a matrix traversal algorithm that creates a spiral pattern starting from the **end** of the matrix boundaries.

## ⚙️ Path Logic

1.  **Start Point:** Bottom-Right Corner ($N-1, N-1$)
2.  **Direction Flow:**
    * $\uparrow$ **Up** (Rightmost available column)
    * $\leftarrow$ **Left** (Topmost available row)
    * $\downarrow$ **Down** (Leftmost available column)
    * $\rightarrow$ **Right** (Bottommost available row)

## 🚀 Example Output (N=3)

Matches the 4th pattern in the problem set:

| 5 | 4 | 3 |
|---|---|---|
| 6 | 9 | 2 |
| 7 | 8 | **1** |

* **1 -> 3:** Goes Up
* **3 -> 5:** Goes Left
* **5 -> 7:** Goes Down
* **7 -> 8:** Goes Right...

---
*This repository demonstrates boundary-based matrix filling in C.*
