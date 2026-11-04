# Victoria II: notas de funcionamiento interno y rendimiento

Documento de trabajo sobre **Victoria II 3.04 (32 bits)**, creado a partir de
los perfiles y notas compartidos en esta conversación, consultas realizadas en
Ghidra y el código fuente del plugin `v2dll_country_daily_optimizer`. No es una
descripción completa del motor ni una especificación oficial.

## Cómo leer las conclusiones

- **[M] Medido:** tiempos del perfil de rendimiento compartido para una partida
  nueva de 1836 con velocidad máxima. Son valores de esa configuración, no
  constantes universales.
- **[C] Confirmado en código/desensamblado:** relaciones entre funciones,
  instrucciones y estructuras verificadas en el ejecutable analizado.
- **[I] Inferencia/hipótesis:** explicación compatible con las medidas, que
  debe probarse en el juego y con una partida reproducible.

Las direcciones VA corresponden a la imagen analizada con base preferida
`0x00400000`. El ejecutable usa ASLR; para convertir una dirección observada en
tiempo de ejecución: `VA = runtime - base_runtime + 0x00400000`. El plugin
trabaja con RVA respecto de `gameBase` y valida los bytes del `CALL` antes de
modificarlo. Un parche de dirección fija no debe reutilizarse en otra versión
del ejecutable sin volver a verificarlo.

## Recorrido de un día

`ActualizarMundoYAvanzarTiempo` (entrada observada en `0x00682EC0`) llama a
`Economy_ProcessMonthlyTick` en `0x00683AB1` (`0x006859C0`). En ese ciclo se
actualizan, entre otras cosas, países, provincias, economía y colas de trabajo.
El fragmento inspeccionado muestra un recorrido por el vector de países vivos
`world+0xADC..+0xAE0`, pasadas de provincias y países, una llamada a
`Country_DailyUpdate` y múltiples `UpdateTimeThrottle`.

Funciones y sitios relevantes:

| Dirección VA | Nombre/descripción | Nota |
|---|---|---|
| `0x00682EC0` | `ActualizarMundoYAvanzarTiempo` | Contiene el `CALL` diario a economía. |
| `0x006859C0` | `Economy_ProcessMonthlyTick` | Recibe el mundo como argumento de pila; la función retorna con `ret 4`. |
| `0x005091A0` | `Country_DailyUpdate` | Se llama desde el vector de países vivos, sitio `0x00685ED1`. |
| `0x00508590` | `Country_PrePass` | Pasada sobre países vivos; sitio `0x00685C2C`. |
| `0x00522CF0` | Capacidad de mercado | Llamada desde `Market_AddRealDemand`, sitio `0x00487483`. |
| `0x0052FCD0` | Actualización de pares de países | Lee datos del otro país para el índice propio. |
| `0x0092E290` | `CountryRelation_DailyPurge` | Purga diaria de relaciones. |
| `0x00515490` | `Country_Recalculate` | Recalcula datos de cada país. |
| `0x0095EB00` | Distribución de mercado | Recorre pops y mercado. |
| `0x0068AA10` | Destructor/eliminación nativa de ejército | Desvincula y destruye el ejército mediante las listas del juego. |
| `0x006592F0` | `Render_MapFrame` | Marco de renderizado del mapa. |
| `0x006596B1` | llamada a `FUN_00999BB0` | Pase de lotes con proyección ortográfica; no está clasificado como solo 3D. |

`Economy_ProcessMonthlyTick` también aparece llamado desde rutas de carga o
finalización de mundo. Por eso la opción de limpieza de ejércitos del plugin se
engancha al `CALL` concreto de `ActualizarMundoYAvanzarTiempo` (`0x00683AB1`),
no a todas las llamadas a la función de economía.

## Presupuesto de rendimiento observado

Perfil compartido: partida vanilla, 1836, alrededor de **196 ms por día** a
velocidad máxima. El marco se reparte en varios frames (aproximadamente 3–4 por
día). Una parte del renderizado ocurre dentro del tick por
`UpdateTimeThrottle`.

| Bloque | ms/día aprox. | Parte aprox. |
|---|---:|---:|
| Trabajo de frame fuera de `Update_World_and_Advance_Time` | 90 | 45 % |
| `CommandQueue_Process`, principalmente espera de `select`/ENet | 46–51 | 25 % |
| `AI_FrameUpdate`, mayormente cola de decisiones | 24–26 | 12 % |
| `Render_MapFrame` | 14.5 | 7 % |
| `WorldMarketUpdate` inclusivo | 23 | 11 % |
| `Country_PrePass` | 27 | 13 % |
| `Country_DailyUpdate`, tiempo propio | 20 | 10 % |
| `ProcessMarketAndGoodsDistribution` | 8.7 | 4 % |
| Escaneos de casus belli de la IA | 11 | 5 % |
| Escaneo diario de eventos | 4 | 2 % |
| Provincias, parte propia de `DayTick` y resto | 10 | 5 % |

