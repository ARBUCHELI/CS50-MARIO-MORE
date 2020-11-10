# CS50-MARIO-MORE (PSET1 CS50 INTRODUCTION TO COMPUTER SCIENCE HARVARD)

## DISCLAIMER: This problem was originally created by Harvard University and the solution presented here is only one of the possible solutions to this problem.

## DISCLAIMER: This repository was created for pedagogical and self-consultation purposes only. No one is recommended to copy the solution presented here because copying may lead to sanctions and violations of the CS50 rules of academic honesty.

<strong>World 1-1</strong>

Toward the beginning of World 1-1 in Nintendo’s Super Mario Brothers, Mario must hop over adjacent pyramids of blocks, per the below.

![screenshot of Mario jumping over adjacent pyramids](https://lab.cs50.io/_site/3239b6b61ad1beb860bccf965c6c49f2e6984b79/mario/more/pyramids.png)

Let’s recreate those pyramids in C, albeit in text, using hashes (#) for bricks, a la the below. Each hash is a bit taller than it is wide, so the pyramids themselves are also be taller than they are wide.

       #  #
      ##  ##
     ###  ###
    ####  ####

The program we’ll write will be called mario. And let’s allow the user to decide just how tall the pyramids should be by first prompting them for a positive integer between, say, 1 and 8, inclusive.

Here’s how the program might work if the user inputs 8 when prompted:

$ ./mario
Height: 8

           #  #
          ##  ##
         ###  ###
        ####  ####
       #####  #####
      ######  ######
     #######  #######
    ########  ########

Here’s how the program might work if the user inputs 4 when prompted:

$ ./mario
Height: 4

       #  #
      ##  ##
     ###  ###
    ####  ####

Here’s how the program might work if the user inputs 2 when prompted:

$ ./mario
Height: 2
   
      #  #
     ##  ##

And here’s how the program might work if the user inputs 1 when prompted:

$ ./mario
Height: 1

      #  #

If the user doesn’t, in fact, input a positive integer between 1 and 8, inclusive, when prompted, the program should re-prompt the user until they cooperate:

$ ./mario
Height: -1
Height: 0
Height: 42
Height: 50
Height: 4

       #  #
      ##  ##
     ###  ###
    ####  ####

Notice that width of the “gap” between adjacent pyramids is equal to the width of two hashes, irrespective of the pyramids’ heights.

Modify mario.c at right in such a way that it implements this program as described!

<strong>INSTRUCTIONS</strong>

1. Download and unzip the repository folder.
2. Open, compile and run the mario.c file in the CS50 IDE to see the project. If you want to run the project in other C compiler you should try to replace the cs50.h library for a function that implements similar functionality. For example [scanf](https://stackoverflow.com/questions/865284/what-is-the-easiest-way-to-get-an-int-in-a-console-app).

# Author: Andrés R. Bucheli.

