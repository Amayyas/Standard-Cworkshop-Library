/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_localconv
*/

#include "../include/my.h"

static void init_numeric(struct lconv *lc)
{
    lc->decimal_point = ".";
    lc->thousands_sep = "";
    lc->grouping = "";
}

static void init_currency(struct lconv *lc)
{
    lc->int_curr_symbol = "";
    lc->currency_symbol = "";
    lc->mon_decimal_point = "";
    lc->mon_thousands_sep = "";
    lc->mon_grouping = "";
    lc->positive_sign = "";
    lc->negative_sign = "";
}

static void init_signs(struct lconv *lc)
{
    lc->int_frac_digits = CHAR_MAX;
    lc->frac_digits = CHAR_MAX;
    lc->p_cs_precedes = CHAR_MAX;
    lc->p_sep_by_space = CHAR_MAX;
    lc->n_cs_precedes = CHAR_MAX;
    lc->n_sep_by_space = CHAR_MAX;
    lc->p_sign_posn = CHAR_MAX;
    lc->n_sign_posn = CHAR_MAX;
    lc->int_p_cs_precedes = CHAR_MAX;
    lc->int_p_sep_by_space = CHAR_MAX;
    lc->int_n_cs_precedes = CHAR_MAX;
    lc->int_n_sep_by_space = CHAR_MAX;
    lc->int_p_sign_posn = CHAR_MAX;
    lc->int_n_sign_posn = CHAR_MAX;
}

struct lconv *my_localeconv(void)
{
    static struct lconv lc;

    init_numeric(&lc);
    init_currency(&lc);
    init_signs(&lc);
    return &lc;
}
