// FUN_0045bb20 @ 0045bb20 body=[[0045bb20, 0045bba8] [0045bbac, 0045bc3d] [0045bc41, 0045bce9]]


undefined1 * FUN_0045bb20(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 local_9c [8];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_74;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar8 = DAT_012586f4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b93920;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = FUN_0045e4e0(param_1);
  local_8 = 0;
  puVar1 = *(uint **)(iVar8 + 8);
  uVar4 = FUN_0045c080(puVar1[1],uVar3);
  if ((uVar4 < *puVar1) || (puVar1[1] <= uVar4)) {
    iVar7 = 0x15;
  }
  else {
    iVar7 = (int)(uVar4 - *puVar1) / 0x1c;
  }
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  if (iVar7 == 0x15) {
    ExceptionList = local_10;
    return (undefined1 *)0x0;
  }
  iVar8 = iVar8 + 0xc + iVar7 * 0x10;
  uVar3 = FUN_00465180(param_1);
  local_8 = 1;
  local_14 = FUN_00462500(uVar3);
  if ((local_14 == *(int *)(iVar8 + 4)) || (cVar2 = FUN_0098ab20(), cVar2 != '\0')) {
    local_18 = *(int *)(iVar8 + 4);
    piVar5 = &local_18;
  }
  else {
    piVar5 = &local_14;
  }
  if (*piVar5 == *(int *)(iVar8 + 4)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(*piVar5 + 0x28);
  }
  local_8 = 0xffffffff;
  if (local_3c < 0x10) {
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    if (iVar8 == 0) {
      ExceptionList = local_10;
      return (undefined1 *)0x0;
    }
    puVar6 = (undefined1 *)FUN_00aae9af(0x54);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(puVar6 + 0x14) = 0xf;
      *(undefined4 *)(puVar6 + 0x10) = 0;
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 0x30) = 0xf;
      *(undefined4 *)(puVar6 + 0x2c) = 0;
      puVar6[0x1c] = 0;
      *(undefined4 *)(puVar6 + 0x4c) = 0xf;
      *(undefined4 *)(puVar6 + 0x48) = 0;
      puVar6[0x38] = 0;
    }
    FUN_008a8650(0);
    local_94 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    local_90 = *(undefined4 *)(DAT_012588e8 + 0xb60);
    local_74 = param_1;
    iVar8 = *(int *)(iVar8 + 8 + param_3 * 4);
    if (iVar8 != 0) {
      FUN_0045eae0(iVar8,local_9c,puVar6,param_2,param_4);
    }
    ExceptionList = local_10;
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_50);
}

