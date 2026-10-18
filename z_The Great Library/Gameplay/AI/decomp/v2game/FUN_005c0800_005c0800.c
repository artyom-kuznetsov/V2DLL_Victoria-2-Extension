// FUN_005c0800 @ 005c0800 body=[[005c0800, 005c0947] [005c094b, 005c0965] [005c0969, 005c0a13] [005c0a17, 005c0a31] [005c0a35, 005c0a52] [005c0a56, 005c0acc] [005c0ad0, 005c0ae2]]


undefined1 * FUN_005c0800(undefined1 *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined *puVar9;
  char local_8c [32];
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b45fd1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_18 = 1;
  if (param_2 < 2000000) {
    uVar8 = __allmul(param_2,param_2 >> 0x1f,1000000,0);
    iVar4 = __alldiv(uVar8,1000,0);
    iVar4 = iVar4 / 1000;
  }
  else {
    iVar4 = (param_2 / 1000) * 1000;
  }
  if (99999 < iVar4) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = (uint)local_50[0]._1_3_ << 8;
    FUN_00409350(&DAT_00df83c4,1);
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_8._0_1_ = 2;
    local_8._1_3_ = 0;
    pcVar5 = __itoa(iVar4 / 1000,local_8c,10);
    pcVar7 = pcVar5;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar5,(int)pcVar7 - (int)(pcVar5 + 1));
    local_8._0_1_ = 3;
    uVar6 = FUN_00988f20(local_50);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_00408ed0(uVar6,0,0xffffffff);
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    uVar2 = local_50[0];
    uVar3 = local_3c;
    goto joined_r0x005c0ac2;
  }
  if (iVar4 < 1000) {
    uVar6 = FUN_009888f0(local_6c);
    local_8 = 9;
    FUN_00408ed0(uVar6,0,0xffffffff);
    uVar2 = local_6c[0];
    uVar3 = local_58;
    goto joined_r0x005c0ac2;
  }
  local_14 = iVar4 % 1000;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (uint)local_50[0]._1_3_ << 8;
  FUN_00409350(&DAT_00defdf8,1);
  local_8 = 5;
  FUN_009888f0(local_34);
  local_8._0_1_ = 6;
  uVar6 = FUN_00988f20(local_50);
  local_8._0_1_ = 7;
  FUN_00408ed0(uVar6,0,0xffffffff);
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  if (local_14 < 10) {
    uVar6 = 2;
    puVar9 = &DAT_00e02994;
LAB_005c0a73:
    FUN_00448740(puVar9,uVar6);
  }
  else if (local_14 < 100) {
    uVar6 = 1;
    puVar9 = &DAT_00df8144;
    goto LAB_005c0a73;
  }
  uVar6 = FUN_009888f0(local_6c);
  local_8 = 8;
  FUN_00448aa0(uVar6,0,0xffffffff);
  uVar2 = local_6c[0];
  uVar3 = local_58;
joined_r0x005c0ac2:
  if (0xf < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar2);
  }
  ExceptionList = local_10;
  return param_1;
}

