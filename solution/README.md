# Solution

**TL;DR.** Use `vim` to escape `vim`.

1. Override the shell env variable (using vim's `set` command).
    ```
    # press escape, then type command, then enter
    :set shell=/bin/bash
    ```

2. Navigate `zain`'s home while making sure to use absolute paths for all commands (since the `PATH` variable has been
   unset).
   At some point you should realize the existence of `/home/zain/hint.txt`.
    ```
    # press escape, then type command, then enter
    :!/bin/cat /home/zain/hint.txt
    ```
4. It reads "_The flag is hidden in an env variable. You have to find it by your own._"

5. Now, as the hint indicates, we list all env variables to reveal the flag.
    ```
    # press escape, then type command, then enter
    :!/bin/env | /bin/grep ATHACKCTF
    ```

## Note

I decided to hide the flag in an arbitrary env variable (with an unguessable name) to avoid solves
where participants simply use vim's built-in features to read files from the file system or echo the value of
an env variable when its name is known.
