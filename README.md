# Term 3 8 Queens Assignment by Bosco

I used this to prove that my pseudocode worked as intended.

# HOW TO TEST

Download the exe from [the releases tab](https://github.com/fijcj/term3-assignment/releases)

This program must be run from the terminal to do anything.

I'm assuming you're a teacher so you're probably on Windows 10 with English as it's main language

Move the executable to your desktop

Open command prompt

type cd %userprofile%\Desktop

run .\queens.exe

Give it the x coordinate, then the y coordinate separated by a space, then click enter. These are the coordinates of the queen

It SHOULD print out a board like structure

The 1s represent spaces which the queen can attack, the 0s represent spaces the queen cannot attack





# To build from source.

### Linux
I assume you already have clang or g++ setup just run either

`g++ ./queens.cpp -o ./queens`

Or

`clang++ ./queens.cpp -o ./queens`

### Windows
You will probably need Visual Studio and it's MSVC compiler
Open the file with Visual Studio and let it compile

I recommend using MinGW, if you already have this setup, run 

`g++ ./queens.cpp -o ./queens.exe`
