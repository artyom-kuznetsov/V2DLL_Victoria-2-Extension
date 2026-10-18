// FUN_00a6ab10 @ 00a6ab10 body=[[00a6ab10, 00a6ab8f]]


undefined4 FUN_00a6ab10(int param_1,undefined4 param_2)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  puVar1 = *(uint **)(param_1 + 4);
  do {
    uVar3 = *puVar1;
    do {
      if (puVar1[0x20] <= uVar3) {
        return 0;
      }
      LOCK();
      uVar4 = *puVar1;
      if (uVar3 == uVar4) {
        *puVar1 = uVar3 + 1;
        uVar4 = uVar3;
      }
      UNLOCK();
      bVar5 = uVar4 != uVar3;
      uVar3 = uVar4;
    } while (bVar5);
    cVar2 = FUN_00a6b2a0(puVar1 + (uVar4 * 3 & 7) * 5 + 0x60,param_2,param_1);
  } while (cVar2 == '\0');
  return 1;
}

