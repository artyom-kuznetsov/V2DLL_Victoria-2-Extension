// FUN_007489e0 @ 007489e0 body=[[007489e0, 00748b10]]


undefined4 FUN_007489e0(void)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  if (0 < *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) +
                  0x1488)) {
    piVar1 = *(int **)(*(int *)(in_EAX + 0x24) + 0x188);
    if ((piVar1 != (int *)0x0) && (cVar3 = (**(code **)(*piVar1 + 0x24))(), cVar3 != '\0')) {
      iVar4 = *(int *)(*(int *)(in_EAX + 0x24) + 0x188);
      if ((*(int *)(iVar4 + 0x4c) - *(int *)(iVar4 + 0x48) & 0xfffffffcU) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = **(int **)(iVar4 + 0x48);
      }
      uVar2 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + iVar4 * 4);
      iVar4 = FUN_00565b70();
      iVar5 = *(int *)(iVar4 + 0x2c) - *(int *)(iVar4 + 0x28) >> 2;
      local_8 = 0;
      if (0 < iVar5) {
        do {
          iVar8 = DAT_01258800;
          if ((-1 < local_8) && (local_8 < *(int *)(iVar4 + 0x2c) - *(int *)(iVar4 + 0x28) >> 2)) {
            iVar8 = *(int *)(*(int *)(iVar4 + 0x28) + local_8 * 4);
          }
          iVar7 = 0;
          iVar6 = *(int *)(iVar8 + 0x2c) - *(int *)(iVar8 + 0x28) >> 2;
          if (0 < iVar6) {
            do {
              cVar3 = FUN_00563fb0(*(undefined4 *)(*(int *)(iVar8 + 0x28) + iVar7 * 4),uVar2);
              if (cVar3 != '\0') {
                return 1;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar6);
          }
          local_8 = local_8 + 1;
        } while (local_8 < iVar5);
        return 0;
      }
    }
  }
  return 0;
}