Los bloques inclusivos y las partes de frame/tick se solapan; no se deben sumar
como particiones mutuamente excluyentes. La espera de ENet puede consumir el
reloj del perfil sin representar trabajo de simulación equivalente. Quitar esa
espera requiere entender el modo de red y no forma parte de las optimizaciones
actuales.

## Instrucciones calientes y causa probable

El muestreador suspendía el hilo del juego cada milisegundo. En muchos casos, la
muestra cae en la instrucción posterior a una carga que sufrió un fallo de
caché; por eso el campo indicado como “qué se atasca” es la carga de memoria
previa.

| Función | Tiempo propio aprox. | Instrucción más caliente | Datos asociados |
|---|---:|---|---|
| `FUN_00522CF0` (capacidad de mercado) | 5.6 ms/día | `0x00522E27`, 90 % | relación `+0x34` |
| `AI_TargetScan` (`0x0084B0F0`) | 3.9 ms/día | `0x0084B29D`, 90 % | relación `+0x34` |
| `CountryRelation_DailyPurge` (`0x0092E290`) | 5.6 ms/día | 71 % | relación `+0x50` (73 %), `+0xA8` (18 %) |
| `Country_PrePass` (`0x00508590`) | 3.6 ms/día | `0x00508DEE`, 70 % | relación `+0x2C` |
| `Country_Recalculate` (`0x00515490`) | 7.8 ms/día | `0x00515FCF`, 46 % | relación `+0x20` (46 %), `+0x70` (14 %) |
| `FUN_004B9C60` (pasada de pops de `DayTick`) | 1.3 ms/día | `0x004B9C9B`, 89 % | siguiente pop `+0x27C` |
| `FUN_00485390` (`Market_UpdateCountryPops`) | 4.5 ms/día | primer acceso al pop, 32–34 % | objetos pop dispersos |
| `FUN_0095EB00` (distribución) | 1.4 ms/día | `0x0095EB63`, 90 % | pop `+0x11C` |
| `FUN_0095A5F0` | 2.1 ms/día | `0x0095A66D`, 46 % | escrituras pop `+0x180..+0x21C` |
| `FUN_0052FCD0` | 1.9 ms/día | `0x00530388`, 48 % | `other+0x1580[self]` |
| `FUN_009E6C10` (`has_country_flag`) | 2.2 ms/día | `0x009E6C2F`, 67 % | recorrido trie carácter a carácter |
| `Economy_AccumulateElement` (`0x00969760`) | 2.4 ms/día | `0x00969889`, 55 % | vector pop `+0xA4` |

Una oportunidad experimental fue adelantar líneas de caché de las relaciones
antes de algunas pasadas. Eso no cambia el orden ni los valores de simulación,
pero el beneficio real depende de CPU, partida y versión; el prefetch puede no
ayudar en todas las máquinas.

El conteo de países amplifica varios de estos costes: las pasadas que recorren
país actual × relaciones con otros países escalan aproximadamente como `N²`.
La tabla ya contiene relaciones para cada pareja, pero los objetos están
separados en memoria. Saltar países o pares no es una optimización neutra: un
país sin provincias puede seguir teniendo campos diplomáticos usados por otros
países. Una DLL solo puede cambiar esos algoritmos tras identificar con
precisión sus escrituras, orden e invalidaciones.

## Estructuras de memoria observadas

### Países y relaciones

- El global de administración de países está en `0x012587E4` (RVA `0xE587E4`).
  Su segundo campo se usa como tabla de punteros a países (`DAT_012587E4[1]`).
- El país tiene índice en `+0x20` y el tag crudo en `+0x1C` según las lecturas
  observadas.
- Cada `CCountry` tiene en `+0xBE8` una tabla de **683 punteros** a relaciones,
  indexada por el índice del otro país. El análisis reporta que están presentes
  todos los pares: aproximadamente `683 × 683 = 466 489` objetos de relación
  separados.
- Varios ciclos visitan “país actual × todos los demás países”, aun cuando cada
  visita lee pocos campos. Los campos calientes incluyen `+0x20`, `+0x2C`,
  `+0x30`, `+0x34`, `+0x38`, `+0x50`, `+0x70` y `+0xA8`.
- `Country_PrePass` puede escribir en el otro país (`other+0xE78`) cuando ciertos
  campos de relación están activos. Por ello un país sin provincias todavía
  puede participar en diplomacia/IA; no es seguro omitir sus pasadas en
  general.
- La tabla de pares `country+0x1580` contiene valores de 8 bytes indexados por
  país; `FUN_0052FCD0` lee `other+0x1580[self]`.
- El vector de países vivos del mundo está en `world+0xADC..+0xAE0`. El ciclo de
  economía recorre este vector para algunas funciones. Esto no significa que
  todos los slots de la tabla de países se eliminen al anexar un país.

### Provincias y pops

- El vector de provincias de un país está en `country+0x9D8` (begin) y
  `country+0x9DC` (end). Vacío se detecta cuando ambos punteros son iguales; si
  el rango es inválido, las opciones actuales tienden a fallar en modo seguro y
  no asumir que está vacío.
