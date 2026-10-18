// FUN_009c1750 @ 009c1750 body=[[009c1750, 009c1768] [009c1770, 009c17eb]]


void FUN_009c1750(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  
  uVar4 = 0;
  DAT_00f20c34 = 0x1267;
  iVar3 = 0;
  DAT_00f20c30 = in_ECX;
  do {
    *(int *)(in_ECX + iVar3 * 8) = iVar3 + 0x1268;
    *(undefined4 *)(in_ECX + 4 + iVar3 * 8) = 0;
    iVar2 = DAT_01258a94;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1267);
  if (*(int *)(DAT_01258a94 + 4) != 0) {
    do {
      for (puVar1 = *(undefined4 **)(*(int *)(iVar2 + 8) + uVar4 * 4); puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)puVar1[1]) {
        FUN_009c1710(*puVar1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(iVar2 + 4));
  }
  iVar3 = DAT_01258a98;
  uVar4 = 0;
  if (*(int *)(DAT_01258a98 + 4) != 0) {
    do {
      for (puVar1 = *(undefined4 **)(*(int *)(iVar3 + 8) + uVar4 * 4); puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)puVar1[1]) {
        FUN_009c1710(*puVar1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(iVar3 + 4));
  }
  return;
}

