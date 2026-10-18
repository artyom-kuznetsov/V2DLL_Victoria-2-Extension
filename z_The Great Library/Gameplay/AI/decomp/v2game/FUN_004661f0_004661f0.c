// FUN_004661f0 @ 004661f0 body=[[004661f0, 0046625d] [00466264, 0046627e] [00466285, 00466322] [00466326, 00466345] [00466349, 00466359]]


/* WARNING: Removing unreachable block (ram,0x00466250) */
/* WARNING: Removing unreachable block (ram,0x00466256) */
/* WARNING: Removing unreachable block (ram,0x00466264) */
/* WARNING: Removing unreachable block (ram,0x00466248) */
/* WARNING: Removing unreachable block (ram,0x00466279) */

void FUN_004661f0(int param_1,int param_2,uint param_3)

{
  void **ppvVar1;
  int iVar2;
  int *in_ECX;
  undefined4 in_stack_0000001c;
  uint in_stack_00000020;
  undefined4 in_stack_00000028;
  uint in_stack_0000003c;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4d328;
  uStack_7 = 0;
  iVar2 = in_ECX[1] - *in_ECX;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar1, iVar2 >> 4 <= param_1) {
    local_8 = 2;
    FUN_00462dc0();
    ppvVar1 = ExceptionList;
    iVar2 = in_ECX[1] - *in_ECX;
  }
  local_8 = 1;
  param_1 = param_1 * 0x10;
  iVar2 = *(int *)(*in_ECX + 4 + param_1) - *(int *)(*in_ECX + param_1);
  while (iVar2 / 0x1c <= param_2) {
    FUN_00a840b0();
    iVar2 = *(int *)(*in_ECX + 4 + param_1) - *(int *)(*in_ECX + param_1);
  }
  FUN_00408ed0(&param_3,0,0xffffffff);
  if (in_stack_00000020 < 0x10) {
    in_stack_00000020 = 0xf;
    in_stack_0000001c = 0;
    param_3 = param_3 & 0xffffff00;
    if (in_stack_0000003c < 0x10) {
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_00000028);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_3);
}

