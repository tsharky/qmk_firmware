#include QMK_KEYBOARD_H
#include "keymap_german.h"
#include "keymap_us_international.h"

#define BONE_DE_BASE 0
#define BONE_DE_SHIFT 1
#define BONE_DE_SYMBOLS 2
#define BONE_DE_NAVIGATION 3
#define BONE_DE_LAYER5 4
#define BONE_DE_LAYER6 5
#define BONE_US_BASE 6
#define BONE_US_SHIFT 7
#define BONE_US_SYMBOLS 8
#define BONE_US_NAVIGATION 9
#define QWERTY_BASE 10
#define DVORAK_BASE 11
#define NUMPAD 12
#define PROGRAM 13

#define LS_DE_LSFT LM(BONE_DE_SHIFT, MOD_LSFT)
#define LS_DE_RSFT LM(BONE_DE_SHIFT, MOD_LSFT)
#define LS_DE_MOD3 MO(BONE_DE_SYMBOLS)
#define LS_DE_MOD4 LT(BONE_DE_NAVIGATION, KC_APP)
#define LS_DE_LAYER2_MOD3 MO(BONE_DE_LAYER5)
#define LS_DE_LAYER3_LSFT MO(BONE_DE_LAYER5)
#define LS_DE_LAYER3_RSFT MO(BONE_DE_LAYER5)
#define LS_DE_LAYER3_MOD4 MO(BONE_DE_LAYER6)
#define LS_DE_LAYER4_MOD3 MO(BONE_DE_LAYER6)
#define LS_DE_LAYER4_MOD4 TG(BONE_DE_NAVIGATION)

#define LS_US_LSFT LM(BONE_US_SHIFT, MOD_LSFT)
#define LS_US_RSFT LM(BONE_US_SHIFT, MOD_LSFT)
#define LS_US_MOD3 MO(BONE_US_SYMBOLS)
#define LS_US_MOD4 LT(BONE_US_NAVIGATION, KC_APP)
#define LS_US_LAYER4_MOD4 TG(BONE_US_NAVIGATION)

#define LS_NUM LT(NUMPAD, KC_NUM)
#define LS_PRGM MO(PROGRAM)

