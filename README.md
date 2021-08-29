# Term 3 8 Queens Assignment by Bosco

I used this to prove that my pseudocode worked as intended.

If you read the code and understand c++ then you'll see that I could have optimized this code to like, 1/8 of the RAM that it already uses with bitwise operators but this is supposed to be a proof of concept for my pseudocode, not a world recording breaking program

# HOW TO TEST

I'm assuming you're one of my school's IST teachers. These steps should be reproducable on Windows 10 with English as its main language

1. Download the exe from [the releases tab](https://github.com/fijcj/term3-assignment/releases)

2. Move the executable to your desktop

3. Open command prompt

4. type cd %userprofile%\Desktop and press enter

5. type queens-windows.exe and press enter

6. Give it the x coordinate, then the y coordinate separated by a space, then click enter. These are the coordinates of the queen

It SHOULD print out a board like structure

The 1s represent spaces which the queen can attack, the 0s represent spaces the queen cannot attack


the coordinate 1,1 is in the top left corner, whereas the coordinate 8,8 is in the bottom right corner


# To build from source.

### Linux
I assume you already have clang or g++ setup just run either

`g++ ./queens.cpp -o ./queens`

Or

`clang++ ./queens.cpp -o ./queens`

### Windows
You will probably need Visual Studio and its MSVC compiler
Open the file with Visual Studio and let it compile

I recommend using MinGW but if you don't already have it setup, just use the Visual Studio compiler. If you already MinGW setup run 

`g++ ./queens.cpp -o ./queens.exe`
