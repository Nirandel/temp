1\. Znajdź w swoim katalogu domowym (bez podkatalogów) wszystkie pliki, które zostały zmodyfikowane w ciągu ostatnich dziesięciu dni i wyświetl ich nazwy.

```ssh
find ~/ -mtime -10 -maxdepth 1
```

2\. Znajdź wszystkie pliki zwykłe w systemie, które mają w nazwie ciąg znaków „conf” i wyświetl ich nazwy na ekranie.

```ssh
find -type f -name \*conf\*
```


