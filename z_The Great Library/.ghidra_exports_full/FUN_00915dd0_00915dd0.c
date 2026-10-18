// FUN_00915dd0 @ 00915dd0 body=[[00915dd0, 00915e3c] [00915e40, 00915e65]]


undefined4 FUN_00915dd0(char param_1)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  
  cVar2 = FUN_0093aa90(in_ECX + 8,in_ECX + 0x10,1);
  if ((cVar2 != '\0') &&
     ((param_1 != '\0' ||
      (cVar2 = FUN_00952850(*(undefined4 *)
                             (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                        *(int *)(in_ECX + 0xc) * 4) + 0xbe8) +
                                      *(int *)(in_ECX + 0x14) * 4) + 0x34),0,0), cVar2 != '\0')))) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x34) + 0x120);
    while( true ) {
      if (piVar1 == (int *)0x0) {
        return 1;
      }
      if (*piVar1 == 0x8da) break;
      piVar1 = (int *)piVar1[2];
    }
  }
  return 0;
}

