// FUN_0067c090 @ 0067c090 body=[[0067c090, 0067c194] [0067c198, 0067c1b9] [0067c1bd, 0067c1ca]]


void FUN_0067c090(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint in_stack_00000020;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4c550;
  local_10 = ExceptionList;
  local_8._1_3_ = 0;
  ExceptionList = &local_10;
  if ((param_1 != param_2) && (iVar3 = param_1 + 0x1c, ExceptionList = &local_10, iVar3 != param_2))
  {
    local_14 = param_1;
    ExceptionList = &local_10;
    do {
      local_8._0_1_ = 0;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00408ed0(iVar3,0,0xffffffff);
      local_8 = CONCAT31(local_8._1_3_,1);
      cVar2 = FUN_006477c0(&param_3,local_30,param_1);
      iVar4 = local_14;
      iVar1 = iVar3;
      if (cVar2 == '\0') {
        cVar2 = FUN_006477c0(&param_3,local_30,local_14);
        while (cVar2 != '\0') {
          FUN_00408ed0(iVar4,0,0xffffffff);
          iVar4 = iVar4 + -0x1c;
          cVar2 = FUN_006477c0(&param_3,local_30,iVar4);
        }
      }
      else {
        while (param_1 != iVar1) {
          FUN_00408ed0(iVar1 + -0x1c,0,0xffffffff);
          iVar1 = iVar1 + -0x1c;
        }
      }
      FUN_00408ed0(local_30,0,0xffffffff);
      local_8._0_1_ = 0;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_14 = local_14 + 0x1c;
      iVar3 = iVar3 + 0x1c;
    } while (iVar3 != param_2);
  }
  local_8._0_1_ = 0;
  if (in_stack_00000020 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_3);
}

