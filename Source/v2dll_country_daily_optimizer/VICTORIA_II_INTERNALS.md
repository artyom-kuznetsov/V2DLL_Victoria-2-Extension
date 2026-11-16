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
provincias está vacío. El tag `REB` queda siempre excluido: el motor modela a
los rebeldes como un `CCountry` real sin provincias, así que sin la excepción la
limpieza borraría sus brigadas y las revueltas desaparecerían. La comprobación
usa los mismos tres bytes del tag en `CCountry+0x1C` que compara el juego
(`v2game.exe` `0x00451BBF`: `cmp 'R'`, `cmp 'E'`, `cmp 'B'`). El INI la deja en
`0` de forma predeterminada. Puede afectar países sin tierra que conserven
fuerzas por diseño; se recomienda una copia de la partida y revisar
`v2dll_country_daily_optimizer.log`. La opción está en el **código fuente**; la
DLL no se ha compilado en este entorno.

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
| `skip_empty_country_daily_update` | Omite `Country_DailyUpdate` para un país sin provincias. El tag `REB` está exento para no congelar la lógica rebelde. | Puede saltar lógica diaria importante para países exiliados o sin tierra (salvo `REB`). |
| `skip_empty_country_prepass` | Omite `Country_PrePass` para un país sin provincias. El tag `REB` está exento. | Puede cambiar transferencias o lógica de relaciones entre países (salvo `REB`). |
| `cleanup_armies_of_landless_countries` | Destruye ejércitos de países registrados sin provincias, después del tick. El tag `REB` está exento para no borrar a los rebeldes. | Puede borrar fuerzas legítimas de países sin tierra (salvo `REB`). |
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

### Condición `date` (`[ScriptExtensions]`)

`[ScriptExtensions] date_trigger=1` añade `date = MM/DD/YYYY` a los bloques de
trigger (`potential`, `allow`, `trigger` de eventos, etc.). Funciona como `year`
pero con día exacto: es falso antes de esa fecha y verdadero desde ese día en
adelante. Dentro de un `NOT`, `NOT = { date = 02/22/1838 }` es verdadero solo
antes de esa fecha; combinando las dos formas se limita el evento a una ventana,
y con un segundo `NOT` a un solo día. El tooltip de la decisión muestra
`date = 01/21/1837`. Formatos aceptados: `MM/DD/YYYY` (`01/21/1837`),
`YYYY.MM.DD`, `YYYY/MM/DD`, `YYYY-MM-DD` y `DD/MM/YYYY` cuando el primer número
es mayor que 12. El calendario del juego tiene años de 365 días, sin bisiestos.
Una fecha inválida se registra en el log y nunca se vuelve verdadera por sí
sola; dentro de un `NOT` eso la hace siempre verdadera, así que hay que corregir
la fecha cuando el log avise.

Internamente engancha `TriggerBlock_AddChild` (`FUN_008B33E0`, RVA `0x4B33E0`):
para el token `date` (`0x2A1`) crea un `has_country_flag` (token `0x40A`) para
que el parser guarde el texto tal cual, cachea el día objetivo en los cuatro
bytes libres del objeto (`+0x34`) y sustituye la vtable por una copia privada
cuyo Evaluate compara `world+0xB0C / 24` con ese día y cuyo tooltip imprime la
sintaxis. Si el hook de `FIX_PROVINCE_FLAGS` ya está instalado en la entrada de
la fábrica, se encadena a él; si no, usa un trampolín local. Todos los
participantes de una partida multijugador deben usar el mismo valor.


### Eventos que no esperan al cambio de mes (`[Events]`)

`[Events] fire_on_time=1` hace que un evento cuyo trigger dependa del calendario
(`date`, `year` o `month`) sea candidato en cuanto llega la fecha, sin esperar al
siguiente cambio de mes. El juego reconstruye las listas de candidatos de cada
país/provincia solo una vez al mes en `FUN_008A78D0` y añade un evento únicamente
si su trigger ya era verdadero en ese momento; por eso un `date = ...` que se
cumple a mitad de mes no se escanea hasta el mes siguiente. El plugin sustituye
los dos `JZ` de la puerta de candidatos (RVA `0x4A79FA` país y `0x4A7BC3`
provincia) por un thunk que también añade el evento cuando su árbol de trigger
contiene una hoja `date`/`year`/`month`. El escaneo diario sigue evaluando el
trigger completo antes de disparar, así que solo cambia la elegibilidad, no el
resultado. Los eventos de país se escanean en días impares y los de provincia en
pares, de modo que un evento con condición de fecha se dispara en el siguiente
día de escaneo de su ámbito. Los triggers que no dependen del calendario (dinero,
flags, guerra, etc.) conservan la reconstrucción mensual nativa.

