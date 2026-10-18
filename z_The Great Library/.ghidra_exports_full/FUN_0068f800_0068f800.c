// FUN_0068f800 @ 0068f800 body=[[0068f800, 0068f874] [0068f895, 0068f89c] [0068f8a0, 0068f8ac] [0068f8b4, 0068f8db]]


/* WARNING: Removing unreachable block (ram,0x0068f8a4) */

void FUN_0068f800(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3a3e9;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 2;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      iVar2 = 0;
      while (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0xc);
        FUN_00679b80(iVar2);
        iVar2 = iVar1;
      }
    }
    param_1 = param_1 + 4;
  }
  ExceptionList = local_10;
  return;
}

