// FUN_0068f8e0 @ 0068f8e0 body=[[0068f8e0, 0068f954] [0068f975, 0068f97c] [0068f980, 0068f98c] [0068f994, 0068f9bb]]


/* WARNING: Removing unreachable block (ram,0x0068f984) */

void FUN_0068f8e0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3a3b9;
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
        FUN_0057aab0(iVar2);
        iVar2 = iVar1;
      }
    }
    param_1 = param_1 + 4;
  }
  ExceptionList = local_10;
  return;
}

