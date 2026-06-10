# Konstruktory i kompozycja klas w C++ / Constructors and Class Composition in C++
 
> 🇵🇱 [Polski] | 🇬🇧 [English] (below)
 
---
 
## 🇵🇱 Opis
 
Projekt z przedmiotu **Programowanie obiektowe** demonstrujący konstruktory, przeciążanie konstruktorów oraz kompozycję klas w C++.
 
### Co robi program
 
Program zawiera kilka niezależnych klas ilustrujących różne koncepcje OOP:
 
- **`KASA_FIS`** – symulacja kasy fiskalnej: przechowuje liczbę produktów i łączną cenę, obsługuje dodawanie produktów i zerowanie stanu
- **`KONTO`** – klasa bankowa z konstruktorem domyślnym i parametrycznym, obsługuje wpłaty i wypłaty
- **`PRZEDMIOT`** – demonstruje przeciążanie konstruktorów (domyślny, jednoargumentowy, dwuargumentowy)
- **`TSilnik` / `TSamochod`** – przykład kompozycji klas: `TSamochod` zawiera obiekt `TSilnik` jako pole; obiekt tworzony dynamicznie przez wskaźnik
### Technologie
 
- C++
- Kompilacja: g++ / dowolny kompilator C++
### Uruchomienie
 
```bash
g++ main.cpp -o program
./program
```
 
---
 
## 🇬🇧 Description
 
A coursework project for **Object-Oriented Programming** demonstrating constructors, constructor overloading, and class composition in C++.
 
### What the program does
 
The program contains several independent classes illustrating different OOP concepts:
 
- **`KASA_FIS`** – a simple cash register simulation: tracks product count and total price, supports adding items and resetting the state
- **`KONTO`** – a bank account class with both a default and a parameterised constructor, supporting deposits and withdrawals
- **`PRZEDMIOT`** – demonstrates constructor overloading (default, single-argument, two-argument)
- **`TSilnik` / `TSamochod`** – an example of class composition: `TSamochod` holds a `TSilnik` object as a member; the car object is created dynamically via a pointer
### Technologies
 
- C++
- Build: g++ / any C++ compiler
### How to run
 
```bash
g++ main.cpp -o program
./program
```
 
---
 
*Projekt studencki / Student project*
