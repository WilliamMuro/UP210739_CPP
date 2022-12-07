<h1 align=center>
UPA<br><sup><sub>Computer Systems Engineering</sub></sup>
</h1>
<br>

### Contributors to this repository:
César William Muro Hernández<br>["UP210739"](https://github.com/UP210739)
<br>

Yahir Garcia Alba<br>["UP210246"](https://github.com/UP210246)
<br>

Isaias Moreno Luna<br>["UP210644"](https://github.com/UP210644)
<br>
<br>

<h1 align=center>
Connect 4
</h1>
<br>

<div align ="center">
<img src="/Image/C4.jpg"/>
</div>
<br>

### README.md from Unit 4
In this folder you will find the game "CONNECT 4" [(connect4.cpp)](https://github.com/UP210739/UP210739_CPP/blob/main/U4/connect4.cpp) written in the C++ programming language, it is a game for 2 players in which each player takes turns trying to create a line of 4 tiles in a row and at the same time avoiding another player gets it first.
<br>
<br>
<br>

# Index
<br>

[ 1- Execution instructions.](https://github.com/UP210739/UP210739_CPP/tree/main/U4#execution-instructions) 

*   [Use and general considerations](https://github.com/UP210739/UP210739_CPP/tree/main/U4#use-and-general-considerations)

[3- Flowchart](https://github.com/UP210739/UP210739_CPP/tree/main/U4#flowchart)  

[4-Development and explanation](https://github.com/UP210739/UP210739_CPP/tree/main/U4#flowchart)  


[5- Closure](https://github.com/UP210739/UP210739_CPP/tree/main/U4#conclusion)  
<br>
<br>

# Execution instructions
<br>

### Instructions for Windows 

1. Download or clone my repo with the following command in the terminal:
   
```
"git clone https://github.com/UP210739/UP210739_CPP.git"
```

2. Download and install the compiler in this link https://sourceforge.net/projects/mingw/files/OldFiles/ 
3. Open the terminal at the direction of the file with the command:

```
cd C:\Documents\...
```

4. To compile use command:

```
gcc  04_Connect4.cpp -o 04_Connect4.exe
```

5. To run type this code:

```
04_Connect4.exe
```
<br>

### Instructions for Linux 

1. Download or clone my repo with the following command in the terminal:
   
```
"git clone https://github.com/UP210739/UP210739_CPP.git"
```

2. Install GNU c/c++ compiler, open the terminal and type:

```
$ sudo apt-get update
$ sudo apt-get install build-essential manpages-dev
```

3. To compile this program, type:

```
gcc 04_Connect4.c -o 04_Connect4
```

4. To run this program, type:
   
```
./04_Connect4
```
<br>

### Use and general considerations
When you start the program, the home screen will be displayed and you will be asked to enter the name of the players.
<br>

The board will then be displayed and you will be asked to enter a number from 1 to 7 indicating the column you want to place the token in.
<br>

If you select an entire column, it will ask you to select a number again.
When any player wins, the game ends and it will ask you if you want to play.

<br>
<div align="center">


<img src=" imagen/../../Image/jugada%20en%201.png"  height = 198>
 </div></br>

<div align="center">
<h2>

[Return to Index](#index)
</h2>
</div>
<br>

# Flowchart
<br>

<div align ="center">
<img src="/Image/C4F.jpg"/>
</div>
<br>

<div align ="center">
This flowchart explains through figures the functions<br>used in the Connect 4 game code.
</div>
<br>
<br>

<div align="center">
<h2>

[Return to Index](#index)
</h2>
</div>
<br>

# Development and explanation

### Execution instructions of code execution

<br>
<br>
<div align="center">

First it shows us the beginning of the game asking us what is the name of the first player
  

<img src=" image/../../Image/inicio.png"  height = 150>
</div></br></br>

<div align="center">

After putting the first name and hitting enter, you put the name of the second player

<img src=" imagen/../../Image/nombreJugadores.png"  height = 167 >
 </div></br></br>

<div align="center">

The first player put an "X" in box 1

<img src=" imagen/../../Image/jugada%20en%201.png"  height = 198>
 </div></br></br>

<div align="center">

The second player put an "0" in box 3

<img src=" imagen/../../Image/jugada%202.png"  height = 199>
 </div></br></br>

<div align="center">

In order to win you have to play connect and one way to do it is from the bottom up or from the top down, as the example shows in box 1, then it asks you if you want to start the game again

<img src=" imagen/../../Image/ganar4.png"  height = 237>
 </div></br></br>

<div align="center">

After putting the number 1 to restart the game, it immediately asks us for the move of the player who lost to update the board and continue playing


<img src=" imagen/../../Image/reiniciooo.png"  height = 238>
 </div></br></br>


<div align="center">

It is another possibility to win is the left diagonal

<img src=" imagen/../../Image/izquierda.png"  height = 236>
 </div></br></br>

 <div align="center">

And finally the possibility of winning by the right diagonal and the completion of the program if we put the number 1

<img src=" imagen/../../Image/final.png"  height = 257>
 </div></br></br>
<br>

<div align="center">
<h2>

[Return to Index](#index)
</h2>
</div>
<br>

# Conclusion
<br>

### With this project we completed unit 4 of the 3er quarter, we learned many new functions and codes that were used in every project that was done in the quarter. Everything we learned will be of great help for future work. In this project there were many complications as for example when making the table of the connecting 4, there were also complications when moving the texts to the side of the table but it was possible to reach the desired project. Thank you our master for having
<br>


<div align="center">
<h2>

[Return to Index](#index)
</h2>
</div>
<br>
