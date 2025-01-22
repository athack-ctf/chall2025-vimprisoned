# Solution

**TL;DR.** Use `vim` to escape `vim`.

1. Override the shell env variable use vim's `set` command.
    ```
    # press escape, then type command, then enter
    :set shell=/bin/bash
    ```

2. Navigate `ned`'s home using absolute paths for commands (since the `PATH` variable has been unset).
    ```
    # press escape, then type command, then enter
    :!/bin/cat /home/ned/hint.txt
    ```
3. It reads "The flag is hidden in an env variable. You have to find it by your own."

4. Now, as the hint indicates, we list all env variables and the flag should be there.
    ```
    # press escape, then type command, then enter
    :!/bin/env | /bin/grep ATHACKCTF
    ```