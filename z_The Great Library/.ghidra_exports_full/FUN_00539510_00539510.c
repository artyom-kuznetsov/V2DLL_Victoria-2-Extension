// FUN_00539510 @ 00539510 body=[[00539510, 0053952c] [00539530, 00539599]]


uint FUN_00539510(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = *(int **)(DAT_012588e8 + 0xb3c);
  uVar4 = DAT_012588e8;
  do {
    do {
      do {
        if (piVar1 == (int *)0x0) {
          return uVar4 & 0xffffff00;
        }
        iVar2 = *piVar1;
        piVar1 = (int *)piVar1[2];
        uVar4 = FUN_0093bd30();
      } while ((char)uVar4 == '\0');
      uVar4 = *(uint *)(iVar2 + 0x2c);
      uVar3 = *(uint *)(iVar2 + 0x30);
      if (uVar4 != uVar3) {
        do {
          if (*(int *)(uVar4 + 4) == *(int *)(param_1 + 0x20)) break;
          uVar4 = uVar4 + 8;
        } while (uVar4 != uVar3);
        if (uVar4 != uVar3) goto LAB_0053958f;
      }
      uVar3 = *(uint *)(iVar2 + 0x40);
      uVar4 = *(uint *)(iVar2 + 0x3c);
    } while (uVar4 == uVar3);
    do {
      if (*(int *)(uVar4 + 4) == *(int *)(param_1 + 0x20)) break;
      uVar4 = uVar4 + 8;
    } while (uVar4 != uVar3);
  } while (uVar4 == uVar3);
LAB_0053958f:
  return CONCAT31((int3)(uVar4 >> 8),1);
}

