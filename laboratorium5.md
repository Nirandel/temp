1\. Znajdź w swoim katalogu domowym (bez podkatalogów) wszystkie pliki, które zostały zmodyfikowane w ciągu ostatnich dziesięciu dni i wyświetl ich nazwy.

```ssh
find ~/ -mtime -10 -maxdepth 1
```

2\. Znajdź wszystkie pliki zwykłe w systemie, które mają w nazwie ciąg znaków „conf” i wyświetl ich nazwy na ekranie.

```ssh
find -type f -name \*conf\*
```
lub (do sprawdzenia)

```ssh
find -type f -name \*conf\* 2> /dev/null
```

3\. Znajdź w swoim katalogu domowym wszystkie pliki, które nie były używane w ciągu ostatnich 20 dni.

```ssh
find . -atime +20 -type f
```

4\. Znajdź w katalogu /etc wszystkie niepuste podkatalogi i pliki o nazwach zaczynających się na literę „a”.

```ssh

```

5\. Z bieżącego katalogu usuń pliki, których nazwa zaczyna się na literę „x” i zawiera dokładnie trzy znaki.

```ssh
rm x??
```

// Uważaj na polecenie ```ssh rm * ``` - polecenie kasuje wszystko (poza opcją) *(do wyjasnienia)*