### Modificadores inexistentes (`[ScriptExtensions]`)

`[ScriptExtensions] guard_missing_modifiers=1` evita el crash cuando
`add_country_modifier`, `add_province_modifier`, `remove_country_modifier`,
`remove_province_modifier`, `has_country_modifier` o `has_province_modifier`
nombran un conjunto que no existe en `common/event_modifiers.txt` (o en las
listas de modificadores estáticos). El parser nativo guarda un puntero nulo y el
tooltip del efecto/trigger lo desreferencia al mostrar el nombre. El plugin
sustituye los cuatro slots de tooltip de efecto (`+0x24`) y los dos de tooltip
de trigger (`+0x28`) por guards que comprueban el puntero, escriben
`INVALID MODIFIERS` y devuelven; en los efectos además liberan el `std::string`
pasado por valor, igual que la ruta nativa "nada que mostrar". Los slots de
ejecución nativos ya son seguros con puntero nulo, así que el efecto se ignora
sin hacer nada. Las vtables se validan contra los punteros de Victoria II 3.04;
si alguna no coincide, ese slot queda nativo y se registra en el log.

Además, el plugin engancha el slot de inicialización de los efectos de añadir
(`+0x10`, `FUN_00881260`) y de quitar (`+0x1C`, `FUN_008820D0`). Después de
ejecutar el init nativo, el hook lee el ID resuelto (`+0x24` en add, `+0x20` en
remove); si es cero, escribe en el log
`guard_missing_modifiers: MISSING MODIFIER '<nombre>' in <add|remove>_<country|province>_modifier`
usando el nombre que todavía está en `contexto+0x22C`. Así se identifica el
modificador que falta y el efecto que lo referencia. Los antiguos mensajes
`SKIP ... has no provinces` por país se han eliminado porque solo describían
tags sin provincias esperados; se conserva el resumen cada 1000 llamadas.

### Botón de expulsión solo para el anfitrión (`[Multiplayer]`)

`[Multiplayer] host_only_kick=1` habilita dos botones de expulsión y los deja
solo en el anfitrión: el de la pantalla de lobby previa a la partida y el del
panel de Tab en partida.

**Lobby previo.** El `button_kick` de la entrada se deja en la posición vanilla
de `interface/ingamelobby.gui` (`205,2`). Versiones anteriores lo movían a
`(23,5)` en tiempo de ejecución, justo encima de `player_shield`, por eso parecía
dibujado sobre la bandera y se comía el clic. Las claves `kick_button_x` /
`kick_button_y` ya no se usan. El clic usa el manejador nativo `button_kick`, así
que expulsar recorre el mismo camino que abandonar el lobby (`FUN_00698660` →
`FUN_00696360`, que quita la entrada y envía los eventos de red
`0x18D`/`0x496`).

Cada entrada del lobby (`CLobbyHumanItem`) mide `0x4C` bytes: `+0x00` vtable
principal, `+0x1C` vtable secundaria `0x00E0B3C4`, `+0x20` control ventana,
`+0x28` byte "no es el jugador local" y `+0x2C` puntero al nombre. El slot
`+0x28` de la vtable secundaria (VA `0x00E0B3EC`, RVA `0x00A0B3EC`) apunta a
`FUN_00693D20` (RVA `0x00293D20`), el refresco de la entrada: actualiza el layout
de la ventana y, solo si `+0x28 != 0`, hace `GetControl("button_kick")` y
`Show()`. El plugin sustituye ese slot por un hook `__fastcall` (la función
nativa termina en `RET`, sin argumentos en pila) que:

1. Si `host_only_kick` está activo y el rol de sesión (`DAT_012589AC`, RVA
   `0x00E589AC`; `1` = anfitrión/servidor, `2` = cliente, `0` = un jugador) no
   es `1`, pone a cero el byte `entry+0x28`. Así el refresco nativo nunca
   muestra el botón en los clientes.
2. Llama al refresco original. El plugin ya no mueve el control: la posición
   sale del `.gui` y se queda en `(205,2)`.

El rol se lee en cada refresco, no al instalar el parche, así que el mismo
binario sirve para anfitrión y clientes sin configuración distinta. Para
desactivar la función por completo basta `host_only_kick=0`. El botón no cambia
la simulación, pero el clic sí altera la partida, así que el resto de jugadores
debe conocer la regla.

