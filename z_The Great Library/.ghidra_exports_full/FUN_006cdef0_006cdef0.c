// FUN_006cdef0 @ 006cdef0 body=[[006cdef0, 006cdf7d]]


void FUN_006cdef0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  while (local_8 = (param_2 + -1) / 2, param_3 < param_2) {
    iVar1 = FUN_004f3500();
    iVar2 = FUN_004f3500();
    if (iVar1 <= iVar2) break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + local_8 * 4);
    param_2 = local_8;
  }
  *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
  return;
}

