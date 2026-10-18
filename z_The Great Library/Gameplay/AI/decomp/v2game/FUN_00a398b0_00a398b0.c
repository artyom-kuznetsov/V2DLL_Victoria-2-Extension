// FUN_00a398b0 @ 00a398b0 body=[[00a398b0, 00a399b5] [00a399b9, 00a399d4] [00a399d8, 00a399f3] [00a399f7, 00a39a30]]


/* WARNING: Removing unreachable block (ram,0x00a398fd) */
/* WARNING: Removing unreachable block (ram,0x00a399cc) */
/* WARNING: Removing unreachable block (ram,0x00a399ad) */

int FUN_00a398b0(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3dad8;
  local_10 = ExceptionList;
  uVar5 = *param_1;
  ExceptionList = &local_10;
  local_14 = uVar5;
  while( true ) {
    if ((uVar5 < local_14) || (param_1[1] <= uVar5)) {
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      local_8 = 0;
      FUN_00408ed0(param_2,0,0xffffffff);
      local_8._0_1_ = 1;
      FUN_00408ed0(local_30,0,0xffffffff);
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_00a3a610();
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      ExceptionList = local_10;
      return (*param_1 - 0x1c) + ((int)(param_1[1] - *param_1) / 0x38) * 0x38;
    }
    uVar1 = *(uint *)(param_2 + 0x10);
    uVar2 = *(uint *)(uVar5 + 0x10);
    uVar3 = uVar2;
    if (uVar1 <= uVar2) {
      uVar3 = uVar1;
    }
    iVar4 = FUN_00414bd0(uVar3);
    if (((iVar4 == 0) && (uVar1 <= uVar2)) && (uVar2 == uVar1)) break;
    uVar5 = uVar5 + 0x38;
  }
  ExceptionList = local_10;
  return uVar5 + 0x1c;
}

