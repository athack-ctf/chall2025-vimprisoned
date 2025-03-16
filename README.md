# @HACK 2025: Vimprisoned

> Authored by [Anis](https://github.com/AnixPasBesoin).

- **Category**: `Pwn`
- **Value**: `150 points`
- **Tags**: `beginner` `ssh`

> Did you know that "How do I exit Vim?" is the most visited question on StackOverflow?
> 
> Using Zain's SSH credentials (provided below), you will have to break him out of his vimprisonment to get the flag.
> 
> ## Zain's credentials:
> 
> - Username: zain
> - Password: zainzain
> 

## Access a dockerized instance

Run challenge container using docker compose
```
docker compose up -d
```
SSH using given credentials
```
ssh -p 52031 <username>@localhost
```
<details>
<summary>
How to stop/restart challenge?
</summary>

To stop the challenge run
```
docker compose stop
```
To restart the challenge run
```
docker compose restart
```

</details>


## Reveal Flag

Did you try solving this challenge?
<details>
<summary>
Yes
</summary>

Did you **REALLY** try solving this challenge?

<details>
<summary>
Yes, I promise!
</summary>

Flag: `ATHACKCTF{y0u_h4v3_35c4p3d_th3_vim_prison_0xdeadbeef}`

</details>
</details>


---

## About @HACK
[@HACK](https://athackctf.com/) is an annual CTF (Capture The Flag) competition hosted by [HEXPLOIT ALLIANCE](https://hexploit-alliance.com/) and [TECHNATION](https://technationcanada.ca/) at Concordia University in Montreal, Canada.

---
[Check more challenges from @HACK 2025](https://github.com/athack-ctf/AtHackCTF-2025-Challenges).