- En `province+0x194` hay entradas de 16 bytes por tipo de pop. El primer campo
  contiene el inicio de una lista enlazada; el siguiente pop se obtiene de
  `pop+0x27C`. Las muestras del perfil incluyen lecturas en varios offsets de
  objetos pop de al menos `0x280` bytes.
- El patrón de acceso enlazado dificulta la localidad de caché y limita el
  beneficio de paralelizar recorridos sin cambiar la organización de memoria.

### Asignador

El ejecutable enlaza estáticamente el CRT de VS2010 según el análisis:
`_malloc 0x00AB049C`, `_free 0x00AAEED7`, `_realloc 0x00AC4320`,
`__calloc_impl 0x00ABF700`, `__msize 0x00AB71DB`, `operator new 0x00AAE9AF` y
`operator delete 0x00AAE91B`. Se identificó un heap privado inicializado por
`__heap_init` (`0x00ABABD8`). El coste dentro de ntdll al asignar/liberar fue de
aprox. 1.7 ms/día en una partida de mitad de juego. El perfil atribuye los
fallos de caché principales a los patrones de acceso, no al asignador.

## Países sin provincias y unidades huérfanas

Una anexión puede dejar un slot/objeto de país registrado sin provincias. La
existencia de ese objeto no implica por sí sola que siga siendo un país vivo en
el vector del mundo. **[I]** El bug reportado de ejércitos fantasma es compatible
con que un ejército siga ligado a la lista del país absorbido después de que el
país quede sin territorio; aún debe confirmarse en una partida instrumentada
que ese sea el origen de cada caso.

Datos relevantes confirmados en el ejecutable:

- La lista de ejércitos del país comienza en `country+0x7B4`.
- `FUN_0068AA10` recibe el mundo en `ECX` y el ejército como argumento de pila.
  La rutina elimina vínculos del país y otras listas relacionadas antes de
  destruir el objeto; es preferible a borrar nodos o memoria manualmente.
- `Country_DailyUpdate` tiene un recorrido propio de ejércitos, pero el tick
  llama a esa función por el vector de países vivos. Un país que ya no esté en
  ese vector no necesariamente llegará a esa limpieza.

El plugin contiene la opción experimental
`cleanup_armies_of_landless_countries=1`, que se instala en el callsite diario
de economía (`0x00683AB1`) y, después de la función original, escanea la tabla de
países y destruye ejércitos de todos los objetos registrados cuyo vector de
provincias está vacío. El INI la deja en `0` de forma predeterminada. Puede
afectar países sin tierra que conserven fuerzas por diseño; se recomienda una
copia de la partida y revisar `v2dll_country_daily_optimizer.log`. La opción
está en el **código fuente**; la DLL no se ha compilado en este entorno.

Esta limpieza no prueba que cada ejército encontrado sea una unidad fantasma ni
que todos los países vacíos deban eliminar sus fuerzas. Para una solución más
selectiva convendría identificar en Ghidra el evento de anexión/transferencia,
seguir el propietario antes y después, y limitar la limpieza al país absorbido.

## Opciones actuales del plugin

Archivo `v2dll_country_daily_optimizer.ini` dentro de la carpeta del mod activo:

```ini
[CountryDailyOptimizer]
skip_empty_country_daily_update=0
skip_empty_country_prepass=0
cleanup_armies_of_landless_countries=0
render_thread_core=0
ai_thread_core=0
prefetch_country_relations=0
optimize_ai_target_lookup=0
great_nations_count_override=0
keep_puppets_when_great_powers=0
block_puppets_from_great_powers=1
disable_log=0
disable_map_3d_scene_render=0
event_scan_interval_days=2
prefetch_pop_reset_chain=0
prefetch_pop_culture=0
prefetch_pop_religion=0
```

