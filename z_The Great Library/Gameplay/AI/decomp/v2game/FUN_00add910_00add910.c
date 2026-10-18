// FUN_00add910 @ 00add910 body=[[00add910, 00add98c]]


byte FUN_00add910(void)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(in_ECX + 0x24);
  uVar6 = 0;
  iVar5 = 0;
  bVar2 = 0;
  if (uVar1 == 0) {
    return 0;
  }
  do {
    iVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x20) + uVar6 * 4) + 4))();
    if (iVar3 == 3) {
      if (iVar5 == 0) {
        if (uVar6 == 0xffffffff) {
          return 0;
        }
        iVar5 = *(int *)(*(int *)(in_ECX + 0x20) + uVar6 * 4);
        if (iVar5 == 0) {
          return 0;
        }
        iVar3 = *(int *)(in_ECX + 0x14);
        if (iVar3 != 0) {
          pbVar4 = (byte *)(*(int *)(iVar5 + 0x1c) + 4);
          do {
            if (bVar2 <= *pbVar4) {
              bVar2 = *pbVar4;
            }
            pbVar4 = pbVar4 + 8;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        return bVar2;
      }
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 + 1;
    if (uVar1 <= uVar6) {
      return 0;
    }
  } while( true );
}