**Panel de Tab en partida.** El panel de Tab es `chat_window` (botones de
filtro `none/allies/foes/all` y `chat_message`), con el registro `chat_list`
como historial de chat (en `(5,115)`), no como lista de jugadores.
`FUN_0064F850` (RVA `0x0024F850`, `__stdcall(gameObj)`) construye las filas de
jugador y las guarda en `gameObj+0x1618`; las banderas/nombres son hijos de
`chat_window` y empiezan en `(90,30)` (`chat_shield_start`). Con menos de 5
jugadores usa la plantilla `player_entry`; con 5 o más, `short_player_entry`.
El plugin engancha las dos llamadas de `FUN_0064F850` (`RVA 0x00255470` y
`0x00257E31`, bytes `E8 DB A3 FF FF` y `E8 1A 7A FF FF`) con un `__stdcall`
que ejecuta la función nativa y después recorre las filas:

1. Camina en paralelo la lista de filas (`gameObj+0x1618`; nodo: `[0]` ventana,
   `[1]` anterior, `[2]` siguiente) y la lista de jugadores de la sesión
   (`DAT_012588e8+0x18`; siguiente en `+0x3C`), igual que el constructor nativo.
   En cada fila busca el control `v2dll_kick` con el slot `+0x48` de la
   ventana, que es **solo búsqueda** (`0x009A4610`). No se puede usar `+0x34`:
   ese slot es "crear o buscar" (`0x009A34F0`) y desreferencia `[ventana+0x30]`,
   que todavía es nulo mientras la fila se está construyendo; era la causa del
   cuelgue al abrir la lista de países del Tab. El `v2dll_kick` es un botón
   **nuevo e independiente** declarado en `interface/menubar.gui`, dentro de
   `player_entry` (`22,-13`, encima del nombre) y de `short_player_entry`
   (`7,-13`, encima de la bandera). No se usa el `button_kick` nativo.
2. Decide la visibilidad: el botón solo se muestra si el rol de sesión
   (`DAT_012589AC`; `1` = anfitrión) es `1` y la fila no es el jugador local.
   El jugador local se resuelve como `FUN_0068B610`: `DAT_012588e8+0xB24` →
   vtable `+0x44` → objeto `+0x6C` (id); como respaldo se compara el puntero
   del nodo devuelto por `FUN_0068B610` (RVA `0x0028B610`). La visibilidad se
   cambia con los slots correctos de `CEU3Button` (vtable `0x00E08BEC`):
   `+0x34` = `Show()` (`0x009EFEF0`, pone `control+0x4F = 1`) y `+0x38` =
   `Hide()` (`0x009EFEB0`, pone `control+0x4F = 0`). El byte que lee el render
   es `+0x4F` (`0x009A3CCC`), no `+0x64`; versiones anteriores llamaban a
   `+0x38` para mostrar y por eso ocultaban el botón.
3. Registra un delegado por fila `{vtable 0x00E0A560, self = RowKickTarget*,
   handler}`. El slot 2 de esa vtable (`0x00737D00`) llama al handler con
   `ECX = self` y sin argumentos de pila. `RowKickTarget` guarda
   `gameObject`, el nodo del jugador, su id (`+0x1C`), el tag (`+0x20`) y el
   índice de país (`+0x24`). Al ser `self` un puntero propio, cada botón sabe
   exactamente a qué jugador expulsa; no hay que seleccionar el nombre primero.

Al pulsar un botón, el handler vuelve a comprobar el rol (solo `1` =
anfitrión), rechaza el id local y recorre otra vez la lista de la sesión para
refrescar id/tag/país desde el nodo vivo; si el jugador ya no está, ignora el
clic (la fila puede sobrevivir al jugador). Después:

1. Localiza la sesión por `gameObj->vtable+0x44` (objeto de red) y
   `[objetoRed+0x38]` (sesión), igual que el kick nativo del lobby
   (`FUN_00696360`) y el handler de Quit de `player_lost_window`
   (`FUN_0064A580`).
2. Llama al slot `+0x40` de la vtable de sesión con el id del jugador
   objetivo: es la misma llamada que usa el kick nativo del lobby para
   quitarlo y desconectarlo; el cliente expulsado vuelve al frontend.
3. Construye `CAddPlayer` con `FUN_0072BA30` (RVA `0x0032BA30`, `__stdcall`,
   4 argumentos, `ret 0x10`, objeto de 0x60 bytes: evento `0x18D`, vtable
   `0x00E121DC`, nombre del jugador en `+0x3C`, id en `+0x58`) y lo manda por
   el slot `+0x18`: es lo que hace que todos los clientes quiten al jugador de
   sus listas, igual que el kick nativo.
4. Construye y envía `CStartAICommand` (evento `0x18D`, vtable `0x00E121DC`,
   0x44 bytes) con el tag en `+0x3C` y el índice de país en `+0x40` (no el
   nombre: versiones anteriores escribían ahí un puntero y una longitud, que el
   motor ignoraba), y lo manda por el slot `+0x18` de la vtable de sesión. Así
   el país pasa a la IA y la partida sigue.

