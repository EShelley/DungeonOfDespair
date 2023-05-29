# DungeonOfDespair
A Reimplementation of the Text based console RPG I created in high school.

When I was learning c++ back in high school I created a text based RPG as my final project for the class.  Frankly while it was a ok project at the time for a beginner, even at time I knew there was tons of room for improvement.

I had tried to implement a "natural language" input but I lacked the knowledge and resources at the time to so.  What I ended up doing was using simple one letter/word/number commands that were displayed on the screen.  
>    For Example:  
>       - (n)orth, (e)ast, (s)outh, (w)est, (i)nventory

When you brought up the inventory it would display similar to this and you used the item number to select the item to use.

> Inventory:
> 1) Health Potion
> 2) Mana Potion
> 3) Key
> 4) Torch  
> Select Item to use or (c)lose>  

One of the other "major problems" with the original game was all of the rooms/descriptions/items etc were all stored in the source code.  Each room was its own function and I used pointers to handle moving between the rooms.  
I cant recall the exact implementation but it was something similar to this below:  
```cpp
class Room {
 public:
  Room(char *name, char *desc) {
    this->Name = name;
    this->Description = desc;
  }
  ~Room() {};
  char *Name;
  char *Description;
// There was implementations for items/objects in the room that could be picked up/interacted with
  Room *North;
  Room *East;
  Room *South;
  Room *West;
}
```  

Then all of the rooms were "initialized"
```cpp
Room *whatever = new Room("Entry","Entry's description\n lkooks like this\n");
Room *whatever2 = new Room("Entry","Entry's description\n lkooks like this\n");
Room *whatever3 = new Room("Entry","Entry's description\n lkooks like this\n");

// Then all of the rooms were linked
whatever->North = whatever2;
whatever->West = whatever3;

whatever2->South = whatever;

whatever3->East = whatever;


```  
Knowing what I know now, it was a nightmare lol.  Sadly the original source code for that project was lost to the sands of time (READ: HDD Failure on my only backup drive).   

  **REMEMBER 1,2,3 BACKUP**

In an attempt to get back into coding in C++ I decided to recreate the project, this time with better features.  Follow along for the journey :)
