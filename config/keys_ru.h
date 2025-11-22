#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ Ё │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Й │ Ц │ У │ К │ Е │ Н │ Г │ Ш │ Щ │ З │ Х │ Ъ │  \  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │ Ф │ Ы │ В │ А │ П │ Р │ О │ Л │ Д │ Ж │ Э │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │ Я │ Ч │ С │ М │ И │ Т │ Ь │ Б │ Ю │ . │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define RU_YO       GRAVE           // Ё
#define RU_1        N1              // 1
#define RU_2        N2              // 2
#define RU_3        N3              // 3
#define RU_4        N4              // 4
#define RU_5        N5              // 5
#define RU_6        N6              // 6
#define RU_7        N7              // 7
#define RU_8        N8              // 8
#define RU_9        N9              // 9
#define RU_0        N0              // 0
#define RU_MINUS    MINUS           // -
#define RU_EQUAL    EQUAL           // =

// Row 2
#define RU_II       Q               // Й
#define RU_C        W               // Ц
#define RU_Y        E               // У
#define RU_K        R               // К
#define RU_E        T               // Е
#define RU_N        Y               // Н
#define RU_G        U               // Г
#define RU_SHA      I               // Ш
#define RU_SHCH     O               // Щ
#define RU_Z        P               // З
#define RU_H        LBRC            // Х
#define RU_HARD     RBRC            // Ъ
#define RU_BSLH     BSLH            // (backslash)

// Row 3
#define RU_F        A               // Ф
#define RU_YERU     S               // Ы
#define RU_V        D               // В
#define RU_A        F               // А
#define RU_P        G               // П
#define RU_R        H               // Р
#define RU_O        J               // О
#define RU_L        K               // Л
#define RU_D        L               // Д
#define RU_ZHE      SEMI            // Ж
#define RU_YE       SQT             // Э

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

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │ ! │ " │ № │ ; │ % │ : │ ? │ * │ ( │ ) │ _ │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │   │  /  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │   │   │   │   │   │   │   │   │   │   │   │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │   │   │   │   │   │   │   │   │   │ , │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define RU_EXCL     LS(RU_1)        // !
#define RU_DQT      LS(RU_2)        // "
#define RU_NO       LS(RU_3)        // №
#define RU_SEMI     LS(RU_4)        // ;
#define RU_PRCNT    LS(RU_5)        // %
#define RU_COLON    LS(RU_6)        // :
#define RU_QMARK    LS(RU_7)        // ?
#define RU_STAR     LS(RU_8)        // *
#define RU_LPAR     LS(RU_9)        // (
#define RU_RPAR     LS(RU_0)        // )
#define RU_UNDER    LS(RU_MINUS)    // _
#define RU_PLUS     LS(RU_EQUAL)    // +

// Row 3
#define RU_SLASH    LS(RU_BSLH)     // /

// Row 4
#define RU_COMMA    LS(RU_DOT)      // ,

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │   │   │   │   │   │ ₽ │   │   │   │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │   │   │   │   │   │   │   │   │   │   │   │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define RU_RUSL     RA(RU_8)        // ₽