En los clientes los botones se ocultan (`Hide()`, `control+0x4F = 0`) y el
handler se ignora aunque llegue un clic. Antes de registrar el delegado se
recorre la lista de listeners (`control+0x54`: cabeza en `+0x04`, siguiente del
nodo en `+0x08`, delegado en `+0x00`) para no añadirlo dos veces.


### Checksum estable del lobby (`[Multiplayer]`)

`stable_checksum=1` (por defecto) hace que el checksum del lobby sea estable
entre rehospedajes con dos parches. El primero elimina `map/cache/time` del
cálculo; el segundo fija la cadena de cuatro letras que se muestra e intercambia
a `AAAA`.

`map/cache/time` es un archivo de 4 bytes que se reescribe cada vez que el motor
regenera la caché del mapa, así que dos jugadores con los mismos archivos de
juego pueden acabar con checksums distintos tras volver al menú o rehospedar la
partida.

`InitializeHistoryDatabase` (`FUN_006377A0`, RVA `0x002377A0`) acumula el
checksum del lobby en `app+0x10`. Suma primero `map/default.map` con el `CALL`
de VA `0x006383C0` y después `map/cache/time` con el `CALL` de VA `0x00638441`
(RVA `0x00238441`), ambos a `CalcularChecksumArchivo` (`0x009DA400`). El parche
sustituye solo el segundo `CALL` (bytes `E8 BA 1F 3A 00`) por
`xor eax,eax; nop; nop; nop` (`31 C0 90 90 90`), de modo que el
`ADD [EDI+0x10],EAX` siguiente suma cero. No se usa `ret`: eso volvería de
`InitializeHistoryDatabase` y se saltaría el resto del checksum.

La cadena que se muestra en el lobby y que se intercambia por red la genera
`FUN_009DA9A0(param_1+0x20, salida)`, que suma `[param_1+0x30] + [param_1+0x2c]`
y codifica el resultado como 4 letras `A`–`Z`. El parche sustituye en
`0x009DA9C9` (RVA `0x005DA9C9`) los bytes `8B 78 10 03 78 0C`
(`MOV EDI,[EAX+0x10]` / `ADD EDI,[EAX+0xc]`) por `31 FF 90 90 90 90`
(`xor edi,edi` + NOPs), así que el codificador siempre produce `AAAA`. El
checksum real de archivos se sigue calculando y escribiendo en el log
(`Checksum is ...`), de modo que las diferencias reales de mod quedan
registradas aunque el lobby no las compare. Todos los jugadores deben usar el
mismo valor. Sin estos parches, el flujo de guardar y rehospedar puede rechazar
a un cliente cuyo `time` se regeneró después.


### Guardado y rehospedaje desde el diálogo (`auto_rehost`)

Victoria II no tiene hotjoin: cuando se pierde un jugador humano, el motor abre
la ventana `player_lost_window` (`FUN_0064EF50`, RVA `0x0024EF50`) y pausa la
partida. La única continuación vanilla es guardar y volver a montar la sesión.
`[Multiplayer] auto_rehost=1` (por defecto) añade un botón **Rehost** a ese
diálogo; al pulsarlo el anfitrión guarda y **todo el grupo vuelve al frontend y
se reúne solo**, sin clics adicionales. El anfitrión también puede lanzarlo en
cualquier momento con **Ctrl+Alt+R** (sondeo `GetAsyncKeyState` una vez por
frame de partida, con detección de flanco y 3 s de enfriamiento).

La ventana se crea a través del slot `0x108` de la vtable del objeto de partida
(base `0x00E0A34C`, slot en VA `0x00E0A454`, RVA `0x00A0A454`), que apunta a
`FUN_0064EF50`. El plugin sustituye ese slot por un hook `__fastcall`
(`ECX` = objeto de partida, sin argumentos en pila) que:

1. Llama primero al constructor nativo de la ventana, para conservar la pausa y
   el diálogo vanilla.
2. Si `auto_rehost` está activo y el rol de sesión (`DAT_012589AC`, RVA
   `0x00E589AC`; `1` = anfitrión, `2` = cliente, `0` = un jugador) es `1`,
   busca `rehost_button` dentro de la ventana (`ventana[2]` es el control de
   ventana) y le registra un delegado `{vtable 0x00E0A560, self = ventana,
   handler}` en el hueco libre `ventana+0x70`. En clientes y partidas de un
   jugador no se registra nada.

El handler del botón (`v2dll_RehostClicked`) y el atajo **Ctrl+Alt+R** comparten
la misma entrada (`RehostBeginHost`):

