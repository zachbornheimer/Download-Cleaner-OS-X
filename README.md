Download-Cleaner-OS-X
=====================

Auto Delete and Create Downloads Directory in /tmp
Written by Z. Bornheimer (Licensed under the GPLv3)

Compile the software with: `gcc Downloads.c -o Downloads`

Run the following line in the binary's directory:

`echo "$(whoami) ALL=(ALL) NOPASSWD: $(pwd)/Downloads"`


Then run `sudo visudo` and add the line that printed to the screen into the sudoers file.

In System Preferences, go to Users -> Login Items, and add the Download-Workflow item.
