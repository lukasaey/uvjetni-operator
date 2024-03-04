 Sintaksa za uvjetni operator:
`uvjet ? izraz1 : izraz2`

---
Ponašanje uvjetnog operatora u C-u je takvo da prvo evaluira uvjet. 

Ako je uvjet istinit, izračunava se prvi izraz u suprotnom, izračunava se drugi izraz. 

Ovisno o rezultatu uvjeta, jedan od ta dva izraza postaje rezultat cijelog uvjetnog izraza.

---
Uvjetni operator se može usporediti sa if naredbom:
```
int a;
if (uvjet) { a = 0; } else { a = 1; }
a = uvjet ? 0 : 1;
```
