// FUN_0059be60 @ 0059be60  (requested 0059BE60, first bytes: 55 8B EC 83 E4 F8 83 EC)


void FUN_0059be60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 8);
  iVar2 = *(int *)(DAT_012588e8 + 0xb60);
  iVar5 = *(int *)(iVar1 + 0x34);
  iVar6 = *(int *)(iVar1 + 0x38);
  if (iVar5 != iVar6) {
    do {
      if (*(int *)(iVar5 + 4) == iVar2) break;
      iVar5 = iVar5 + 8;
    } while (iVar5 != iVar6);
    if (iVar5 != iVar6) goto LAB_0059bec5;
  }
  iVar1 = *(int *)(in_ECX + 0xc);
  iVar5 = *(int *)(iVar1 + 0x38);
  iVar6 = *(int *)(iVar1 + 0x34);
  if (iVar6 == iVar5) {
    return;
  }
  do {
    if (*(int *)(iVar6 + 4) == iVar2) break;
    iVar6 = iVar6 + 8;
  } while (iVar6 != iVar5);
  if (iVar6 == iVar5) {
    return;
  }
LAB_0059bec5:
  if ((undefined4 *)(iVar1 + 0x20) != (undefined4 *)0x0) {
    piVar3 = *(int **)(iVar1 + 0x20);
    while (piVar3 != (int *)0x0) {
      piVar4 = (int *)*piVar3;
      piVar3 = (int *)piVar3[2];
      if (piVar4[0x31] == iVar2) {
        (**(code **)(*piVar4 + 0x18))(param_1,param_2);
      }
    }
  }
  return;
}