| Opción | Acción | Riesgo/consecuencia |
|---|---|---|
| `skip_empty_country_daily_update` | Omite `Country_DailyUpdate` para un país sin provincias. | Puede saltar lógica diaria importante para países exiliados o sin tierra. |
| `skip_empty_country_prepass` | Omite `Country_PrePass` para un país sin provincias. | Puede cambiar transferencias o lógica de relaciones entre países. |
| `cleanup_armies_of_landless_countries` | Destruye ejércitos de países registrados sin provincias, después del tick. | Puede borrar fuerzas legítimas de países sin tierra. |
| `render_thread_core` | Temporalmente fija el hilo actual al entrar a `Render_MapFrame` y restaura su máscara al salir. `0` desactiva; `2`/`3` seleccionan el segundo/tercer procesador lógico. | No paraleliza el render; solo cambia qué procesador lógico ejecuta ese mismo hilo. Puede no mejorar o empeorar el pacing. |
| `ai_thread_core` | Fija temporalmente el hilo que ya ejecuta `AI_FrameUpdate` al procesador lógico indicado y restaura su afinidad al terminar. | No crea otro hilo ni reparte el trabajo. Puede no mejorar o empeorar el rendimiento. |
| `prefetch_country_relations` | Activa los hooks experimentales de prefetch para relaciones y pares de países. | No reduce las iteraciones; añade lecturas e instrucciones y puede empeorar. Apagado por defecto. La variable `V2DLL_PREFETCH_RELATION_HOTSPOTS=1` también lo activa. |
| `optimize_ai_target_lookup` | Sustituye la búsqueda enlazada de pertenencia de `AI_TargetScan` por un conjunto temporal de 683 bits por invocación/hilo. | Apagado por defecto; cambia el algoritmo de búsqueda. Los sitios se validan por bytes, y listas inválidas o demasiado largas vuelven a la búsqueda nativa. Compilar y comparar en la misma partida antes de usarlo normalmente. |
| `great_nations_count_override` | Si es distinto de cero, cambia `GREAT_NATIONS_COUNT` en `common/defines.lua` de la carpeta del mod activo al iniciar el plugin. | `0` no escribe el archivo; acepta `1..32`. Por encima de `8` instala el límite de visualización para que las ventanas no busquen controles inexistentes; las GP 9+ siguen activas pero no se muestran en diplomacia/producción. Valores mayores de `32` se corrigen a `32`. Crea una copia inicial `.v2dll.bak` y requiere reiniciar el juego. |
| `keep_puppets_when_great_powers` | Conserva el vínculo con el señor cuando el títere asciende a gran potencia; deja activo el nuevo rango y omite solo la rama nativa que elimina la relación. | Apagado por defecto. Algunos sistemas pueden asumir que una gran potencia no tiene señor; validar diplomacia, guerras y comportamiento del sujeto en una copia de la partida. Hook limitado a los bytes analizados para Victoria II 3.04. |
| `block_puppets_from_great_powers` | Impide que un país con señor (`country+0xCFC != 0`) ascienda a gran potencia, aplicando la misma exclusión que el juego usa para países de una sola provincia (`country+0xE4C <= 1`). | Activado por defecto (`1`). Sustituye tres `CMP` nativos por llamadas validadas; si alguno de los tres bytes no coincide, no se aplica ninguno y queda el comportamiento nativo. Un títere ya marcado como gran potencia se degrada en la siguiente reconstrucción de listas económicas, igual que un país de una provincia. |
| `disable_log` | Silencia el archivo `.log` del plugin y sus mensajes enviados al logger de V2DLL. | El `.log` existente queda intacto, pero no recibe nuevas líneas hasta reactivar el log. |
| `disable_map_3d_scene_render` | Nombre heredado; salta el pase de lotes `FUN_00999BB0` desde `Render_MapFrame`. | No es culling; puede ocultar contenido visible y sus lotes no están totalmente clasificados. |
| `event_scan_interval_days` | `2` conserva el escaneo alternado vanilla; `4` escanea la rama de países y provincias cada cuatro días. Compensa el multiplicador MTTH de cada rama. | Puede retrasar eventos sin MTTH hasta dos días y cambia consumo/orden del RNG; en multijugador todos deben usar el mismo valor. |
| `prefetch_pop_reset_chain` | Prefetchea el siguiente pop y las líneas escritas por `FUN_0095EBF0`, en el recorrido de `FUN_004B9C60`. | Independiente de cultura/religión. No altera valores, pero puede aumentar tráfico de caché. Apagado por defecto. |
| `prefetch_pop_culture` / `prefetch_pop_religion` | Activa por separado hints para los punteros en `pop+0x6C` / `pop+0x70` y los objetos referenciados. | No mueve el cálculo a otro hilo y puede añadir tráfico de caché. Apagadas por defecto. |

### Muchas culturas y coste de pops

No se encontró evidencia de que una cantidad alta de definiciones de cultura,
por sí sola, active un bucle diario por cada cultura. El efecto probable es
indirecto: culturas distintas separan grupos que de otro modo podrían formar
menos pops, y el motor recorre esos objetos individualmente. Esto encaja con el
perfil entregado: `FUN_004B9C60` sigue `pop+0x27C` y su muestra caliente espera
por el siguiente nodo; `FUN_0095EB00` también muestra stalls al leer campos del
pop. Ghidra confirma que la llamada en `0x004B9C90` ejecuta `FUN_0095EBF0`, que
inicializa acumuladores por pop.

Las opciones de reset, cultura y religión instalan el mismo thunk en la llamada
de reset de `FUN_004B9C60`, pero cada una activa únicamente sus propios hints.
El thunk conserva registros y flags, lee el siguiente pop con protección de
excepción y deja el cálculo, orden y estado de los pops al juego. El código no
prefetchea cultura o religión cuando solo está activo
`prefetch_pop_reset_chain`. Los hints no garantizan mejora; se separaron
precisamente porque el prefetch puede aumentar la presión de caché. El hook solo
se instala si el `CALL` de 3.04 coincide byte por byte.

### Búsqueda de objetivos de IA con muchos países