1. Guarda la partida con la entrada nativa `FUN_00675A80` (RVA `0x00275A80`),
   firma `__thiscall(std::string* ruta, app*)`: la ruta va en `ECX` y el objeto
   de partida en la pila. El plugin construye un `std::string` legacy de 24
   bytes (`char buffer[16]`, `size`, `capacity`) con `save games/r.v2`. Son
   exactamente 15 caracteres, el límite de la optimización de cadena corta del
   motor, así que no hace falta reservar memoria en el heap ni arriesgar el
   layout. El nombre es fijo y se sobrescribe en cada rehospedaje.
2. **No** llama a `FUN_0064A580` (el Quit nativo). Hacerlo construía un comando
   de red `0x18D` (`FUN_009E80F0`) por cada jugador perdido y la partida
   rompía dentro de ese constructor. El desmontaje multijugador nativo ya cierra
   la sesión y avisa a los clientes.
3. Arranca la máquina de estados (`g_rehostStage`) en `host:wait-frontend` y
   deja que el tick por frame del objeto de partida ponga las banderas: primero
   espera `rehost_flush_frames` fotogramas para que el socket pueda enviar la
   desconexión y después deja `app+0x1D21 = 0` y pone `app+0x1D22 = 1`.
   `FUN_00654D80` comprueba `0x1D21` primero; con `0x1D22` construye un
   **gestor de frontend nuevo** (`0x754A00`) en lugar de la pantalla de menú
   principal. Si la petición no surte efecto (el objeto de partida sigue
   actualizándose) se reintenta cada 1,5 s hasta 6 veces.
4. Mientras dura el flujo del anfitrión, el SM de `0x0065666F`
   (`MOV BYTE [EBX+0x1D21],1`, RVA `0x0025666F`) se reescribe para almacenar 0
   y se restaura al terminar: esa comprobación de país sin provincias se evalúa
   antes que `0x1D22` y hacía aterrizar al anfitrión en el menú de un jugador.

La automatización se ejecuta en los dos ticks por frame que el plugin engancha:

* `VA 0x00E0A350` (vtable `0x00E0A34C + 4`, `FUN_00654D80`): mientras el
  anfitrión está en `host:wait-frontend`, tras `rehost_flush_frames` fotogramas
  fuerza `0x1D21 = 0` y `0x1D22 = 1` antes del tick nativo, y guarda el rol y
  el instante del último frame de partida para armar a los clientes.
* `VA 0x00E13DC0` (vtable `0x00E13DBC + 4`, `FUN_00754F90`): tras el tick
  nativo del gestor de frontend, avanza la máquina de estados.
* `VA 0x00E04D00` (vtable `0x00E04CFC + 4`, `FUN_005F8470`, menú principal de un
  jugador): red de seguridad. Si el rehospedaje aterriza ahí en vez de en el
  frontend multijugador, lo registra una vez, restaura el parche de `0x1D21` y
  termina el flujo en vez de esperar para siempre.

Flujo del anfitrión: espera a que el gestor nuevo tenga la tabla de pantallas
(`+0x74C`), salta a la pantalla 4 (multijugador) con `FUN_007580E0` (que
necesita EAX = gestor y EDI = índice; se llama con un thunk `naked`), llama a
`FUN_00764B30` (prepara el diálogo de host) y `FUN_00767C30` (confirma el host),
espera a la pantalla 3 (lobby) y a que `lobby+0x5C0` (sesión) no sea nulo.
Ese campo lo escribe la activación del lobby `FUN_0076B4B0` copiándolo de
**`netmgr+0x130`**, pero el único código que rellena `netmgr+0x130` es el botón
Host del frontend multijugador; `FUN_00767C30` solo llama a
`CFrontEnd::SetSession`, que escribe **`netmgr+0x12C`**. Como el rehost llama a
los handlers del diálogo directamente, `netmgr+0x130` quedaba nulo y el flujo se
quedaba en `host:wait-lobby`. El plugin ahora: (1) copia `netmgr+0x130 =
netmgr+0x12C`; (2) escribe la ruta del guardado en `netmgr+0x150`
(`save games/r.v2`) y el nombre en `netmgr+0x134` (`r.v2`), que es lo que la
activación manda a los clientes; (3) vuelve a ejecutar `FUN_0076B4B0`; y (4) si
aun así sigue nulo, escribe `lobby+0x5C0 = netmgr+0x12C` directamente. Después
marca el ítem de la lista `save_games_list` (ventana `save_games` de
`interface/lobby.gui`), espera `host_lobby_wait_ms` y pulsa Play con
`FUN_00772300`. Play no lee la lista: usa `netmgr+0x150` y `netmgr+0x134`, por
eso la selección es solo cosmética y no aborta el rehost si no aparece.

