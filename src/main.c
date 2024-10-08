#include "common.h"

extern int D_80022C90;

INCLUDE_ASM("asm/main/nonmatchings/main", main);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_80010AD0);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_80010B24);

INCLUDE_ASM("asm/main/nonmatchings/main", func_80010B54);

INCLUDE_ASM("asm/main/nonmatchings/main", func_80010B88);

INCLUDE_ASM("asm/main/nonmatchings/main", func_80010C60);

INCLUDE_ASM("asm/main/nonmatchings/main", func_80010CD4);

INCLUDE_ASM("asm/main/nonmatchings/main", func_80010D0C);

INCLUDE_ASM("asm/main/nonmatchings/main", func_80010D80);

INCLUDE_ASM("asm/main/nonmatchings/main", func_80010E58);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_80010E68);

INCLUDE_ASM("asm/main/nonmatchings/main", func_80010E84);

INCLUDE_ASM("asm/main/nonmatchings/main", func_80010ECC);

INCLUDE_ASM("asm/main/nonmatchings/main", func_80010F34);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_80010F68);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_80010F9C);

INCLUDE_ASM("asm/main/nonmatchings/main", func_80011018);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_80011074);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_80011170);

INCLUDE_ASM("asm/main/nonmatchings/main", func_800111DC);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_80011260);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_8001137C);

INCLUDE_RODATA("asm/main/nonmatchings/main", D_80010000);

INCLUDE_RODATA("asm/main/nonmatchings/main", D_80010004);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_800114C4);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_80011630);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_800116BC);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_800117AC);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_800117E8);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_8001182C);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_80011884);

INCLUDE_ASM("asm/main/nonmatchings/main", func_8001190C);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_80011A4C);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_80011B24);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_80011C3C);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_80011C70);

void func_80011CFC() 
{
    
}

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_80011D04);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_80011E4C);

INCLUDE_ASM("asm/main/nonmatchings/main", func_80011ED0);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_80011F48);

INCLUDE_ASM("asm/main/nonmatchings/main", FUN_80011F78);

void func_800120B0() 
{

}

INCLUDE_ASM("asm/main/nonmatchings/main", func_800120B8);

unsigned int func_800120E4() 
{
    return func_800120B8() >> 17;
}

int func_80012104() 
{
    return D_80022C90;
}

void func_80012110(int arg0) 
{
    D_80022C90 = arg0;
}

unsigned int func_8001211C()
{
    return func_800120B8() >> 20;
}

void func_8001213C(int *dst, int *src, int size)
{
    int *end;
    int  data;
    
    if (dst == src)
    {
        return;
    }
        
    size >>= 2;

    if (dst < src)
    {
        end = src + size;

        while (src < end)
        {
            data = *src++;
            *dst++ = data;
        }
    }
    else
    {   
        end = src;

        dst += size;            
        src += size;

        while (src > end)
        {
            *(--dst) = *(--src);
        }
    }
}