Ghidra muestra que `AI_TargetScan` (`0x0084B0F0`) recorre candidatos y, para
candidatos aplicables, busca su índice recorriendo la lista enlazada del país
propietario en `country+0x4A4`; el nodo contiene el objeto en `+0` y el siguiente
nodo en `+8`, y el índice comparado está en el objeto `+0x0C`. Esa búsqueda
puede costar `Q × L` para `Q` candidatos y una lista de longitud `L`. El perfil
compartido mide unos 3.9 ms/día en esta función y coloca aproximadamente el 90 %
de sus muestras propias calientes en la lectura de relación `+0x34`.

La opción nueva `optimize_ai_target_lookup=1` construye de forma perezosa un
conjunto temporal de 683 bits a partir de esa lista y consulta cada candidato
en tiempo constante, reduciendo la búsqueda a una construcción `O(L)` y
consultas `O(Q)`. El conjunto es por hilo y se invalida al entrar a cada
`AI_TargetScan`. La lógica restante de candidatos, su orden y los efectos del
juego continúan en código nativo. Si la lectura de la lista falla o supera
4 096 nodos, la ruta salta a la búsqueda nativa. Los dos puntos de parche
(`0x0084B0F0` y `0x0084B2CB`) se validan con bytes del ejecutable 3.04; si no
coinciden, no se instala.

Esta opción cambia una búsqueda interna y por eso permanece apagada por
defecto. El análisis estático muestra que el bucle candidato agrega a un vector
del objeto de IA y consulta la lista del país; no mostró una modificación de esa
lista dentro del bucle, pero hace falta medir y probar la build exacta antes de
considerarla estable. No hay resultado de compilación o benchmark registrado en
esta sesión.

No se mueve la actualización de culturas/religiones a otro procesador. El
`render_thread_core=2` solo fija temporalmente el pase de renderizado. Del mismo
modo, `ai_thread_core=2` fija temporalmente el hilo actual de `AI_FrameUpdate`;
no crea ni mueve el cálculo a un worker separado. El trabajo de simulación usa
estado compartido y el cambio de afinidad no garantiza más rendimiento.

### Decisiones y eventos: por qué tantos scripts ralentizan

Ghidra confirma que `Economy_ProcessMonthlyTick` llama a
`EventManager_DailyScan` (`0x008A7CD0`). Este alterna el recorrido de eventos
de país y provincia cada día, filtra candidatos, evalúa sus triggers, el MTTH y
la probabilidad, y puede disparar el evento. El perfil aportado mide unos
4 ms/día en esta función. La opción experimental `event_scan_interval_days=4`
parchea el gate de paridad y los dos multiplicadores de MTTH (VA
`0x008A7D33`, `0x008A7DF7`, `0x008A7FD8`). Solo se aplica si los tres grupos de
bytes coinciden con Victoria II 3.04; de lo contrario queda el escaneo nativo.
Aunque compensa la probabilidad media MTTH, los eventos sin MTTH se pueden
retrasar y la secuencia RNG cambia. No usar si se necesita sincronía multijugador
sin que todos compartan la misma DLL/configuración.

La cantidad de decisiones no prueba que se evalúen en cada tick. La copia TGCX
analizada genera miles de decisiones frente a alrededor de 150 en vanilla; eso
puede aumentar el parseo inicial y el coste al construir/mostrar la lista de
decisiones políticas. No se ha confirmado en Ghidra que exista un escaneo diario
completo de decisiones. Por eso no se añadió un skip/cache de decisiones: podría
dejar opciones obsoletas o alterar sus triggers. Para optimizar esa parte habría
que perfilar primero la apertura/actualización de esa lista y seguir sus
invalidaciones; la opción anterior reduce exclusivamente el recorrido diario de
eventos.

En la revisión de `AI_FrameUpdate` (`0x006874C0`), Ghidra mostró una cola de
tareas procesada con un presupuesto cercano a 20 ms. Para tareas asociadas a un
país, el juego comprueba que tenga provincias y que `country+0x208` no sea cero
antes de llamar a `FUN_0081E9E0`. Esa rutina invoca
`AI_ProcessPendingProposals_ForCountry` (`0x00820DF0`), que recorre una lista en
`country+0xCE4`, además de otras acciones de IA y casus belli. Las propuestas
pendientes de IA no son la lista de decisiones políticas del jugador; ese
recorrido no demuestra que miles de decisiones de script se evalúen cada día.

Las búsquedas de nombres/textos en Ghidra no localizaron un símbolo o cadena
identificable como escáner diario de decisiones. Esto tampoco descarta coste de
interfaz: falta comparar el mismo escenario con el panel cerrado y abierto, y
perfilar por separado el refresco de la lista y la simulación. Esa comprobación
queda pendiente; no se instaló un hook que omita o cachee decisiones.

### Cantidad máxima de grandes potencias

El archivo vanilla `common/defines.lua` y las copias de mods inspeccionadas
definen `country.GREAT_NATIONS_COUNT = 8`. Este es el ajuste de datos que
controla cuántas naciones entran en esa categoría; reducirlo modifica el
contenido mostrado. En Ghidra se inspeccionó `FUN_005F9260`, que crea elementos
de las listas de grandes potencias y segunda fila. El código usa tamaños de
listas/valores cargados en runtime; el `8` observado cerca del prólogo quedó
como inicialización local y no prueba por sí solo un tope global.

