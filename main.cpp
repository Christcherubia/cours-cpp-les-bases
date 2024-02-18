// CODE DE BASE 
// *****************
// '#include <iostream>' : Cette ligne permet d'inclure la bibliothèque d'entrée/sortie standard 
#include <iostream> // (iostream), nécessaire pour l'affichage en console.
// int main() : C'est la fonction principale où l'exécution du programme commence.
int main() {
    //Code du programme

// return 0; : Indique la fin du programme avec un code de retour.
    return 0;
}

// 2. Variables et Types de Données :
//***********************

int integerVar = 3;
float floatVar = 3.14;
char charVar = 'Bonjour';
bool boolVar = true; // ceci est un boulean

//****************
// 3. Opérateurs :
// ******************

// Le C++ supporte différents opérateurs pour effectuer des opérations sur les variables, tels que 
// +, -, *, /, %, ++, --.
// Exemples :

int main() {
    // Déclaration de variables
    int a = 10;
    int b = 3;

    // Addition
    int sum = a + b;
    std::cout << "Addition : " << a << " + " << b << " = " << sum << std::endl;

    // Soustraction
    int difference = a - b;
    std::cout << "Soustraction : " << a << " - " << b << " = " << difference << std::endl;

    // Modulo (reste de la division)
    int remainder = a % b;
    std::cout << "Modulo : " << a << " % " << b << " = " << remainder << std::endl;

    return 0;
}

// *******************
// 4. Structures de Contrôle :
// **********************

// if-else :

int x = 10;

if (x > 5) {
    // Code exécuté si x est supérieur à 5
} else {
    // Code exécuté si x n'est pas supérieur à 5
}

// Boucle "for"
for (int i = 0; i < 5; ++i) {
    // Code exécuté 5 fois
} 

// Boucle While :
int i = 0;

while (i < 5) {
    // Code exécuté tant que i est inférieur à 5
    ++i;
}
//********************
// 5. Fonctions :
// Définir une fonction en C++ :
// *******************

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4);
    // result contient maintenant la somme de 3 et 4
    return 0;
}

// // ***************
// 6. Tableaux :
// Déclaration et utilisation d'un tableau :
//******************

int myArray[5] = {1,2,3,4,5};

for (int i = 0; i < 5; ++i) {
    std::cout << myArray[i] << "  ";
}
// Affiche 1 2 3 4 5

// **********
// 7. Classes et Objets (Programmation Orientée Objet) :
// ***********

class myClass {
    public:
    int myVar;

    void myMethod() {
        // code de la méthode
    }
};

int main() {
    myClass obj;
    obj.myVar;
    obj.myMethod();
    return 0;
}

