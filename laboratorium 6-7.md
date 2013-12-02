Laboratorium 6

Zadanie 1. W pliku „plik.txt” znajdź wiersze zawierające co najmniej jeden znak.

```
grep "[:alnum:]{1,}" plik.txt
```


Zadanie 2. Znajdź w plikach „pl*” wiersze rozpoczynające się od cyfry.

```
 grep ^[0-9] pl*
```

Zadanie 3. Znajdź pliki, w których na 9 pozycji występuje litera „r”.

```
 grep -E '^.{8}r.*'
```

Zadanie 4. Policz, ilu użytkowników systemu używa powłoki bash (zgodnie z zapisami w pliku /etc/passwd).

 ```
 grep -c bash /etc/passwd
```

Zadanie 5. Znajdź wiersze zawierające liczby rzymskie w pliku „plik.txt”.

```
 grep [IVXLCDM] plik.txt
```


