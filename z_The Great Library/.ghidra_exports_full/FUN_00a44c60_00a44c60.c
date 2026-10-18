// FUN_00a44c60 @ 00a44c60 body=[[00a44c60, 00a44df1]]


void FUN_00a44c60(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_f4 [224];
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  local_14 = ExceptionList;
  switch(param_2) {
  case 0x4b:
    ExceptionList = &local_14;
    FUN_009a1810();
    ExceptionList = local_14;
    return;
  default:
    ExceptionList = &local_14;
    FUN_00a20b80(param_1,param_2);
    ExceptionList = local_14;
    return;
  case 0x5c:
    iVar2 = in_ECX + 0x110;
    break;
  case 0x6d:
    iVar2 = in_ECX + 0x90;
    break;
  case 300:
    ExceptionList = &local_14;
    (**(code **)(*(int *)(in_ECX + 0x94) + 0xc))(param_1);
    if (*(int *)(param_1 + 0xc) == 0) {
      ExceptionList = local_14;
      return;
    }
    FUN_009885d0();
    iStack_c = 0;
    FUN_004015b0(auStack_f4,0x22,0);
    iStack_c._0_1_ = 1;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    puVar3 = (undefined4 *)(iVar2 + 0x14);
    uVar1 = FUN_00987d20();
    if (0xf < *(uint *)(iVar2 + 0x28)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    uVar1 = FUN_00418e30(uVar1,puVar3);
    FUN_00401280(uVar1);
    iStack_c = (uint)iStack_c._1_3_ << 8;
    FUN_00401650();
    FUN_00408ad0();
    ExceptionList = local_14;
    return;
  }
  ExceptionList = &local_14;
  iVar2 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%f",iVar2);
  if (iVar2 != 0) {
    ExceptionList = local_14;
    return;
  }
  FUN_009a1140();
  ExceptionList = local_14;
  return;
}

