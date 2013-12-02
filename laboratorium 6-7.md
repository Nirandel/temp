Laboratorium 6

Zadanie 1. W pliku „plik.txt” znajdź wiersze zawierające co najmniej jeden znak.

```
grep "[[:alnum:]{1,}]" testowy.txt
```

Wersja poprawiona:


```
 grep -n "[^[:space:][:cntrl:]]" testowy.txt
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





Laboratorium 7

Zadanie 3. Napisać skrypt zbierający jak najwięcej informacji o użytkowniku, którego login jest argumentem skryptu. Jeżeli skrypt nie ma argumentu, to należy użyć login osoby uruchamiającej skrypt. Użycie: ./nazwa.sh argument

```
 #!/bin/bash
if [ "$1" == "" ]
then
  echo "Użycie skryptu $0 błędne. Prawdopodbnie nie podałes argumentu"
  exit 1
fi
  login=$1
  echo 'Witaj' $login
  echo 'Zalogowano jako: ' $USER
  echo 'Host: ' $HOSTNAME
  echo 'System: ' $OSTYPE
  echo 'Aktualny katalog: ' $PWD
  echo 'Powloka: ' $SHELL
  echo 'Domyślny edytor: ' $EDITOR
  
```  

Zadanie 4

Napisz skrypt usuwający z katalogu domowego i jego podkatalogów wszystkie pliki zwykłe o nazwie 'core' starsze niż 3 dni.

```
#!/bin/bash

`find ~ -name "core" -ctime +3  -type f | xargs -I file rm "$file" `

echo "Pliki zstarsze niz 3 dni zostaly usuniete"
```
