import os 
import numpy as np 

N = 100
filename = "output.txt"

# erase existing file 
if os.path.exists(filename):
    os.remove(filename)

print(f"Launching the {N} measures...")

for i in range(N):
    os.system(("{ time ./multiply ; } 2>&1 | grep user | grep -oP '[0-9.]+' | head -n 1 >> " + filename))

# Read results
with open(filename, "r") as f:
    lines = f.readlines()
    if not lines:
        print("ERROR : The file output.txt is empty.")
    else:
        times = [float(line.strip()) for line in lines]

        # Display results
        print(f"\n--- Results for {len(times)} runs ---")
        Q1, Q2, Q3 = np.quantile(times, [0.25, 0.5, 0.75])
        print(f"Minimum   : {np.min(times):.6f}s")
        print(f"Q1        : {Q1:.6f}s")
        print(f"Q2        : {Q2:.6f}s")
        print(f"Q3        : {Q3:.6f}s")
        print(f"Maximum   : {np.max(times):.6f}s")
        
        # Calculate WCET with margin of 20%
        c1 = np.max(times) * 1.2
        print(f"WCET (C1) : {c1:.6f}s")