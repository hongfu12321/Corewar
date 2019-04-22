# Corewar
A team project involving the construction of a C-language virtual machine mimicking the classic 80s pro- gramming tournament. Three fundamental parts: 
- (a) the creation of a virtual machine interpreter
- (b) parsing that virtual machine’s abstract assembly language
- (c) designing artificial intelligence “champions” who utilize this language to battle one another.

Corewar requires tremendous memory management skills (at the byte level), software architecture, as well as numerous process queues necessary to realize the sequence and output of the battle. Teams utilize a library that they have created from scratch, then collaborate and document their efforts through Github’s documentation markdown. During the project defense, other students “attack” their peer’s code during a functional test code review process.

## Summary
Developers create their own C-language software architecture, which includes
a virtual machine, an assembly language, and artificial intelligences.

## Allowed functions
`malloc`, `free`, `open`, `read`, `lseek`, `write`.

## Screenshot
input .s file then produce .cor file
![asm](https://github.com/hongfu12321/corewar/blob/master/img/asm.png)

Run ./corewar champion1.cor champoin2.cor to get the winner!!
![vm](https://github.com/hongfu12321/corewar/blob/master/img/virtual_machine.png)

Run ./corewar -v champion1.cor champoin2.cor to visulize the progress
![visualization](https://github.com/hongfu12321/corewar/blob/master/img/visualization.png)

## Authors
* **Fu Hong** [hongfu12321](https://github.com/hongfu12321)
* **Maxence Jacques de Dixmude** [maxencejded](https://github.com/maxencejded)
* **Matt Carney** [mecarney](https://github.com/PurpleBooth)
