// FUN_004ee4a0 @ 004ee4a0 body=[[004ee4a0, 004ee543]]


/* WARNING: Removing unreachable block (ram,0x004ee4ed) */
/* WARNING: Removing unreachable block (ram,0x004ee4f4) */

void FUN_004ee4a0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar6 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 4;
  if (0 < iVar6) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(iVar5 + 0xc + *(int *)(param_1 + 0x10));
      if (0 < iVar2) {
        piVar1 = (int *)(*(int *)(iVar5 + 8 + *(int *)(param_1 + 0x10)) + 0x60);
        *piVar1 = *piVar1 - iVar2;
        *(undefined4 *)(iVar5 + 0xc + *(int *)(param_1 + 0x10)) = 0;
      }
      iVar5 = iVar5 + 0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  if (puVar3 != *(undefined4 **)(param_1 + 0x14)) {
    puVar4 = *(undefined4 **)(param_1 + 0x14);
    for (puVar7 = puVar3; puVar7 != puVar4; puVar7 = puVar7 + 4) {
      (**(code **)*puVar7)(0);
    }
    *(undefined4 **)(param_1 + 0x14) = puVar3;
  }
  FUN_004ed710(param_1);
  return;
}

