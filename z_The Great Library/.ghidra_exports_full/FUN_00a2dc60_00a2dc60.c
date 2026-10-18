// FUN_00a2dc60 @ 00a2dc60 body=[[00a2dc60, 00a2dce0] [00a2dce4, 00a2ddf0] [00a2ddf4, 00a2de19] [00a2de1d, 00a2de6e] [00a2de72, 00a2df16] [00a2df1a, 00a2df36] [00a2df51, 00a2df98]]


void FUN_00a2dc60(int param_1)

{
  char cVar1;
  undefined4 ***pppuVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 **local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b63490;
  local_14 = ExceptionList;
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = (undefined4 **)((uint)local_88[0] & 0xffffff00);
  ExceptionList = &local_14;
  FUN_00409350(&DAT_00ded94d,0);
  local_c = 0;
  cVar1 = FUN_00416db0();
  local_c = 0xffffffff;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88[0]);
  }
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x1bc) == '\0') {
      uVar5 = FUN_009bcbf0(param_1 + 0x170,1);
      if ((uVar5 == 0xffffffff) || (9999 < uVar5)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(uVar5 * 0x2c + 4 + *(int *)(param_1 + 0x160));
      }
      *(undefined4 *)(param_1 + 0x16c) = uVar4;
    }
    else {
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00408ed0(param_1 + 0x170,0,0xffffffff);
      local_c = 1;
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      FUN_00408ed0(local_50,0,0xffffffff);
      local_c._0_1_ = 2;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350(&DAT_00e3fbdc,4);
      local_c._0_1_ = 3;
      local_74 = 0xf;
      local_78 = 0;
      local_88[0] = (undefined4 **)((uint)local_88[0] & 0xffffff00);
      FUN_00409350(&DAT_00e17f6c,4);
      local_c = CONCAT31(local_c._1_3_,4);
      pppuVar2 = (undefined4 ***)local_88[0];
      if (local_74 < 0x10) {
        pppuVar2 = local_88;
      }
      iVar3 = FUN_005484e0(local_6c,pppuVar2,local_78);
      if (iVar3 != -1) {
        FUN_00989c00(local_78,local_34,0,0xffffffff);
      }
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_88[0]);
      }
      local_c._0_1_ = 2;
      local_74 = 0xf;
      local_78 = 0;
      local_88[0] = (undefined4 **)((uint)local_88[0] & 0xffffff00);
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350("or.tga",6);
      local_c._0_1_ = 5;
      FUN_00448aa0(local_34,0,0xffffffff);
      local_c = CONCAT31(local_c._1_3_,2);
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      uVar4 = FUN_009bcbf0(local_50,1);
      *(undefined4 *)(param_1 + 0x1c0) = uVar4;
      iVar3 = FUN_009bcbf0(local_6c,0);
      uVar5 = *(uint *)(param_1 + 0x1c0);
      *(int *)(param_1 + 0x1c8) = iVar3;
      if ((uVar5 == 0xffffffff) || (9999 < uVar5)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(uVar5 * 0x2c + 0x15c + *(int *)(param_1 + 0x150));
      }
      *(undefined4 *)(param_1 + 0x1c4) = uVar4;
      if (-1 < iVar3) {
        if ((iVar3 == -1) || (9999 < iVar3)) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(iVar3 * 0x2c + 0x15c + *(int *)(param_1 + 0x150));
        }
        *(undefined4 *)(param_1 + 0x1cc) = uVar4;
      }
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c[0]);
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
    }
  }
  ExceptionList = local_14;
  return;
}

