// FUN_00494100 @ 00494100 body=[[00494100, 004941c7] [004941cb, 004942fc]]


void FUN_00494100(void)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  short *psVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int unaff_ESI;
  uint *puVar7;
  uint local_54;
  int local_50;
  int local_4c;
  int iStack_40;
  undefined1 local_3c [8];
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b82844;
  local_14 = ExceptionList;
  local_54 = 0;
  if (DAT_0125899f == '\0') {
    piVar3 = *(int **)(*(int *)(in_ECX + 0x68) + 0x58);
    ExceptionList = &local_14;
    local_50 = in_ECX;
    iVar2 = FUN_00aae9af(0x148);
    local_c = 0;
    local_4c = iVar2;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350("MessageSettingWindow",0x14);
      local_c = CONCAT31(local_c._1_3_,1);
      local_54 = 1;
      iVar2 = FUN_006a6320(iVar2,*(undefined4 *)(in_ECX + 0x68),local_34,
                           *(undefined4 *)(in_ECX + 0x8c));
    }
    local_c = 0xffffffff;
    if ((local_54 & 1) != 0) {
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
    }
    (**(code **)(*piVar3 + 0x4c))(local_3c);
    piVar3 = (int *)(**(code **)(*piVar3 + 0x4c))(&local_50);
    iVar6 = *piVar3;
    iStack_40 = unaff_ESI + -0x96;
    puVar7 = &local_54;
    (**(code **)(**(int **)(iVar2 + 0x30) + 0x60))();
    (**(code **)(**(int **)(iVar2 + 0x30) + 0x60))(&stack0xffffffa0);
    (**(code **)(**(int **)(iVar2 + 0x30) + 0x60))(&local_54);
    psVar4 = (short *)(**(code **)(**(int **)(iVar2 + 0x30) + 0x60))(&local_54);
    sVar1 = *psVar4;
    iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x40))();
    if (*(int *)(iVar5 + 0x6b9c0) < (int)puVar7) {
      local_50 = local_50 + (*(int *)(iVar5 + 0x6b9c0) - (int)puVar7);
    }
    if (*(int *)(iVar5 + 0x6b9bc) < sVar1 + iVar6) {
      iVar6 = iVar6 + (*(int *)(iVar5 + 0x6b9bc) - (sVar1 + iVar6));
    }
    (**(code **)(**(int **)(iVar2 + 0x30) + 0x18))(CONCAT22((short)local_50,(short)iVar6));
    FUN_006480e0(iVar2);
  }
  ExceptionList = local_14;
  return;
}

