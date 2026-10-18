// FUN_00a32c20 @ 00a32c20 body=[[00a32c20, 00a32cae] [00a32cb2, 00a32cf6] [00a32cfa, 00a32d0d] [00a32d25, 00a32d8e] [00a32d92, 00a32da5] [00a32dbd, 00a32e1f] [00a32e23, 00a32e36] [00a32e4e, 00a32efd]]


void FUN_00a32c20(char *param_1)

{
  undefined1 uVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  undefined4 uVar8;
  uint local_50 [4];
  int local_40;
  uint local_3c;
  undefined4 local_34 [5];
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b77d7b;
  local_14 = ExceptionList;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  pcVar3 = param_1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  ExceptionList = &local_14;
  FUN_00409350(param_1,(int)pcVar3 - (int)(param_1 + 1));
  local_c = 0;
  uVar4 = FUN_00989330(local_34);
  local_c._0_1_ = 1;
  FUN_00408ed0(uVar4,0,0xffffffff);
  local_c._0_1_ = 0;
  uVar1 = (undefined1)local_c;
  local_c._0_1_ = 0;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  if (local_40 == 0) {
    uVar4 = FUN_00475d50(local_34);
    uVar8 = 1;
    local_c = CONCAT31(local_c._1_3_,2);
    uVar5 = FUN_00a31760(uVar4,1);
    FUN_00a32f00(uVar5,uVar4,uVar8);
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
  }
  else {
    local_c._0_1_ = uVar1;
    iVar6 = FUN_00a31760();
    if (((*(char *)(iVar6 + 0x30) == '\0') &&
        ((*(int *)(iVar6 + 0x24) - (int)*(int **)(iVar6 + 0x20) & 0xfffffffcU) != 0)) &&
       (**(int **)(iVar6 + 0x20) == *(int *)(in_ECX + 0xa4))) {
      iVar6 = FUN_00a32930(in_ECX,local_50,1);
      if (iVar6 == -1) {
        uVar4 = FUN_0042c180(local_34,local_50);
        uVar8 = 1;
        local_c = CONCAT31(local_c._1_3_,4);
        uVar5 = FUN_00a31760(uVar4,1);
        FUN_00a32f00(uVar5,uVar4,uVar8);
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50[0]);
        }
      }
      else {
        FUN_00a31760();
        cVar2 = FUN_00457110();
        if (cVar2 == '\0') {
          uVar4 = FUN_00475d50(local_34);
          uVar8 = 1;
          local_c = CONCAT31(local_c._1_3_,5);
          uVar5 = FUN_00a31760(uVar4,1);
          FUN_00a32f00(uVar5,uVar4,uVar8);
          FUN_00408ad0();
        }
        else {
          iVar7 = FUN_00aae9af(0x48);
          local_c._0_1_ = 6;
          if (iVar7 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_00a34f00(iVar7,iVar6,*(undefined4 *)(in_ECX + 0xd8),
                                 *(undefined4 *)(in_ECX + 0xa4));
          }
          local_c = (uint)local_c._1_3_ << 8;
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x20) + 0x38) + 0x18))(uVar4);
        }
        FUN_00408ad0();
      }
    }
    else {
      uVar4 = FUN_00475d50(local_34);
      uVar8 = 1;
      local_c = CONCAT31(local_c._1_3_,3);
      uVar5 = FUN_00a31760(uVar4,1);
      FUN_00a32f00(uVar5,uVar4,uVar8);
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
    }
  }
  ExceptionList = local_14;
  return;
}

