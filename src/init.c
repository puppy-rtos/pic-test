/*
 * Copyright (c) 2022, The Puppy RTOS Authors
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdint.h>

uint32_t g_a, g_b, g_c;
uint32_t *g_a_p, *g_b_p, *g_c_p;

uint32_t add(uint32_t a, uint32_t b)
{
    return a + b;
}
typedef uint32_t (*fun_ptr)(uint32_t a, uint32_t b);

fun_ptr add_func_p;

int main(void)
{
    uint32_t l_a, l_b, l_c;
    uint32_t *l_a_p, *l_b_p, *l_c_p;
    g_a = 10;
    g_b = 20;
    g_a_p = &g_a;
    g_b_p = &g_b;

    add_func_p = add;
    g_c = add_func_p(*g_a_p, *g_b_p);

    l_c = add(*g_a_p, *g_b_p);

    while(1)
    {

    }
    return 0;
}