Flujo del cliente: la única instrucción que pone `0x1D22` en la partida es
`0x006553BD` (RVA `0x002553BD`), la rama de "el anfitrión ha desaparecido". El
plugin la sustituye por un thunk que, además de poner la bandera, avisa a
`v2dll_MpSessionEndMark`; así el tick distingue "el anfitrión se fue" de "me fui
yo a propósito" (esto último no pone `0x1D22`). Ese aviso es la orden del
anfitrión que reciben **todos** los clientes. El marcador arma la salida y, tras
`rehost_flush_frames` fotogramas, el hook del game-object pone `0x1D21=0` y
`0x1D22=1` en cada cliente para devolverlo al frontend multijugador **sin
guardar** (el cliente nunca llama a `FUN_00675A80`; el único que guarda es el
anfitrión). Después, tras `client_join_delay_ms`, salta a la pantalla 4, llama a
`FUN_00766B80` (abre el diálogo de unión directa) y `FUN_00767140` (confirma la
unión), y espera a llegar al lobby. El diálogo usa como dirección por defecto el libro de
direcciones `0x475500()+0x6C`; el plugin escribe en el log
`rehost: auto-join address='…' last_entered='…'` para diagnosticar si esa
dirección quedó vacía.

La lista de partidas del lobby se rellena **una sola vez al arrancar** (el
escaneo de `0x637540`), antes de que el plugin termine. Por eso `V2Mod_Init`
copia la partida `.v2` más reciente a `save games/r.v2` si aún no existe, para
que la lista contenga un ítem seleccionable; el anfitrión la sobrescribe al
pulsar Rehost.

Diagnóstico del frontend: cada vez que cambia el gestor o el índice de pantalla,
el tick escribe `rehost: frontend manager=… screens=… vector=… index=… active=…
stage=…`. `screens` es la tabla `+0x74C` que consume `FUN_007580E0`, `vector` es
el `std::vector<screen*>` de `+0x6C4` (mismos ocho punteros: 3 = lobby,
4 = menú multijugador) y `active` es `+0x6D4`. El plugin **no** escribe nunca en
`+0x74C`: apuntarlo al buffer de `+0x6C4` haría que `FUN_00757140` borrase las
pantallas dos veces. La tabla `+0x74C` se valida entera (cada puntero y su
vtable) antes de llamar a `FUN_007580E0`; el vector de `+0x6C4` solo se usa en
modo lectura para localizar objetos de pantalla cuando `+0x74C` aún no está
listo. Si no hay tabla válida, aborta el rehospedaje sin llamar a código nativo.

Claves nuevas en `[Multiplayer]`: `host_lobby_wait_ms=20000` (espera del
anfitrión en el lobby antes de Play, 3–600 s), `client_join_delay_ms=10000`
(espera del cliente antes de abrir el diálogo de unión, 1–300 s),
`auto_rehost_timeout_ms=120000` (límite de toda la secuencia, 10 s–30 min),
`rehost_flush_frames=45` (fotogramas que se dejan pasar tras guardar antes de
pedir el frontend; máximo 600) y `hostjoin_log=1` (log propio del flujo
anfitrión/cliente).

`hostjoin_log=1` abre `hostjoin.log` en la misma carpeta que
`v2dll_country_daily_optimizer.log` y escribe ahí, con marca de tiempo, todo lo
que decide el flujo anfitrión/cliente: rol de sesión, Rehost/Ctrl+Alt+R, cada
transición de `g_rehostStage` (`host:*` / `client:*`), selección de `r.v2`,
entrada en el lobby, dirección de auto-unión, diálogo de jugador perdido,
`clean_state_on_menu` y los volcados `sync_realign:` / `sync_dump:` de la
comparación con el anfitrión (`cp::hostjoin_logf` desde `sync_check.cpp`). Las
mismas líneas se siguen enviando al log compartido del plugin (`HostJoinLog`
reenvía a `g_log`), así que el archivo dedicado solo sirve para comparar
anfitrión y cliente sin el ruido diario. Con `disable_log=1` no se abre.

Todas las llamadas nativas del flujo (`FUN_007580E0`, los manejadores del menú
multijugador, `FUN_00772800` y `FUN_00772300`) van envueltas en `__try/__except`
y todos los punteros (tabla `+0x74C`, cada pantalla, los nodos de la lista de
partidas) se validan antes de usarse, para que un fallo no tumbe la partida.

El botón necesita el control `rehost_button` en `interface/ingamelobby.gui`
(el repo lo coloca en `(178,240)`, debajo de `continue_button`). El motor
transfiere `r.v2` del anfitrión a los clientes por la red; no hay copia manual.

