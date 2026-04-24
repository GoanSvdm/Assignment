# Assignment SITR - Scheduling

This project contains the scripts to measure the WCET of task 1 

## Prerequisites
* Operating system : **Linux** (or WSL2)
* Compiler : `g++`
* Python 3.x with library `numpy`

## Installation of outbuildings (Ubuntu/WSL)
```bash
sudo apt update
sudo apt install g++ python3 python3-numpy -y
```

## Execution
### 1. Compilation of script C++
```bash
g++ -O0 multiply.cpp -o multiply
```

### 2. Statistical study with script Python
```bash
python3 projet.py
```





