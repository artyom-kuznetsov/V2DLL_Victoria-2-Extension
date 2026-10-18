// FUN_0047e040 @ 0047e040 body=[[0047e040, 0047e0aa]]


undefined1 FUN_0047e040(int param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  int in_EAX;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar4 = 0;
  if (DAT_012587f4 < 1) {
    return 0;
  }
  do {
    bVar2 = *(byte *)(param_1 + 8 + iVar6);
    if (bVar2 != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0x48) + (uint)bVar2 * 8);
      uVar5 = (uint)*(byte *)(iVar6 + 8 + in_EAX);
      uVar3 = *(uint *)(*(int *)(in_EAX + 0x48) + uVar5 * 8);
      uVar5 = *(uint *)(*(int *)(in_EAX + 0x48) + 4 + uVar5 * 8);
      if (((int)uVar5 <= (int)puVar1[1]) && (((int)uVar5 < (int)puVar1[1] || (uVar3 < *puVar1)))) {
        *puVar1 = uVar3;
        puVar1[1] = uVar5;
        uVar4 = 1;
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < DAT_012587f4);
  return uVar4;
}

