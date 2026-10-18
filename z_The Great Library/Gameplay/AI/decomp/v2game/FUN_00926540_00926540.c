// FUN_00926540 @ 00926540 body=[[00926540, 00926620] [00926624, 00926644] [0092664d, 0092677a] [00926783, 0092688b]]


undefined1 * FUN_00926540(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  int local_60;
  undefined1 local_48 [4];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b8474e;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  cVar1 = FUN_00511300();
  if (cVar1 == '\0') {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("GUNBOAT_NO_LOAN",0xf);
    local_c = 0;
    FUN_009a8ee0(local_48,local_34);
    local_c._0_1_ = 1;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_c = CONCAT31(local_c._1_3_,2);
  }
  else {
    cVar1 = FUN_00511140();
    if (cVar1 != '\0') {
      iVar2 = FUN_00926900();
      if (iVar2 == 0) {
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        FUN_00409350("GUNBOAT_NONE_IN_PORT",0x14);
        local_c = 6;
        FUN_009a8ee0(local_48,local_34);
        local_c._0_1_ = 7;
        iVar2 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
        local_c = CONCAT31(local_c._1_3_,6);
        FUN_009a9740();
        if (local_20 < 0x10) {
          ExceptionList = local_14;
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iVar2 = *(int *)(DAT_012587e4 + 4);
      cVar1 = FUN_00539320();
      if (cVar1 != '\0') {
        iVar4 = *(int *)(iVar2 + *(int *)(in_ECX + 0x14) * 4);
        piVar5 = *(int **)(iVar4 + 0xe8c);
        iVar4 = *(int *)(iVar4 + 0xe90) - (int)piVar5 >> 2;
        local_60 = 0;
        if (0 < iVar4) {
          do {
            if (*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + *(int *)(*piVar5 + 0xc) * 4) + 0xbe8) +
                                 *(int *)(in_ECX + 0x14) * 4) + 0x30) != 0) {
              uVar3 = FUN_0055dd40();
              local_c = 8;
              FUN_0042c180(param_1,uVar3);
              goto LAB_00926630;
            }
            local_60 = local_60 + 1;
            piVar5 = piVar5 + 1;
          } while (local_60 < iVar4);
        }
      }
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *param_1 = 0;
      FUN_00409350(&DAT_00ded94d,0);
      ExceptionList = local_14;
      return param_1;
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("GUNBOAT_NOT_IN_DEFAULT",0x16);
    local_c = 3;
    FUN_009a8ee0(local_48,local_34);
    local_c._0_1_ = 4;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_c = CONCAT31(local_c._1_3_,5);
  }
  FUN_009adb70();
  if (local_44 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
LAB_00926630:
  if (local_20 < 0x10) {
    ExceptionList = local_14;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