Causa concreta del cierre por encima de ocho en Victoria II 3.04:

- `InitGameDefines` lee `GREAT_NATIONS_COUNT` desde `common/defines.lua` y lo
  guarda escalado por 1000 en `*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x1c)`.
  Los consumidores dividen por 1000, así que ocho se almacena como `8000`.
- Varias ventanas construyen nombres de control a partir de ese valor:
  - `FUN_00622270` (constructor de la ventana de diplomacia del país) recorre
    `i < GREAT_NATIONS_COUNT`, construye `sort_by_gp%d` y crea/posiciona
    `diplomacy_greatpower_info` para cada gran potencia.
  - `FUN_00625A50` (filas de países de la ventana de diplomacia) y
    `FUN_006F53A0` (filas de la ventana de producción/inversión) recorren
    `i < GREAT_NATIONS_COUNT`, construyen `country_gp%d` y escriben la
    influencia en el control devuelto.
  - `FUN_006EFDB0` (constructor de la ventana de producción) hace lo mismo con
    `sort_by_gp%d`.
- Los `.gui` de vanilla solo definen ocho controles de cada familia:
  `country_gp0`..`country_gp7` y `sort_by_gp0`..`sort_by_gp7`, en
  `interface/country_diplomacy.gui` y `interface/country_production.gui`.
- Con `GREAT_NATIONS_COUNT > 8`, la búsqueda de `country_gp8` o `sort_by_gp8`
  devuelve `NULL`. El código no comprueba el resultado y desreferencia el
  control: `[ESI+0xdc]` en `VA 0x0062742A` (ruta `country_gp%d`) y
  `[iVar4+0x54]` en `VA 0x006236A3` (ruta `sort_by_gp%d`). Eso produce una
  violación de acceso al abrir o refrescar la ventana de diplomacia o la de
  producción, no en la lista de grandes potencias del backend.
- `FUN_005F9260`, que construye `great_powers_list` y `great_powers_list2`,
  sí crea filas dinámicamente y no es el punto del cierre.

Por eso el override de datos no basta. La solución implementada no amplía los
`.gui`: `InstallGreatPowerDisplayLimit` limita los bucles de esas ventanas a los
ocho controles que existen. Las grandes potencias 9+ siguen activas en la
simulación y en el backend `great_powers_list`, pero no aparecen en las ventanas
de diplomacia ni de producción. El parche es todo-o-nada y valida cada patrón de
bytes antes de escribir:

- Cinco sitios dividen el contador escalado por 1000 con la secuencia de 17
  bytes `B8 D3 4D 62 10 F7 E9 C1 FA 06 8B C2 C1 E8 1F 03 C2`
  (`mov eax,0x10624dd3; imul ecx; sar edx,6; mov eax,edx; shr eax,0x1f; add
  eax,edx`). RVAs: `0x623589` (`FUN_00622270`), `0x627360`
  (`FUN_00625A50`), `0x6F6D0F` (`FUN_006F53A0`), `0x6F3239` y `0x6F3443`
  (`FUN_006EFDB0`, dos bucles). Cada secuencia se sustituye por `E8 rel32` más
  12 NOP. El thunk recibe el contador en `ECX`, calcula `count/1000`, devuelve
  `min(resultado, 8)` en `EAX`, conserva `ECX` y deja en `EDX` el cociente
  nativo.
- Dos sitios recorren el vector de grandes potencias y buscan
  `sort_by_gpflag%d` usando como límite el tamaño del vector. RVAs `0x6F3CA8`
  (`FUN_006F3C70`: `push esi; xor ebx,ebx; xor esi,esi`) y `0x62503A`
  (`FUN_00625000`: `sar edx,2; xor ebx,ebx`). Cada bloque de 5 bytes se
  sustituye por una llamada a un thunk que ejecuta las instrucciones originales
  y limita el registro de índice (`ECX` o `EDX`) a 8.

Los patrones corresponden a Victoria II 3.04. Si alguno no coincide, el
instalador no escribe ninguno de los siete sitios y el plugin registra el
rechazo; en ese caso hay que mantener `great_nations_count_override` en 8 o
menos para no volver a provocar el cierre.

### Títeres que ascienden a gran potencia

En `FUN_0053D680`, la promoción marca primero el indicador de gran potencia en
`country+0x31`. En `VA 0x0053D6A6`, el código lee `country+0xCFC` (país señor);
si no es cero, entra en la rama que obtiene y destruye la relación de satélite.
La opción `keep_puppets_when_great_powers=1` instala un salto únicamente sobre
esa lectura, devuelve cero cuando hay un señor y deja que el código nativo
continúe tras la comprobación. Así se conserva el rango de gran potencia y se
omite la destrucción del vínculo. El hook valida los seis bytes esperados y, si
no coinciden, deja el comportamiento nativo. Está apagado por defecto.

