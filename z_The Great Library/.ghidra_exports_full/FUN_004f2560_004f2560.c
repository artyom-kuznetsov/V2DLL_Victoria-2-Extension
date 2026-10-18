// FUN_004f2560 @ 004f2560 body=[[004f2560, 004f2670]]


undefined4 FUN_004f2560(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined3 uVar8;
  undefined4 uVar7;
  int iVar9;
  undefined4 *puVar10;
  int local_10;
  int local_c;
  
  iVar5 = param_1;
  puVar6 = (undefined4 *)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 4);
  param_1._3_1_ = '\x01';
  if (0 < (int)puVar6) {
    iVar9 = 0;
    puVar10 = puVar6;
    do {
      iVar1 = *(int *)(*(int *)(iVar5 + 0x10) + 8 + iVar9);
      iVar2 = *(int *)(iVar1 + 0x58);
      puVar6 = (undefined4 *)(*(int *)(iVar5 + 0x10) + iVar9);
      if (iVar2 < (int)puVar6[3]) {
        puVar6[3] = iVar2;
        *(int *)(iVar1 + 0x60) = iVar2;
        param_1._3_1_ = '\0';
      }
      iVar9 = iVar9 + 0x10;
      puVar10 = (undefined4 *)((int)puVar10 + -1);
    } while (puVar10 != (undefined4 *)0x0);
  }
  iVar9 = *(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x10) >> 4;
  bVar4 = false;
  local_c = 0;
  if (0 < iVar9) {
    local_10 = 0;
    do {
      puVar6 = (undefined4 *)(*(int *)(iVar5 + 0x10) + local_10);
      if (*(char *)(*(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 8 + local_10) + 0x68) + 0x40) == '\0'
         ) {
        puVar6[3] = 0;
        bVar4 = true;
      }
      if (puVar6[3] == 0) {
        puVar6 = (undefined4 *)(*(int *)(iVar5 + 0x10) + local_10);
        puVar3 = *(undefined4 **)(iVar5 + 0x14);
        puVar10 = puVar6 + 4;
        if (puVar10 != puVar3) {
          puVar6 = puVar6 + 2;
          do {
            puVar6[-1] = puVar6[3];
            *puVar6 = puVar6[4];
            puVar6[1] = puVar6[5];
            puVar10 = puVar10 + 4;
            puVar6 = puVar6 + 4;
          } while (puVar10 != puVar3);
        }
        puVar3 = *(undefined4 **)(iVar5 + 0x14);
        for (puVar10 = puVar3 + -4; puVar10 != puVar3; puVar10 = puVar10 + 4) {
          puVar6 = (undefined4 *)(**(code **)*puVar10)(0);
        }
        *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + -0x10;
      }
      else {
        local_c = local_c + 1;
        local_10 = local_10 + 0x10;
      }
    } while (local_c < iVar9);
  }
  uVar8 = (undefined3)((uint)puVar6 >> 8);
  if ((param_1._3_1_ == '\0') || (bVar4)) {
    uVar7 = FUN_004ed710(iVar5);
    uVar8 = (undefined3)((uint)uVar7 >> 8);
  }
  return CONCAT31(uVar8,param_1._3_1_);
}

