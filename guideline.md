
Guideline:

* Je Compile Unit ein Header
* Je Header eine Compile Unit (Implementierung oder/und Test)
* Jeder Header ist eigenständig (angestrebt)
* Keine unnötigen Includes (angestrebt)
* Keine Forward-Deklarationen (contra Compile Time)
* `#pragma once` (A) vs `#ifndef`-Guard (B)
* Reihenfolge der Includes?
    * lokal vor global
* `#include "../xyz.h"` ist verboten

/project
    /moduleB
        /interfaces <- INCLUDE_PATH
            /moduleB
                /math
                    Position.h
    /moduleA
        /mesh
            PolyMesh.h - #include "moduleB/math/Position.h"

* Namespaces == Ordner (A)
* keine verschachtelten Namespaces
* `using namespace moduleA;` nicht in Headern
* Zweckgebundene Namespaces: `using namespace std::literals;` 
* `using std::vector;` - vector ist jetzt verfügbar
* `using Position = moduleA::Position` named aliase vermeiden

* Eine Klasse je Header (A)
    * Eine Verantwortlichkeit je Header (B)

* Public und Private Header trennen (gerade für Bibliotheken)
