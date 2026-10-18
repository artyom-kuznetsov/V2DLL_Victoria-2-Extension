// FUN_004cb210 @ 004cb210 body=[[004cb210, 004cb2c4]]


void FUN_004cb210(void)

{
  int in_EAX;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_EDX;
  int iVar4;
  
  iVar3 = 0;
  piVar1 = (int *)(in_EDX + 0x98);
  do {
    if (*piVar1 == *(int *)(in_EAX + 4)) {
      if (iVar3 < 3) {
        puVar2 = (undefined4 *)(in_EDX + 0x90 + iVar3 * 0x1c);
        iVar4 = 3 - iVar3;
        do {
          *puVar2 = puVar2[7];
          puVar2[1] = puVar2[8];
          puVar2[2] = puVar2[9];
          puVar2[3] = puVar2[10];
          puVar2[4] = puVar2[0xb];
          puVar2[5] = puVar2[0xc];
          puVar2 = puVar2 + 7;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      *(undefined4 *)(in_EDX + 0xec) = 0;
      *(undefined4 *)(in_EDX + 0xe8) = 0x2d2d2d;
      *(undefined4 *)(in_EDX + 0xf0) = 0xffffffff;
      iVar3 = in_EDX + iVar3 * 0x1c;
      *(undefined4 *)(iVar3 + 0xa4) = DAT_01259abc;
      *(undefined4 *)(iVar3 + 0xa0) = 0;
      return;
    }
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 7;
  } while (iVar3 < 4);
  return;
}