### OOS instantáneo tras el rehospedaje

Al cargar la partida, cada máquina entra en el primer día desde una posición
distinta del generador global: `g_rngCalls` (`0xF20C14`) y el estado MT
(`0xF0ECF0`) son globales de ejecución y **no forman parte del guardado**. El
anfitrión dibuja unos cientos de veces mientras recarga y vuelve a montar el
lobby; los clientes no. El vector de sincronización que sí viaja en la partida
solo guarda el contador con el que **empezó** el último día simulado, así que
en la primera comparación los dos vectores aún coinciden (en el log real,
11992/11992) y la diferencia solo aparece al día siguiente: ese día se simuló
desde otra posición y los hashes de provincias, países y pops difieren
(14222/14398 en `rng_calls_end`, `sum` 11992 frente a 12175). Como los hashes
de estado también cambian, `oos_notice` lo clasifica como divergencia real y
el juego muestra el diálogo.

Arreglo: `request_sync_realign()` (en `sync_check.h`) arma una bandera que el
plugin pone en el anfitrión justo antes de pulsar Play en el lobby recargado y
en cada cliente al llegar a ese lobby. En la primera comparación,
`realign_if_requested()` toma la semilla y el contador del vector del
anfitrión (los mismos en todas las máquinas porque vienen del guardado),
reescribe con ellos los dos primeros elementos del vector local, fija
`g_mtSeed` y `g_rngCalls` y llama a `Rng_Resync` (`0x009B7C80`). Todas las
máquinas simulan así el día recargado desde la misma posición y los hashes de
los días siguientes coinciden. Es el mismo realineado que hace el juego ante
un fallo, pero antes y sin diálogo; deja en el log
`sync_realign: first comparison after the rehost; RNG set to seed … advanced …
draws`. El hook de `Vector_Equals` (`0x00283036`) se instala siempre, aunque
`state_checksum`/`oos_notice` estén apagados, porque también lleva este
realineado.

Con el realineado los dos primeros elementos ya coinciden todos los días
(`sum` y `aux`), pero los hashes de países y pops seguían difiriendo desde el
primer día simulado. La causa es el gestor de eventos (`DAT_01319B80`), que
tiene su propio MT19937 en `+0x40` y se crea con `time(NULL)` como semilla en
cuatro sitios: `0x00687F2E` y `0x00686194` (carga del mundo), `0x004B1EAE`
(reconstrucción de candidatos) y `0x008A76D9` (constructor). Dos máquinas que
cargan el mismo guardado con segundos de diferencia tiran probabilidades de
evento distintas y el día simulado diverge. Con `event_seed_sync=1` el plugin
sustituye en los cuatro sitios el `CALL time; ADD ESP,4` por un `CALL` a un
thunk propio que deja en `EAX` una semilla derivada de la fecha del mundo
(`fecha * 1103515245 + 12345`, impar para no caer en la tabla por defecto de
`seed_init`); la fecha va en el guardado y es igual en todas las máquinas.
Además, el gestor se resiembra con `seed_init` (`0x009B7670`) y su índice se
pone a cero **al principio de cada día**, en `before_compare`, antes de
`DayTick`: así también queda cubierta la recarga manual o la reentrada de un
jugador con el juego caído, que no arman `request_sync_realign()` y en las que
solo esa máquina recrea el gestor. El log muestra
`event_rng: the event manager is seeded from the world date…` al instalar y
`event_rng: day start: seed …` en cada comparación.

El realineado del generador global ya no espera al rehospedaje ni a una
diferencia grande: `realign_if_requested()` lo aplica en **cualquier**
comparación en la que `g_rngCalls`/`g_mtSeed` no coincidan con el final del día
anterior del anfitrión (`rng_calls_end`; si el vector del anfitrión aún tiene
solo dos elementos, usa su `rng_calls`). El umbral anterior (`gap > 64`) dejaba
pasar el caso real del 2026-11-12: un jugador recargó el guardado y quedó 4
dibujos por delante (71377 frente a 71373 al empezar 1836-01-11); el día se
simuló desde otra posición, al final la diferencia era de 20 dibujos y el
`sum` del 01-12 ya no coincidía (`71377/71373`, OOS real). El log de cada
realineado es
`sync_realign: day start does not match the host's day end: seed … advanced …
draws (was …, day-start count …)`.

