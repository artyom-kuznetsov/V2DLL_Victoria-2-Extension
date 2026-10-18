// FUN_00531cb0 @ 00531cb0 body=[[00531cb0, 00531d42]]


uint FUN_00531cb0(void)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  int in_EDX;
  int unaff_ESI;
  
  if ((DAT_01258a08 != 0) ||
     (iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x404),
     bVar2 = iVar1 <= *(int *)(*(int *)(*(int *)(in_EDX + 0xbe8) + *(int *)(unaff_ESI + 4) * 4) +
                              0x48), uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),bVar2), bVar2)) {
    uVar3 = DAT_012588e8;
    puVar4 = *(uint **)(DAT_012588e8 + 0xbe0);
    do {
      do {
        if ((puVar4 < *(uint **)(DAT_012588e8 + 0xbe0)) ||
           (uVar3 = DAT_012588e8, *(uint **)(DAT_012588e8 + 0xbe4) <= puVar4)) {
          return uVar3 & 0xffffff00;
        }
        uVar3 = *puVar4;
        puVar4 = puVar4 + 1;
      } while (*(int *)(uVar3 + 0x20) == *(int *)(in_EDX + 0x20));
      if (DAT_01258a08 == 0) {
        uVar3 = *(uint *)(*(int *)(*(int *)(uVar3 + 0xbe8) + *(int *)(unaff_ESI + 4) * 4) + 0x48);
      }
      else {
        uVar3 = 100000;
      }
    } while ((int)uVar3 < 1);
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}

