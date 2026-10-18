// FUN_004ed5f0 @ 004ed5f0 body=[[004ed5f0, 004ed70d]]


undefined4 * FUN_004ed5f0(undefined4 *param_1)

{
  int *piVar1;
  undefined3 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined **local_20 [3];
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b46583;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[3] = 0;
  iVar3 = FUN_00aae9af(0x18);
  if (iVar3 != 0) {
    param_1[2] = iVar3;
    *(int *)iVar3 = iVar3;
    *(undefined4 *)(param_1[2] + 4) = param_1[2];
    *(undefined4 *)(param_1[2] + 8) = param_1[2];
    *(undefined1 *)(param_1[2] + 0x14) = 1;
    *(undefined1 *)(param_1[2] + 0x15) = 1;
    piVar1 = param_1 + 5;
    *piVar1 = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    local_8._1_3_ = 0;
    uVar2 = local_8._1_3_;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    if (DAT_0131bb34 == 0) {
      local_14 = (char *)FUN_00aae9af(0x188);
      local_8._0_1_ = 2;
      if (local_14 == (char *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0041a160();
      }
      local_8._0_1_ = 1;
      FUN_00423700(uVar4);
      uVar2 = local_8._1_3_;
    }
    local_8._1_3_ = uVar2;
    iVar3 = param_1[6];
    local_14 = (char *)0x0;
    uVar5 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    uVar6 = iVar3 - *piVar1 >> 2;
    if (uVar6 < uVar5) {
      FUN_0043cb20(piVar1,iVar3,&local_14);
    }
    else if (uVar5 < uVar6) {
      FUN_0054ab90(piVar1,*piVar1 + uVar5 * 4,iVar3);
    }
    ExceptionList = local_10;
    return param_1;
  }
  local_14 = (char *)0x0;
  std::exception::exception((exception *)local_20,&local_14);
  local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_20,&DAT_00e6fb20);
}

