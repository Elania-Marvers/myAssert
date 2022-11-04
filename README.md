# myAssert
## NOM  
assert - Terminer le programme en cas d'échec d'un test  
## SYNOPSIS
```c
#include <assert.h>

void myassert(scalar expression);
```
 
## DESCRIPTION
Si la macro NDEBUG est définie lors de la dernière inclusion de <assert.h>, la macro assert() ne génère aucun code et ne fait rien. Sinon, la macro assert() affiche un message d'erreur sur la sortie d'erreur, et termine l'exécution du programme en cours en appelant abort(3) si l'expression est fausse (égale à zéro).

Le but de cette macro est d'aider le programmeur à trouver des bogues dans son application. Le message « assertion failed in file foo.c, function do_bar(), line 1287 » n'est d'aucune aide pour l'utilisateur final.  
## VALEUR RENVOYÉE
Aucune valeur n'est renvoyée.  
## CONFORMITÉ
POSIX.1-2001, C89, C99. Dans C89 expression devait être de type int et le comportement était indéfini si ce n'était pas le cas, mais dans C99, elle peut être de n'importe quel type scalaire.  
## BOGUES
assert() étant implémentée comme une macro, si l'expression testée a des effets de bord, le comportement du programme différera suivant l'existence de NDEBUG. Ceci peut induire des Heisenbogues (conformes à la théorie de Heisenberg ;-), qui disparaissent ou se modifient quand on essaye de les localiser lors du débogage.  
