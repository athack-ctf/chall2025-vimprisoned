## Running This Challenge

1. Build then run docker container

  ```
  # build
  docker build -t athack-ctf/chall2025-vimprisoned:latest .

  # run
  docker run -d --name vimprisoned \
  --hostname vimprisoned \
  -p 52031:22 \
  athack-ctf/chall2025-vimprisoned:latest
  ```

2. Connect to the ssh server using user `zain` (password `zainzain`).

  ```
  ssh -p 52031 zain@localhost
  ```

3. You should now find yourself stuck with vim and a qrcode (ad).

## Updating the flag

If you need to update the flag, you will need to edit `utils/set-flag.c` and rebuilt `bins/set-flag`

```
# run this after edition set-flag.c
gcc utils/set-flag.c -o bins/set-flag && strip bins/set-flag
```
