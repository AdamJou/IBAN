Programowanie i struktury danych – egzamin<br>

<h3>Napisać pomocnicze biblioteki oraz program główny dla następującego zadania:</h3><br>
Prowadzimy niewielkie przedsiębiorstwo. Nasi pracownicy mają konta bankowe w trzech bankach<br>
internetowych: iPKO, mBank i AliorBank o numerach odpowiednio 1020, 1140 i 2490.<br>
Dany jest plik tekstowy o nazwie podawanej przez użytkownika i nieznanej z góry liczbie wierszy.<br>
Każdy wiersz zawiera wyłącznie numer rachunku bankowego jednego pracownika w formacie<br>
IBAN (opisanym dokładnie niżej).<br>
Księgowa oczekuje list zawierających numery IBAN pracowników (po jednym w każdym wierszu),<br>
osobnych dla każdego banku. Numery kont powinny być posortowane alfanumerycznie. Pliki<br>
wyjściowe (o ile trzeba je tworzyć) powinny się nazywać 1020.txt, 1140.txt i 2490.txt.<br>
Niedozwolone jest korzystanie z kontenerów i algorytmów z biblioteki standardowej C++. Można<br>
stworzyć bibliotekę z abstrakcyjnym typem danych, który pomoże w rozwiązaniu zadania. Można<br>
w bibliotece (niekoniecznie tej samej) umieścić potrzebne struktury/funkcje działające na liczbach i<br>
łańcuchach znaków.<b> W bibliotekach nie wolno umieszczać żadnych operacji działających na
plikach. Zapisu do plików wynikowych nie wolno rozpocząć przed odczytaniem całości pliku
wejściowego.</b>
<br>
<br>
<h3>Informacje dodatkowe: </h3> <br>
Numer IBAN (International Bank Account Number) składa się z dwuliterowego kodu kraju, po którym następują dwie cyfry<br>
sprawdzające (suma kontrolna) i do 30 znaków alfanumerycznych. Decyzja o długości tego bloku należy do poszczególnych krajów,<br>
z tym, że dany kraj musi posiadać jedną, określoną długość. W bloku musi zawierać się unikatowy kod identyfikujący bank, o<br>
określonej długości i określonym miejscu, w którym się on rozpoczyna (jego pozycja i długość również zależy od danego kraju).<br>
Format numerów IBAN dla Polski to:<br>
PLkk BBBB BBBB MMMM MMMM MMMM MMMM<br>
Pierwsze 2 cyfry (kk) to cyfry kontrolne. Następnych 8 cyfr to identyfikator banku (pierwsze 4 cyfry) i oddziału (z czego jego<br>
ostatnia, ósma cyfra jest cyfrą kontrolną, wyliczoną z pozostałych siedmiu). Ostatnie 16 cyfr to numer rachunku.<br>