/*
 *
 * Keymap: Qwerty
 *
 * ,-------------------------------------------------------------------------------------------------------------------.
 * | Esc    |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  |  F10 |  F12 | PSCR | SLCK | PAUS |  FN0 |  BOOT  |
 * |--------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
 * | =+     |  1!  |  2@  |  3#  |  4$  |  5%  |                           |  6^  |  7&  |  8*  |  9(  |  0)  | -_     |
 * |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |                           |   Y  |   U  |   I  |   O  |   P  | \|     |
 * |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
 * | Caps   |   A  |   S  |   D  |   F  |   G  |                           |   H  |   J  |   K  |   L  |  ;:  | '"     |
 * |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
 * | Shift  |   Z  |   X  |   C  |   V  |   B  |                           |   N  |   M  |  ,.  |  .>  |  /?  | Shift  |
 * `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
 *          | `~   | INS  | Left | Right|                                         | Up   | Down |  [{  |  ]}  |
 *          `---------------------------'                                         `---------------------------'
 *                                        ,-------------.         ,-------------.
 *                                        | Ctrl | Alt  |         | Gui  | Ctrl |
 *                                 ,------|------|------|         |------+------+------.
 *                                 |      |      | Home |         | PgUp |      |      |
 *                                 | BkSp | Del  |------|         |------|Return| Space|
 *                                 |      |      | End  |         | PgDn |      |      |
 *                                 `--------------------'         `--------------------'
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BONE_DE_BASE] = LAYOUT(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,
        KC_ESC, DE_1, DE_2, DE_3, DE_4, DE_5,
        KC_TAB, DE_J, DE_D, DE_U, DE_A, DE_X,
        KC_BSPC, DE_C, DE_T, DE_I, DE_E, DE_O,
        KC_LALT, DE_F, DE_V, DE_UDIA, DE_ADIA, DE_ODIA,
        KC_HOME, KC_END, KC_LEFT, KC_RGHT,
        KC_LCTL, KC_LWIN,
        LS_DE_MOD3,
        KC_ENT, LS_DE_LSFT, LS_DE_MOD4,
        KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SCRL, KC_PAUS, LS_NUM, LS_PRGM,
        DE_6, DE_7, DE_8, DE_9, DE_0, KC_DEL,
        DE_P, DE_H, DE_L, DE_M, DE_W, DE_SS,
        DE_B, DE_N, DE_R, DE_S, DE_G, DE_Q,
        DE_Y, DE_Z, DE_COMM, DE_DOT, DE_K, KC_RALT,
        KC_UP, KC_DOWN, KC_PGUP, KC_PGDN,
        KC_RWIN, KC_RCTL,
        LS_DE_MOD3,
        LS_DE_MOD4, LS_DE_RSFT, KC_SPC
    ),

    [BONE_DE_SHIFT] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______,
        LS_DE_LAYER2_MOD3,
        _______, KC_CAPS, XXXXXXX,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, _______, _______, _______, _______, XXXXXXX,
        _______, _______, _______, _______, _______, _______,
        _______, _______, XXXXXXX, XXXXXXX, _______, _______,
        _______, _______, _______, _______,
        _______, _______,
        LS_DE_LAYER2_MOD3,
        XXXXXXX, KC_CAPS, _______
    ),

    [BONE_DE_SYMBOLS] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, DE_UNDS, DE_LBRC, DE_RBRC, DE_CIRC,
        _______, DE_BSLS, DE_SLSH, DE_LCBR, DE_RCBR, DE_ASTR,
        _______, DE_HASH, DE_DLR, DE_PIPE, DE_TILD, DE_GRV,
        _______, _______, _______, _______,
        _______, _______,
        XXXXXXX,
        _______, LS_DE_LAYER3_LSFT, LS_DE_LAYER3_MOD4,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        DE_EXLM, DE_LABK, DE_RABK, DE_EQL, DE_AMPR, XXXXXXX,
        DE_QUES, DE_LPRN, DE_RPRN, DE_MINS, DE_COLN, DE_AT,
        DE_PLUS, DE_PERC, DE_DQUO, DE_QUOT, DE_SCLN, _______,
        _______, _______, _______, _______,
        _______, _______,
        XXXXXXX,
        LS_DE_LAYER3_MOD4, LS_DE_LAYER3_RSFT, _______
    ),

    [BONE_DE_NAVIGATION] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, KC_PGUP, KC_BSPC, KC_UP, KC_DEL, KC_PGDN,
        _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,
        _______, KC_ESC, KC_TAB, KC_INS, KC_ENT, KC_UNDO,
        _______, _______, _______, _______,
        _______, _______,
        LS_DE_LAYER4_MOD3,
        _______, XXXXXXX, LS_DE_LAYER4_MOD4,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        XXXXXXX, XXXXXXX, KC_TAB, KC_PSLS, KC_PAST, _______,
        XXXXXXX, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_PMNS,
        XXXXXXX, KC_P4, KC_P5, KC_P6, DE_COMM, KC_PDOT,
        KC_COLN, KC_P1, KC_P2, KC_P3, DE_SCLN, _______,
        _______, _______, _______, _______,
        _______, _______,
        LS_DE_LAYER4_MOD3,
        LS_DE_LAYER4_MOD4, XXXXXXX, KC_P0
    ),

    [BONE_DE_LAYER5] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, UC(L'₁'), UC(L'₂'), UC(L'₃'), UC(L'♀'), UC(L'♂'),
        _______, UC(L'θ'), UC(L'δ'), UC(L'λ'), UC(L'α'), UC(L'ξ'),
        _______, UC(L'χ'), UC(L'τ'), UC(L'ι'), UC(L'ε'), UC(L'ο'),
        _______, UC(L'φ'), UC(L'ϵ'), UC(L'η'), UC(L'η'), UC(L'ϵ'),
        _______, _______, _______, _______,
        _______, _______,
        XXXXXXX,
        _______, XXXXXXX, XXXXXXX,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        UC(L'⚥'), UC(L'ϰ'), UC(L'⟨'), UC(L'⟩'), UC(L'₀'), _______,
        UC(L'π'), UC(L'ψ'), UC(L'λ'), UC(L'μ'), UC(L'ω'), UC(L'ς'),
        UC(L'β'), UC(L'ν'), UC(L'ρ'), UC(L'σ'), UC(L'γ'), UC(L'ϕ'),
        UC(L'υ'), UC(L'ζ'), UC(L'ϱ'), UC(L'ϑ'), UC(L'κ'), _______,
        _______, _______, _______, _______,
        _______, _______,
        XXXXXXX,
        XXXXXXX, XXXXXXX, _______
    ),

    [BONE_DE_LAYER6] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, UC(L'¬'), UC(L'∨'), UC(L'∧'), UC(L'⊥'), UC(L'∡'),
        _______, UC(L'Θ'), UC(L'Δ'), UC(L'⊂'), UC(L'∀'), UC(L'Ξ'),
        _______, UC(L'ℂ'), UC(L'∂'), UC(L'∫'), UC(L'∃'), UC(L'∈'),
        _______, UC(L'Φ'), UC(L'√'), UC(L'∪'), UC(L'ℵ'), UC(L'∩'),
        _______, _______, _______, _______,
        _______, _______,
        XXXXXXX,
        _______, XXXXXXX, XXXXXXX,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        UC(L'∥'), UC(L'→'), UC(L'∞'), UC(L'∝'), UC(L'∅'), _______,
        UC(L'Π'), UC(L'Ψ'), UC(L'Λ'), UC(L'⇔'), UC(L'Ω'), UC(L'∘'),
        UC(L'⇐'), UC(L'ℕ'), UC(L'ℝ'), UC(L'Σ'), UC(L'Γ'), UC(L'ℚ'),
        UC(L'∇'), UC(L'ℤ'), UC(L'⇒'), UC(L'↦'), UC(L'×'), _______,
        _______, _______, _______, _______,
        _______, _______,
        XXXXXXX,
        XXXXXXX, XXXXXXX, _______
    ),

    [BONE_US_BASE] = LAYOUT(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,
        KC_TAB, KC_J, KC_D, KC_U, KC_A, KC_X,
        KC_BSPC, KC_C, KC_T, KC_I, KC_E, KC_O,
        KC_LALT, KC_F, KC_V, US_UDIA, US_ADIA, US_ODIA,
        KC_HOME, KC_END, KC_LEFT, KC_RGHT,
        KC_LCTL, KC_LWIN,
        LS_US_MOD3,
        KC_ENT, LS_US_LSFT, LS_US_MOD4,
        KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SCRL, KC_PAUS, LS_NUM, LS_PRGM,
        KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL,
        KC_P, KC_H, KC_L, KC_M, KC_W, US_SS,
        KC_B, KC_N, KC_R, KC_S, KC_G, KC_Q,
        KC_Y, KC_Z, KC_COMM, KC_DOT, KC_K, KC_RALT,
        KC_UP, KC_DOWN, KC_PGUP, KC_PGDN,
        KC_RWIN, KC_RCTL,
        LS_US_MOD3,
        LS_US_MOD4, LS_US_RSFT, KC_SPC
    ),

    [BONE_US_SHIFT] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______,
        XXXXXXX,
        _______, KC_CAPS, XXXXXXX,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, _______, _______, _______, _______, XXXXXXX,
        _______, _______, _______, _______, _______, _______,
        _______, _______, XXXXXXX, XXXXXXX, _______, _______,
        _______, _______, _______, _______,
        _______, _______,
        XXXXXXX,
        XXXXXXX, KC_CAPS, _______
    ),

    [BONE_US_SYMBOLS] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, KC_UNDS, KC_LBRC, KC_RBRC, KC_CIRC,
        _______, KC_BSLS, KC_SLSH, KC_LCBR, KC_RCBR, KC_ASTR,
        _______, KC_HASH, KC_DLR, KC_PIPE, KC_TILD, KC_GRV,
        _______, _______, _______, _______,
        _______, _______,
        XXXXXXX,
        _______, XXXXXXX, XXXXXXX,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        KC_EXLM, KC_LABK, KC_RABK, KC_EQL, KC_AMPR, XXXXXXX,
        KC_QUES, KC_LPRN, KC_RPRN, KC_MINS, KC_COLN, KC_AT,
        KC_PLUS, KC_PERC, KC_DQUO, KC_QUOT, KC_SCLN, _______,
        _______, _______, _______, _______,
        _______, _______,
        XXXXXXX,
        XXXXXXX, XXXXXXX, _______
    ),

    [BONE_US_NAVIGATION] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, KC_PGUP, KC_BSPC, KC_UP, KC_DEL, KC_PGDN,
        _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,
        _______, KC_ESC, KC_TAB, KC_INS, KC_ENT, KC_UNDO,
        _______, _______, _______, _______,
        _______, _______,
        XXXXXXX,
        _______, XXXXXXX, LS_US_LAYER4_MOD4,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        XXXXXXX, XXXXXXX, KC_TAB, KC_PSLS, KC_PAST, _______,
        XXXXXXX, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_PMNS,
        XXXXXXX, KC_P4, KC_P5, KC_P6, KC_COMM, KC_PDOT,
        KC_COLN, KC_P1, KC_P2, KC_P3, KC_SCLN, _______,
        _______, _______, _______, _______,
        _______, _______,
        XXXXXXX,
        LS_US_LAYER4_MOD4, XXXXXXX, KC_P0
    ),

    [QWERTY_BASE] = LAYOUT(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,
        KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,
        KC_GRV, KC_INS, KC_LEFT, KC_RGHT,
        KC_LCTL, KC_LALT,
        KC_HOME,
        KC_BSPC, KC_DEL, KC_END,
        KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SCRL, KC_PAUS, KC_NUM, LS_PRGM,
        KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
        KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
        KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_UP, KC_DOWN, KC_LBRC, KC_RBRC,
        KC_RGUI, KC_RCTL,
        KC_PGUP,
        KC_PGDN, KC_ENTER, KC_SPC
    ),

    [DVORAK_BASE] = LAYOUT(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,
        KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5,
        KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y,
        KC_CAPS, KC_A, KC_O, KC_E, KC_U, KC_I,
        KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X,
        KC_GRV, KC_INS, KC_LEFT, KC_RGHT,
        KC_LCTL, KC_LALT,
        KC_HOME,
        KC_BSPC, KC_DEL, KC_END,
        KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SCRL, KC_PAUS, KC_NUM, LS_PRGM,
        KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
        KC_F, KC_G, KC_C, KC_R, KC_L, KC_BSLS,
        KC_D, KC_H, KC_T, KC_N, KC_S, KC_SLSH,
        KC_B, KC_M, KC_W, KC_V, KC_Z, KC_RSFT,
        KC_UP, KC_DOWN, KC_LBRC, KC_RBRC,
        KC_RGUI, KC_RCTL,
        KC_PGUP,
        KC_PGDN, KC_ENTER, KC_SPC
    ),

    [NUMPAD] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_MSTP, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX,
        XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX,
        XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX
    ),

    [PROGRAM] = LAYOUT(
        XXXXXXX, DF(BONE_DE_BASE), DF(BONE_US_BASE), DF(QWERTY_BASE), DF(DVORAK_BASE), UC_MAC, UC_LINX, UC_WIN, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX,
        XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX,
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX,
        XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX
    )

#if 0
    [BONE_BASE] = LAYOUT(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,
        KC_TAB, KC_J, KC_D, KC_U, KC_A, KC_X,
        KC_BSPC, KC_C, KC_T, KC_I, KC_E, KC_O,
        KC_LALT, KC_F, KC_V, DE_UDIA, DE_ADIA, DE_ODIA,
        KC_HOME, KC_END, KC_LEFT, KC_RGHT,
        KC_LCTL, KC_LWIN,
        LS_MOD3,
        KC_ENT, LS_LSFT, LS_MOD4,
        KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SCRL, KC_PAUS, LS_NUM, LS_PRGM,
        KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL,
        KC_P, KC_H, KC_L, KC_M, KC_W, DE_SS,
        KC_B, KC_N, KC_R, KC_S, KC_G, KC_Q,
        KC_Y, KC_Z, KC_COMM, KC_DOT, KC_K, KC_RALT,
        KC_UP, KC_DOWN, KC_PGUP, KC_PGDN,
        KC_RWIN, KC_RCTL,
        LS_MOD3,
        LS_MOD4, LS_LSFT, KC_SPC
    ),

    [] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______,
        _______,
        _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______,
        _______,
        _______, _______, _______
    ),

    [] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX,
        XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX,
        XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX
    ),
#endif
};
