# 🎨 GIF Megjelenítő Konzolra

Egy egyszerű, terminálban futtatható C program, amely színes képeket és GIF animációkat jelenít meg szöveges fájlok alapján.

---

# 📘 Használati útmutató

Ez a program színes képek és GIF-ek megjelenítésére szolgál terminálban, háttérszínek használatával. 

## 📁 Fájlok és mappák elhelyezkedése

- A forráskód fájlok a `forraskodok` mappában találhatók.
- A képek `.txt` formátumban a `kepek` mappában vannak.
- A GIF-ek képkockái `.bg[szám]` kiterjesztéssel a `gifek` mappában találhatók.

## ⚙️ Program működése

1. 🟢 Indítsd el a programot (a `main` függvény a `menu`-t hívja meg).
2. A menüben választhatsz:
   - 🖼️ Képek megjelenítése fájlból (`image_print`)
   - 🎬 GIF-ek megjelenítése fájlból (`print_gif`)
   - ❌ Kilépés a programból

3. Ha képet választasz, meg kell adnod a kép nevét (`input`, `smile`, vagy `tree`), amely alapján a program betölti és megjeleníti a képet.
4. Ha GIF-et választasz, meg kell adnod a GIF nevét (`input`), amely alapján a program betölti a képkockákat és egymás után megjeleníti őket.

## 🧠 Fontos függvények és működésük

- `color_print(color c)`  
  A megadott szín háttérrel kiír két szóközt a terminálra, majd visszaállítja a színeket.

- `image_read(char imagename[])`  
  Beolvassa a kép fájlt a megfelelő mappából (`kepek` vagy `gifek`), létrehozza a képmátrixot és feltölti színekkel.

- `image_print(image kep)`  
  Kitörli a képernyőt, majd soronként kiírja a kép színeit, végül felszabadítja a lefoglalt memóriát.

- `read_gif(char gifname[])`  
  Beolvassa a GIF összes képkockáját egy `gif` struktúrába.

- `print_gif(gif jif)`  
  Egymás után megjeleníti a GIF képkockáit, másodpercenként egyet.

## 🛠️ Egyéb hasznos funkciók

- `clear_screen()`  
  A terminál tartalmának törlése és kurzor pozíció visszaállítása.

- `clear_line()`  
  Az aktuális sor törlése és kurzor egy sorral feljebb lépés.

- `no_mem()` és `no_file(filename)`  
   Hibakezelés: memóriafoglalási vagy fájlmegnyitási hiba esetén üzenetet ír ki és kilép.

- `exit_program()`  
  Program biztonságos kilépése.

- `wait_for_enter()`  
  Vár, amíg a felhasználó megnyomja az Entert, majd visszatér a menübe.

## 🧪 Fordítás

Futtasd a következő parancsokat a `forraskodok` mappában:

```bash
gcc -c -W -Wall -Wextra -pedantic .\forraskodok\main.c .\forraskodok\menu.c .\forraskodok\color_print.c .\forraskodok\image_print.c .\forraskodok\image_read.c .\forraskodok\read_gif.c .\forraskodok\print_gif.c .\forraskodok\utils.c
gcc .\main.o .\menu.o .\utils.o .\color_print.o .\image_print.o .\image_read.o .\print_gif.o .\read_gif.o
```

## 📁 Projekt felépítése

```
forraskodok/
├── main.c
├── menu.c
├── color_print.c
├── image_print.c
├── image_read.c
├── read_gif.c
├── print_gif.c
└── utils.c

gifek/
└── input.bg0, input.bg1, ..., input.bg9 (GIF képkockák)

kepek/
├── input.txt
├── smile.txt
└── tree.txt
```


---

## 🛠️ Fordítás és futtatás

A projekt fájljait a `forraskodok` mappában kell fordítani, majd az így kapott objektumfájlokból készül az végrehajtható program.

```
gcc -c -W -Wall -Wextra -pedantic forraskodok/*.c
gcc *.o -o gifmegjelenito
./gifmegjelenito
```

## ▶️ Használat

Klónozd a repót:  

   ```bash
   git clone https://github.com/dekanmate/shopping