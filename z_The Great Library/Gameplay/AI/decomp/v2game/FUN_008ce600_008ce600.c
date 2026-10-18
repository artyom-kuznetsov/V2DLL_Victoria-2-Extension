// FUN_008ce600 @ 008ce600 body=[[008ce600, 008ce73d]]


uint FUN_008ce600(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int in_ECX;
  int local_8;
  
  local_8 = in_ECX;
  piVar2 = (int *)FUN_008ce560(in_ECX,&local_8);
  if (*(int *)(param_1 + 0x18) == 0) {
    piVar4 = piVar2;
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
      piVar4 = (int *)(**(code **)(*piVar2 + 0x24))();
      if ((char)piVar4 == '\0') {
        uVar5 = FUN_004b60c0(local_8);
        return uVar5;
      }
      if (*(char *)((int)piVar2 + 0x131) != '\0') {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x118) + piVar2[0x4d] * 4);
        return CONCAT31((int3)((uint)iVar3 >> 8),DAT_0125ceac < *(int *)(iVar3 + 0x20));
      }
    }
    return (uint)piVar4 & 0xffffff00;
  }
  cVar1 = (**(code **)(*piVar2 + 0x24))();
  if (cVar1 == '\0') {
    iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4
                                      ) + 0x188) + 0x60);
    if (iVar3 != 0) {
      while (*(int *)(*(int *)(iVar3 + 0x18) + 0x10) != local_8) {
        iVar3 = *(int *)(iVar3 + 0x224);
        if (iVar3 == 0) {
          return 0;
        }
      }
LAB_008ce6aa:
      if ((((iVar3 != 0) && (0 < *(int *)(iVar3 + 0x20))) && (*(int *)(iVar3 + 0x184) < 0xb)) &&
         (*(char *)(iVar3 + 0x188) == '\0')) {
        return 1;
      }
    }
  }
  else if (*(char *)((int)piVar2 + 0x131) == '\0') {
    for (iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                           *(int *)(param_1 + 0x18) * 4) + 0x188) + 0x60);
        iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x224)) {
      if (*(int **)(iVar3 + 0x18) == piVar2) goto LAB_008ce6aa;
    }
  }
  return 0;
}

