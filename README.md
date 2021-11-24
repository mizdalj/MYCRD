# Made by MIZDAL Jakub

# How to use this program

To start you need to generate commands lists using the commands generator.
To do so you have to run the python program by typing: "python commands-generator.py" in your terminal.

Then simply use the Makefile to generate all the binaries using the command "make".
Once the Makefile's job is done, you will find the compiled project in the Release folder.

To run the program use the command: ./Release/my_crd < <Commands-list>.
Replace <Command-list> by the name of the commands file you want to use, for example: "./Release/my_crd < medium-commands.lst"


# How it works

Commands generated all follows a similar pattern:
<key> or <key> <value> or <key> <D>

<key> = the search function: the program reads the key and checks if the key is already present in the binary tree; if the key exists, returns its value, if not returns -1.

<key> <value> = the create or update function: searches for the key, if it exists updates the value and returns it; if not creates a new node and returns the value.

<key> <D> = the delete function: searches for the key: if it exists, returns its value and deletes the node; otherwise it returns -1;
