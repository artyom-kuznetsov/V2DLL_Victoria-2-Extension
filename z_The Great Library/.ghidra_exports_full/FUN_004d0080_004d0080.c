// FUN_004d0080 @ 004d0080 body=[[004d0080, 004d014b]]


int FUN_004d0080(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_234 [548];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b516f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f30d0(local_234,param_2,param_1,0);
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 100);
  iVar3 = FUN_00aae9af(0x230);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_004f2e50(iVar3);
    *(int *)(iVar3 + 0x220) = iVar1;
    *(undefined4 *)(iVar3 + 0x224) = 0;
    *(undefined1 *)(iVar3 + 0x228) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 100) = iVar3;
  *(int *)(param_1 + 0x68) = iVar2 + 1;
  if (iVar2 == 0) {
    *(int *)(param_1 + 0x60) = iVar3;
  }
  else {
    *(int *)(iVar1 + 0x224) = iVar3;
  }
  local_8 = 0xffffffff;
  FUN_004f33c0(local_234);
  ExceptionList = local_10;
  return *(int *)(param_1 + 0x68) + -1;
}