Esto conserva un estado que el juego normalmente separa: gran potencia con un
señor. Otros caminos de diplomacia o interfaz pueden suponer que esa combinación
no existe; comprobar guerras, diplomacia y persistencia en guardado/carga con
una copia de la partida. La opción no desactiva la independencia por otras
causas.

La opción `block_puppets_from_great_powers=1` (activa por defecto) aplica la
regla inversa: un país con señor no puede ascender a gran potencia, del mismo
modo que el juego excluye a los países de una sola provincia. La comprobación
nativa es `country+0xE4C > 1`; el plugin añade `country+0xCFC == 0`. Se
localizaron tres sitios de elegibilidad en Victoria II 3.04 y se sustituyó cada
`CMP` por una llamada relativa de 5 bytes más NOP:

- RVA `0x28D640` (VA `0x0068D640`): bucle principal de
  `EconomyManager_RebuildEconomicLists`; el país está en `EDI` y el nativo
  compara `[EDI+0xE4C]` con `ECX` (que vale 1).
- RVA `0x28C6C3` (VA `0x0068C6C3`): candidato dentro de `FUN_0068C660`; el país
  está en `ESI` y el nativo compara `[ESI+0xE4C]` con `EDI` (que vale 1). La
  rama siguiente es `JG`, por lo que el thunk devuelve `EAX=1` solo si el país
  es elegible.
- RVA `0x28D845` (VA `0x0068D845`): relleno de vacantes dentro de
  `EconomyManager_RebuildEconomicLists`; el país está en `EAX` y el nativo
  compara `[EAX+0xE4C]` con `1`.

Los tres thunks conservan `EAX` (y `ECX` en el tercer sitio) y terminan con
`CMP EAX,0`, de modo que los `JLE`/`JG` nativos siguen funcionando: `EAX=0`
significa no elegible. El instalador valida los tres patrones de bytes antes de
escribir; si cualquiera no coincide, no parchea ninguno y deja el comportamiento
nativo. El camino de promoción al cargar la partida (`VA 0x00682179`) no se
parchea: igual que ocurre con un país de una provincia ya guardado como gran
potencia, la siguiente reconstrucción de listas económicas lo degrada. La opción
se puede desactivar con `block_puppets_from_great_powers=0`. Si además está
activo `keep_puppets_when_great_powers=1`, la exclusión tiene prioridad: el
sujeto nunca asciende y el hook de retención no llega a actuar.

Se añadió `great_nations_count_override` al INI. `0` lo deja inactivo; de `1` a
`32`, al inicializar, busca exactamente una asignación directa
`GREAT_NATIONS_COUNT = número` en el `common/defines.lua` del `modFolder` que
entrega V2ModAPI, crea una copia inicial `defines.lua.v2dll.bak` y reemplaza
solo el entero mediante archivo temporal y reemplazo atómico. Si no encuentra
un único assignment normal, no modifica el archivo. El motor debe volver a
cargar las definiciones, así que hay que reiniciar el juego. Para volver a
vanilla, restaurar el backup o configurar `8`. Valores configurados por encima
de `32` se reescriben a `32` en el INI y se usa ese valor para corregir el
define. Cuando el valor es mayor que `8`, el plugin instala además
`InstallGreatPowerDisplayLimit` para que las ventanas de diplomacia y
producción no busquen `country_gp8+`, `sort_by_gp8+` ni `sort_by_gpflag8+`.
Cambiar el INI a `0` evita escrituras en inicios posteriores, pero no revierte el
define ya editado ni desinstala el parche de visualización; para recuperar el
archivo inicial, restaurar `defines.lua.v2dll.bak`. La combinación no se compiló
ni se validó en una partida en este entorno Linux; falta la prueba Win32/Release
en Windows.

El log se escribe en `v2dll_country_daily_optimizer.log` junto al INI. El
prefetch de relaciones y el perfil de `Country_DailyUpdate` se habilitan con
variables de entorno al iniciar el plugin:

| Variable | Efecto |
|---|---|
| `V2DLL_PREFETCH_RELATION_HOTSPOTS=1` | Activa hooks que prefetchean líneas de relación y pares de países. |
| `V2DLL_PREFETCH_LIVING_COUNTRIES_ONLY=1` | Limita ese prefetch especulativo a países con provincias. |
| `V2DLL_PROFILE_COUNTRY_DAILY=1` | Registra ventanas de tiempo de `Country_DailyUpdate`. |

Los hooks verifican bytes y destino del `CALL` antes de parchear. Esa protección
reduce el riesgo de modificar un sitio distinto, pero no sustituye probar con
la versión exacta del juego y hacer backup del save.

### Recorte de renderizado por cámara (pendiente)

