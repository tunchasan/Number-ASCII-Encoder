## Encoder

The C++ console app' aim is converting given data to char string based on Encode' Rules via Doubly Circular Linked List.

## How does it work?

This program is C ++ console application and will read the file named Numbers.txt when run.
This file will 'contain positive numbers between 0-255 on the line and separate the numbers with a space.
A doubly circular linked list object will be created for each line in the file. Numbers in order
will be read and added to the lists according to the algorithm.

Numbers.txt file content:
#### 82 75 65 83 65 121 65

* The largest GCD (Largest Common Divisor) will initially be zero since no number is read.
* For example, the number 82 is added directly to the list because it is the first number. Largest obeb considered zero It is.
#### | 82 | Largest GCD = 0
* The next number 75 is read.
Since the GCD of 75 and 82 is 1, the largest obeb so far is 0, so it We stay, whichever number is higher, we get the mod 82MOD75 = 7 If a number other than 0 comes to the left side. We move forward as much as the number that comes, if 0 comes, we add the number to the right. Since 7 comes, it will be left 7 times, but if the list is at the top, the element is added there.
#### | 75 | <-> | 82 | Largest GCD = 1 (Until Now)
* The next number 65 is read.
Since 75 65 obeb = 5 5> 1, we stay in this node. 75MOD65 = 10 We are moving 10 steps to the left. Since it comes to the top of the list, we add the new number to the top of the list.
#### | 65 | <-> | 75 | <-> | 82 | Largest GCD = 5
* The next number 83 is read.
Since 65 83 obeb = 1 1 <5, we continue. Since 75 83 obeb = 1 1 <5 we continue. We continue because 82 83 obeb = 1 1 <5, but since the list has come to the end, We're staying.
83MOD82 = move 1 times to the left side.
#### | 65 | <-> | 75 | <-> | 83 | <-> | 82 | Largest GCD = 5
* The next number 65 is read.
Since 65 65 obeb = 65 65> 5, we stay in this node. We add 65MOD65 = 0 to the right of the node.
#### | 65 | <-> | 65 | <-> | 75 | <-> | 83 | <-> | 82 | Largest GCD = 65
* The next number 121 is read.
Since 65 121 obeb = 1 1 <65, we continue. Since 65 121 obeb = 1 1 <65, we continue. Since 75 121 obeb = 1 1 <65, we continue. Since 83 121 obeb = 1 1 <65, we continue.
Since 82 121 obeb = 1 1 <65, we continue. But since the list has come to the end, we stay on this node. 121MOD82 = 39 We are moving 39 steps to the left. We stay there because it comes to the top of the list.
#### |121| <-> | 65 | <-> | 65 | <-> | 75 | <-> | 83 | <-> | 82 | Largest GCD = 65
* The last number 65 is read.
Since 65 121 obeb = 1 1 <65, we continue. We stay because 65 65 obeb = 65 65 = 65. 65MOD65 = 0 we add to the right side of the node.
#### |121| <-> | 65 | <-> | 65 | <-> | 65 | <-> | 75 | <-> | 83 | <-> | 82 | Largest GCD = 65
* Considering that the first line in the file is completed here, the ASCII equivalents of the numbers in the list characters are written on the below. In the example above, when characters corresponding to numbers are as follows.
#### yAAAKSR
### `make`

The console app uses Makefile to manage folder and running processes. So the app can be run via cmd with "make" command on project folder' directory.
