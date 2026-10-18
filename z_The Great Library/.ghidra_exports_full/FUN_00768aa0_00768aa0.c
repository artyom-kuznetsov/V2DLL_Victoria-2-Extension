// FUN_00768aa0 @ 00768aa0 body=[[00768aa0, 00768b49]]


void FUN_00768aa0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5856b;
  local_10 = ExceptionList;
  iVar1 = in_ECX[1];
  ExceptionList = &local_10;
  iVar3 = FUN_00aae9af(0xb0);
  local_8 = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_00648af0(iVar3);
    *(int *)(iVar3 + 0xa4) = iVar1;
    *(undefined4 *)(iVar3 + 0xa8) = 0;
    *(undefined1 *)(iVar3 + 0xac) = 0;
  }
  iVar2 = in_ECX[2];
  in_ECX[1] = iVar3;
  in_ECX[2] = iVar2 + 1;
  if (iVar2 != 0) {
    *(int *)(iVar1 + 0xa8) = iVar3;
    ExceptionList = local_10;
    return;
  }
  *in_ECX = iVar3;
  ExceptionList = local_10;
  return;
}