El requisito del usuario es dibujar todo lo que cae dentro de la vista de la
cámara y descartar lo que queda fuera, **incluyendo el mapa 2D**. La opción
`disable_map_3d_scene_render` no hace eso: omite una llamada completa al pase de
lotes y puede suprimir elementos visibles. En Ghidra, `FUN_00999BB0` configura
una proyección ortográfica y envía lotes al dispositivo por medio de vtable;
esta evidencia no permite clasificarla como “solo 3D”. `Render_MapFrame` también
llama a `FUN_00999FA0`, que configura otra proyección ortográfica.

Para cumplir el requisito hay que localizar dónde el juego obtiene la cámara,
la ventana/viewport y las posiciones o límites de cada lote de mapa, y aplicar
una prueba de visibilidad antes de enviar el lote tanto en 3D como en 2D. El
recorte del viewport de Direct3D puede evitar píxeles fuera del viewport, pero
por sí solo no demuestra que el motor evite el trabajo de CPU o las llamadas de
dibujo de objetos fuera de cámara. No está implementado todavía como una opción
del plugin; omitir globalmente los pases no equivale a visibilidad correcta.

### Lectura del log compartido en pruebas

El log de prueba muestra `SKIP` para cientos de tags de tres caracteres y tags
dinámicos `D01`, `D02`, etc., tanto en `Country_PrePass` como en
`Country_DailyUpdate`. Por tanto, “sin provincias” describe una condición de
runtime, no una prueba de que el país/slot sea basura o haya sido anexado. Los
resúmenes de `skipped_calls=20000` son contadores acumulados de llamadas
omitidas desde que inició el proceso, no 20 000 países distintos. La limpieza
de ejércitos y la supresión del pase de lotes aparece habilitada en el encabezado
de esa sesión; ese texto solo confirma la activación, no el resultado visual ni
que se hayan borrado ejércitos.

En otra sesión de juego el patrón apareció en índices hasta 574, compatible con
una partida/mod que registra más slots que el escenario vanilla. El log emite
cada país solo en su primera aparición y luego resume cada mil omisiones; esas
líneas no miden el tiempo ahorrado. El encabezado también indicaba activos el
limpiador optativo de ejércitos sin tierra y la supresión de la escena de mapa
3D. El mensaje `enabled` confirma configuración, no el resultado ni la
corrección visual. Para atribuir mejoras hay que cambiar una opción por vez y
comparar ticks/frame bajo el mismo save.

## Paralelismo: por qué no se ha activado

No se ha implementado una versión multinúcleo de `Country_DailyUpdate`. Los
perfiles y desensamblados muestran escrituras cruzadas: por ejemplo,
`Country_PrePass` mueve valores a otros países y otras funciones recorren
relaciones compartidas, provincias, pops, mercados y colas globales. Dividir el
ciclo entre hilos sin conocer dependencias, orden de actualización y exclusión
mutua puede producir resultados no deterministas, corrupción de listas o
desyncs. Una vía segura requeriría clasificar primero las escrituras por fase y
demostrar qué países/provincias son independientes.

## Límites del análisis y siguientes comprobaciones

1. Repetir los perfiles con la misma partida, CPU, velocidad y condiciones de
   red antes/después de cada opción. Separar tiempo de pared, espera de red y
   trabajo de CPU.
2. Verificar en una partida de prueba si el ejército fantasma está en la lista
   `country+0x7B4`, y si el destructor nativo lo elimina correctamente de mapa,
   transporte, selección y save/load.
3. Confirmar con Ghidra el lifecycle de slots de país, banderas (`country
   flags`) y el evento de anexión. Las notas disponibles aquí **no confirman**
   si el juego evalúa/carga todas las flags de cada slot sin país.
4. Volver a validar direcciones, offsets, calling conventions y bytes del hook
   cuando cambien el ejecutable, DLC/build o mod que modifica código nativo.
5. El muestreador de pila puede producir falsos retornos por locals sin
   inicializar. Validar primero el encadenamiento EBP y las instrucciones
   `CALL rel32`; valores de frame cercanos a `0xFFFFFFFF` pueden aparecer tarde
   en la partida y los checks de límites no deben desbordar.
6. Para investigar el lag con muchas decisiones, comparar el mismo save con el
   panel cerrado y abierto; medir separado `AI_FrameUpdate`, el refresco UI de
   decisiones y el tick. No asumir que
   `AI_ProcessPendingProposals_ForCountry` procesa decisiones políticas.
7. Para probar `optimize_ai_target_lookup`, compilar Win32/Release, conservar
   la DLL anterior y el save, dejar desactivados los prefetch y opciones que
   cambian simulación, habilitar solo esa clave y comparar con una ejecución
   idéntica con la clave a cero. No hay build ni benchmark registrado de esa
   opción en estas notas.

Ghidra muestra que `FUN_005F9260` construye los widgets de las listas de grandes
potencias (`great_powers_list` y `great_powers_list2`) por una ruta de interfaz
compilada aparte. Cambiar el define Lua no redimensiona esa ruta ni otros
consumidores binarios. Eso explica por qué el override de datos no basta para
soportar más de ocho; sin un crash dump no es posible atribuir el cierre a una
instrucción única. Por seguridad el plugin ya no escribe valores mayores a 8.

