1\. Znajdź w swoim katalogu domowym (bez podkatalogów) wszystkie pliki, które zostały zmodyfikowane w ciągu ostatnich dziesięciu dni i wyświetl ich nazwy.

```
find ~/ -mtime -10 -maxdepth 1
```

2\. Znajdź wszystkie pliki zwykłe w systemie, które mają w nazwie ciąg znaków „conf” i wyświetl ich nazwy na ekranie.

```
find -type f -name \*conf\*
```
lub (do sprawdzenia)

```
find -type f -name \*conf\* 2> /dev/null
```

3\. Znajdź w swoim katalogu domowym wszystkie pliki, które nie były używane w ciągu ostatnich 20 dni.

```
find . -atime +20 -type f
```

4\. Znajdź w katalogu /etc wszystkie niepuste podkatalogi i pliki o nazwach zaczynających się na literę „a”.

```

```

5\. Z bieżącego katalogu usuń pliki, których nazwa zaczyna się na literę „x” i zawiera dokładnie trzy znaki.

```
rm x??
```

// Uważaj na polecenie ``` rm * ``` - polecenie kasuje wszystko (poza opcją) (do wyjasnienia)


6\. Skonstruuj polecenie tworzące katalog, którego nazwą będzie aktualna (w momencie wywołania) systemowa data w formacie rrrr-mm-dd.

```
mkdir `date +%Y-%m-%d`
```
