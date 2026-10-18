// FUN_00adfd20 @ 00adfd20 body=[[00adfd20, 00adfd7c] [00adfd80, 00adfdac]]


void FUN_00adfd20(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b3793b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 1;
  local_4 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = param_1[1];
    FUN_00adfe30(uVar1);
    uVar2 = 0;
    if (uVar1 != 0) {
      iVar3 = 0;
      do {
        *(undefined4 *)(iVar3 + *in_ECX) = *(undefined4 *)(*(int *)(*param_1 + uVar2 * 4) + 4);
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0xc;
      } while (uVar2 < uVar1);
    }
  }
  ExceptionList = local_c;
  return;
}

