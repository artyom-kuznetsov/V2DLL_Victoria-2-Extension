// FUN_004e9e30 @ 004e9e30 body=[[004e9e30, 004ea0a7]]


undefined4 FUN_004e9e30(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_EDI;
  int in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b96d6f;
  local_10 = ExceptionList;
  uVar2 = 0;
  local_8 = 0;
  iVar1 = *(int *)(in_stack_00000028 + 0x30);
  if (iVar1 == 4) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af();
    local_8 = CONCAT31(local_8._1_3_,1);
    if (iVar1 != 0) {
      FUN_00409350("CombatStartPopup",0x10);
      uVar2 = FUN_004ea100(iVar1,&stack0x00000008,param_1,unaff_EDI);
      FUN_006a81a0();
      ExceptionList = local_10;
      return uVar2;
    }
  }
  else {
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        ExceptionList = &local_10;
        iVar1 = FUN_00aae9af();
        local_8 = CONCAT31(local_8._1_3_,3);
        if (iVar1 != 0) {
          FUN_009885d0();
          uVar2 = FUN_004ea100(iVar1,&stack0x00000008,param_1,unaff_EDI);
        }
        FUN_006a81a0();
        ExceptionList = local_10;
        return uVar2;
      }
      if (iVar1 == 2) {
        ExceptionList = &local_10;
        iVar1 = FUN_00aae9af();
        local_8 = CONCAT31(local_8._1_3_,4);
        if (iVar1 != 0) {
          FUN_009885d0();
          uVar2 = FUN_004ea100(iVar1,&stack0x00000008,param_1,unaff_EDI);
        }
        FUN_006a81a0();
        ExceptionList = local_10;
        return uVar2;
      }
      if (iVar1 == 3) {
        ExceptionList = &local_10;
        iVar1 = FUN_00aae9af();
        local_8 = CONCAT31(local_8._1_3_,5);
        if (iVar1 != 0) {
          FUN_009885d0();
          uVar2 = FUN_004ea100(iVar1,&stack0x00000008,param_1,unaff_EDI);
        }
        FUN_006a81a0();
        ExceptionList = local_10;
        return uVar2;
      }
      ExceptionList = &local_10;
      FUN_006a81a0();
      ExceptionList = local_10;
      return 0;
    }
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af();
    local_8 = CONCAT31(local_8._1_3_,2);
    if (iVar1 != 0) {
      FUN_00409350("DefaultPopup",0xc);
      uVar2 = FUN_004ea100(iVar1,&stack0x00000008,param_1,unaff_EDI);
      goto LAB_004e9edb;
    }
  }
  uVar2 = 0;
LAB_004e9edb:
  FUN_006a81a0();
  ExceptionList = local_10;
  return uVar2;
}

