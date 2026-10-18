// FUN_006cdb90 @ 006cdb90 body=[[006cdb90, 006cdc5c]]


void FUN_006cdb90(int param_1,int param_2,int param_3,undefined4 param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_c;
  
  iVar1 = param_2;
  while (local_c = param_2 * 2 + 2, local_c < param_3) {
    iVar2 = FUN_004f3500();
    iVar3 = FUN_004f3500();
    if (iVar3 < iVar2) {
      local_c = param_2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + local_c * 4);
    param_2 = local_c;
  }
  if (local_c == param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    param_2 = param_3 + -1;
  }
  FUN_006cdef0(param_1,param_2,iVar1,param_4,param_5);
  return;
}

