// FUN_00aa8740 @ 00aa8740 body=[[00aa8740, 00aa87ee]]


void FUN_00aa8740(int *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b364a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  iVar2 = param_1[1];
  iVar1 = *param_1;
  *in_ECX = 0;
  uVar3 = iVar2 - iVar1 >> 3;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (uVar3 != 0) {
    if (0x1fffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("vector<T> too long");
    }
    iVar2 = FUN_00aabbd0(uVar3);
    *in_ECX = iVar2;
    in_ECX[1] = iVar2;
    in_ECX[2] = iVar2 + uVar3 * 8;
    local_8 = 0;
    iVar2 = FUN_00aa7f40(*param_1,param_1[1],iVar2,in_ECX + 3,param_1);
    in_ECX[1] = iVar2;
  }
  ExceptionList = local_10;
  return;
}

