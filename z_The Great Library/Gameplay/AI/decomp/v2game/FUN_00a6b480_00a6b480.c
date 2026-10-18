// FUN_00a6b480 @ 00a6b480 body=[[00a6b480, 00a6b4f4] [00a6b515, 00a6b51c] [00a6b520, 00a6b52c] [00a6b534, 00a6b55b]]


/* WARNING: Removing unreachable block (ram,0x00a6b524) */

void FUN_00a6b480(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3a249;
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
        iVar1 = *(int *)(iVar2 + 8);
        FUN_00a6a430(iVar2);
        iVar2 = iVar1;
      }
    }
    param_1 = param_1 + 4;
  }
  ExceptionList = local_10;
  return;
}

