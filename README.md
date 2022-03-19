# TP01-2022
### Joaquin Agüero Trevisan

## Ejercicio 2

- **2.a) Investigar el archivo .gitignore ¿Por qué es conveniente incluirlo? ¿Cuándo se debe hacer? ¿Cómo configuraría el archivo .gitignore?**

    Permite omitir archivos que no se quieren añadir (add), comitear (commit) y empujar (push), al repositorio local y al repositorio exterior.

    Se debe omitir cualquier archivo no deseado antes de hacer la acción 'add', utilizando 'git status' para saber si el o los archivos seleccionados fueron descartados. 

    Configuraria el archivo .gitignore para eliminar todos los ejecutables de mis archivos (como tp1_1.exe/tp1_2.exe) utilizando *.exe. Si quiero ignorar archivos especificos tendria que poner el nombre del archivo mas su extension (nombre.extension), ej: ignorado.txt.

- **3.c)  Revise los archivos subidos en su repositorio de github. ¿Que archivos ve? ¿Cuál cree que no hace falta que esté?**

    Veo los archivos:   .gitignore
                        README.md
                        joaquinOmar.txt
                        tp1_1.c
    
    Por ahora todos los archivos que veo son adecuados para subir a los repositorios.

- **Nota: Si resolvió correctamente los puntos 2 y 3 notará que el resultado es el mismo. ¿A qué se debe? ¿Qué obtiene en el punto 4? ¿es igual a los anteriores? ¿Por qué? Responder en el archivo readme.md.**

    Se debe que, en el punto 2, imprimimos el puntero (punt) que tiene almacenado la direccion de memoria de la variable (var) y , en el punto 3, imprimimos la direccion de memoria de la variable usando el operador de direccion (&).

    En el punto 4 obtenemos la direccion de memoria del puntero a travez del &.