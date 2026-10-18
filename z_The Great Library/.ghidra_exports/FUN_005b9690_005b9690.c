// FUN_005b9690 @ 005b9690  (requested 005B9690, first bytes: 55 8B EC 83 E4 F8 8B 11)


uint FUN_005b9690(void)

{
  int *piVar1;
  uint in_EAX;
  int *in_ECX;
  int *piVar2;
  int unaff_EDI;
  
  if (((*in_ECX == 1) && (unaff_EDI != 0)) && (in_EAX = 0, in_ECX[2] != 0)) {
    in_EAX = *(uint *)(*(int *)(DAT_0125870c + 0x2238) + in_ECX[2] * 4);
    piVar2 = *(int **)(in_EAX + 0xec);
    if (piVar2 != (int *)0x0) {
      do {
        piVar1 = (int *)*piVar2;
        piVar2 = (int *)piVar2[2];
        in_EAX = (**(code **)(*piVar1 + 0x3c))();
        if ((char)in_EAX != '\0') {
          in_EAX = *(uint *)(*(int *)(DAT_012587e4 + 4) + piVar1[0x31] * 4);
          if ((*(int *)(unaff_EDI + 0xc4) != *(int *)(in_EAX + 0x20)) &&
             (((*(int *)(*(int *)(*(int *)(in_EAX + 0xbe8) + *(int *)(unaff_EDI + 0xc4) * 4) + 0x34)
                != 0 || ((((*(char *)(unaff_EDI + 0xc0) == 'R' &&
                           (*(char *)(unaff_EDI + 0xc1) == 'E')) &&
                          (*(char *)(unaff_EDI + 0xc2) == 'B')) ||
                         (((*(char *)(in_EAX + 0x1c) == 'R' && (*(char *)(in_EAX + 0x1d) == 'E')) &&
                          (*(char *)(in_EAX + 0x1e) == 'B')))))) &&
              (((char)piVar1[0x41] == '\0' && (0 < piVar1[0x10])))))) goto LAB_005b976a;
        }
        if (piVar2 == (int *)0x0) {
          return in_EAX & 0xffffff00;
        }
      } while( true );
    }
  }
  else if (((*in_ECX == 3) && (unaff_EDI != 0)) && (in_EAX = 0, in_ECX[2] != 0)) {
    in_EAX = *(uint *)(*(int *)(DAT_012587e4 + 4) +
                      *(int *)(*(int *)(*(int *)(DAT_0125870c + 0x2238) + in_ECX[2] * 4) + 0x134) *
                      4);
    if ((*(int *)(unaff_EDI + 0xc4) != *(int *)(in_EAX + 0x20)) &&
       ((*(int *)(*(int *)(*(int *)(in_EAX + 0xbe8) + *(int *)(unaff_EDI + 0xc4) * 4) + 0x34) != 0
        || ((((*(char *)(unaff_EDI + 0xc0) == 'R' && (*(char *)(unaff_EDI + 0xc1) == 'E')) &&
             (*(char *)(unaff_EDI + 0xc2) == 'B')) ||
            (((*(char *)(in_EAX + 0x1c) == 'R' && (*(char *)(in_EAX + 0x1d) == 'E')) &&
             (*(char *)(in_EAX + 0x1e) == 'B')))))))) {
LAB_005b976a:
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

