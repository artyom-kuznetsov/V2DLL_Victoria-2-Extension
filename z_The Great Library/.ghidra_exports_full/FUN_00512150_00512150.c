// FUN_00512150 @ 00512150 body=[[00512150, 00512226]]


uint FUN_00512150(uint param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = param_2;
  iVar1 = *(int *)(param_1 + 0x188);
  if (iVar1 == 0) {
    return param_1 & 0xffffff00;
  }
  iVar5 = *(int *)(iVar1 + 0x48);
  param_2 = 0;
  if (0 < (int)(*(int *)(iVar1 + 0x4c) - iVar5 & 0xfffffffcU)) {
    do {
      iVar5 = *(int *)(iVar5 + param_2 * 4);
      if (iVar5 != *(int *)(param_1 + 0x58)) {
        uVar6 = *(uint *)(*(int *)(DAT_012588e8 + 0xacc) + iVar5 * 4);
        if ((*(char *)(iVar4 + 0x131) != '\0') &&
           (DAT_0125ceac <
            *(int *)(*(int *)(*(int *)(uVar6 + 0x118) + *(int *)(iVar4 + 0x134) * 4) + 0x20))) {
LAB_00512212:
          return uVar6 & 0xffffff00;
        }
        piVar2 = *(int **)(uVar6 + 0xd8);
        while (piVar2 != (int *)0x0) {
          piVar3 = (int *)*piVar2;
          piVar2 = (int *)piVar2[2];
          uVar6 = (**(code **)(*piVar3 + 0x30))();
          if (((char)uVar6 != '\0') && (piVar3[0x16] == iVar4)) goto LAB_00512212;
        }
      }
      iVar5 = *(int *)(iVar1 + 0x48);
      param_2 = param_2 + 1;
    } while (param_2 < *(int *)(iVar1 + 0x4c) - iVar5 >> 2);
  }
  return CONCAT31((int3)((uint)iVar5 >> 8),1);
}

