#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

/*
 * Without Shift
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ё │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ й │ ц │ у │ к │ е │ н │ г │ ш │ щ │ з │ х │ ъ │  \  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │ ф │ ы │ в │ а │ п │ р │ о │ л │ д │ ж │ э │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │ я │ ч │ с │ м │ и │ т │ ь │ б │ ю │ . │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define RU_YO       GRAVE           // Ё

// Row 2
#define RU_Y        Q               // Й
#define RU_TS       W               // Ц
#define RU_U        E               // У
#define RU_K        R               // К
#define RU_YE       T               // Е
#define RU_N        Y               // Н
#define RU_G        U               // Г
#define RU_SH       I               // Ш
#define RU_SHCH     O               // Щ
#define RU_Z        P               // З
#define RU_KH       LBKT            // Х
#define RU_HARD     RBKT            // Ъ

// Row 3
#define RU_F        A               // Ф
#define RU_BI       S               // Ы
#define RU_V        D               // В
#define RU_A        F               // А
#define RU_P        G               // П
#define RU_R        H               // Р
#define RU_O        J               // О
#define RU_L        K               // Л
#define RU_D        L               // Д
#define RU_ZH       SEMI            // Ж
#define RU_E        SQT             // Э

// Row 4
#define RU_YA       Z               // Я
#define RU_CH       X               // Ч
#define RU_S        C               // С
#define RU_M        V               // М
#define RU_I        B               // И
#define RU_T        N               // Т
#define RU_SOFT     M               // Ь
#define RU_B        COMMA           // Б
#define RU_YU       DOT             // Ю
#define RU_DOT      SLASH           // .

/*
 * With Shift
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ Ё │ ! │ " │ № │ ; │ % │ : │ ? │ * │ ( │ ) │ _ │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Й │ Ц │ У │ К │ Е │ Н │ Г │ Ш │ Щ │ З │ Х │ Ъ │  /  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │ Ф │ Ы │ В │ А │ П │ Р │ О │ Л │ Д │ Ж │ Э │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │ Я │ Ч │ С │ М │ И │ Т │ Ь │ Б │ Ю │ , │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define RU_NO       LS(N3)          // №
#define RU_SEMI     LS(N4)          // ;
#define RU_COLON    LS(N6)          // :
#define RU_QMARK    LS(N7)          // ?

// Row 2
#define RU_SLASH    LS(BACKSLASH)   // /

// Row 4
#define RU_COMMA    LS(SLASH)       // ,
