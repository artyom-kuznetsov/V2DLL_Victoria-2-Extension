// FUN_00493c70 @ 00493c70 body=[[00493c70, 00493e70]]


undefined4 FUN_00493c70(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_EDI;
  int in_stack_00000024;
  undefined4 in_stack_00000084;
  undefined4 in_stack_00000088;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b9636f;
  local_10 = ExceptionList;
  uVar2 = 0;
  local_8 = 0;
  iVar1 = *(int *)(in_stack_00000024 + 0x30);
  if (iVar1 == 4) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af();
    local_8 = CONCAT31(local_8._1_3_,1);
    if (iVar1 == 0) goto LAB_00493cfe;
    FUN_00409350("CombatStartPopup",0x10);
  }
  else if (iVar1 == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af();
    local_8 = CONCAT31(local_8._1_3_,2);
    if (iVar1 == 0) goto LAB_00493cfe;
    FUN_00409350("DefaultPopup",0xc);
  }
  else if (iVar1 == 1) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af();
    local_8 = CONCAT31(local_8._1_3_,3);
    if (iVar1 == 0) goto LAB_00493cfe;
    FUN_009885d0();
  }
  else if (iVar1 == 2) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af();
    local_8 = CONCAT31(local_8._1_3_,4);
    if (iVar1 == 0) goto LAB_00493cfe;
    FUN_009885d0();
  }
  else {
    if (iVar1 != 3) {
      ExceptionList = &local_10;
      FUN_006a81a0();
      ExceptionList = local_10;
      return 0;
    }
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af();
    local_8 = CONCAT31(local_8._1_3_,5);
    if (iVar1 == 0) goto LAB_00493cfe;
    FUN_009885d0();
  }
  uVar2 = FUN_00493ed0(iVar1,&stack0x00000004,unaff_EDI);
LAB_00493cfe:
  FUN_006a81a0();
  ExceptionList = local_10;
  return uVar2;
}