Para diagnosticar lo que quede, `request_sync_realign()` activa `sync_dump`
durante las ocho primeras comparaciones: cada una escribe, entre marcadores
`===== BEGIN/END day … =====`, los dos vectores de sincronización elemento por
elemento (`local[i]` y `host[i]` con el nombre de cada uno), el mapa humano/IA
(`world+0xAEC`), el estado de los tres MT (global, mundo y eventos), y por país
el dinero, provincias propias, objeto IA, número de pops y suma de tamaños.
Comparando el log del anfitrión con el de un cliente, la primera línea
`sync_dump: cN …` que difiera señala el país donde empieza la divergencia.
Además, si en plena partida difiere cualquier hash de estado, el plugin arma el
mismo volcado para ese día y los dos siguientes (como mucho tres veces por
sesión), aunque no haya habido rehospedaje.

Cada día, `before_compare` escribe en `hostjoin.log` una línea por máquina:
`sync_world_rng: day … rng=… seed=… in-command draws=… private draws=… event_mt=… <sitios>`.
`draws` es el número de sorteos que hizo cada sitio redirigido del RNG del
mundo durante el día anterior; si el anfitrión y un cliente difieren en un
sitio (o un sitio solo aparece en una máquina), ese camino de código avanza el
generador compartido en una máquina y no en la otra, y desplaza todos los
sorteos posteriores del día: es la causa de que el estado diverja aunque el
contador se realinee al día siguiente. `event_mt` es el estado del MT del
gestor de eventos tal como lo dejó el día anterior, antes del reseed diario; si
difiere, el procesamiento de eventos ya divergió. El contador de sitios se
reinicia en esa misma llamada, en el mismo punto del día en todas las máquinas.

**Sitios solo del anfitrión (`world_rng_private_sites`).** El log del
2026-11-13 mostró que, en un día, el anfitrión hacía 325 sorteos dentro de
comandos y el cliente ninguno: `00820D18=35 00821F32=17 008387C2=8
00838955=1 0083DE11=41 00846408=11 0085599E=41 008569CF=40 0085CFBF=131`.
Son código de IA (trabajos de IA por frame y las decisiones diarias de la IA);
`CCountry+0x208` es 0 en las máquinas que no ejecutan la IA de ese país, por eso
solo el anfitrión los alcanza. Con `sync_world_rng=1` esos sorteos movían el
generador compartido solo en el anfitrión y el día siguiente empezaba desde otra
posición, que es el OOS que quedaba.

Con `world_rng_private_sites` cada uno de esos sitios usa su **propio** MT19937,
sembrado con el día del mundo y el índice del sitio (no con el reloj), y no
toca `g_rngCalls`. El valor es determinista en cualquier máquina que ejecute el
sitio y una carga o un rehospedaje reinicia la misma secuencia el mismo día. La
lista admite RVAs (`420D18`) o las VAs que imprime el log (`00820D18`),
separadas por espacios, comas o punto y coma; `0`, `none` o vacío desactiva el
reparto y vuelve al comportamiento anterior. Todos los jugadores deben usar la
misma lista. El resto de sitios conserva la regla de siempre (dentro de un
comando van al generador global contado; fuera, al privado por reloj) y
`sync_realign` sigue realineando el generador compartido al empezar cada día.

### Memoria que sobrevive al menú principal (`clean_state_on_menu`)

El motor construye `CWorld` una sola vez, en el arranque: `FUN_0067D940`
destruye el mundo anterior (destructor virtual con `arg=1`) y crea uno nuevo de
`0xD28` bytes con `FUN_0067D9C0`. Esa función solo se llama desde el arranque
(`0x0043C789`), nunca al volver al menú. El mundo, y con él países, provincias,
pops, ejércitos y mercados de la partida terminada, sigue en memoria hasta que
el proceso sale, donde el destructor global `FUN_00633C60` lo libera. El gestor
de eventos (`DAT_01319B80`) está igual: solo lo libera ese destructor de salida
o la carga de un guardado, que lo sustituye por uno nuevo.

Con `clean_state_on_menu=1`, cuando el frontend o el menú principal vuelven a
actualizarse después de una partida (el hook de actualización del juego arma la
bandera), el plugin ejecuta una vez:

- el reset de mundo del propio motor (`FUN_0067D940`), que libera el mundo
  viejo y deja uno nuevo y vacío, el mismo estado que al arrancar;
- la liberación del gestor de eventos igual que una carga: `FUN_008A6680`
  (libera sus vectores) y `free` (`0x00AAE91B`), poniendo antes
  `DAT_01319B80` a nulo para que una carga posterior cree uno nuevo.

Se ejecuta antes de la máquina de estados del rehospedaje, para que si esta
pulsa Play en ese mismo fotograma la partida se cargue ya en el mundo limpio.
El log deja `clean_state_on_menu: <dónde>: the world was rebuilt and the event
manager released`. Si un menú usara punteros al mundo viejo, la opción se puede
apagar.

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

