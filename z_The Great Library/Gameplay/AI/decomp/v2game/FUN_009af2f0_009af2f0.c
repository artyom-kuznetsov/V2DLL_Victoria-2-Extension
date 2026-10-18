// FUN_009af2f0 @ 009af2f0 body=[[009af2f0, 009af33c] [009af340, 009af411] [009af41b, 009af42f]]


/* WARNING: Removing unreachable block (ram,0x009af379) */
/* WARNING: Removing unreachable block (ram,0x009af380) */
/* WARNING: Removing unreachable block (ram,0x009af38b) */
/* WARNING: Removing unreachable block (ram,0x009af3cd) */
/* WARNING: Removing unreachable block (ram,0x009af3ab) */
/* WARNING: Removing unreachable block (ram,0x009af3cf) */
/* WARNING: Removing unreachable block (ram,0x009af3ee) */
/* WARNING: Removing unreachable block (ram,0x009af3e3) */
/* WARNING: Removing unreachable block (ram,0x009af3f0) */
/* WARNING: Removing unreachable block (ram,0x009af3fa) */
/* WARNING: Removing unreachable block (ram,0x009af401) */

undefined4 * FUN_009af2f0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41bbc;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x38) + 0x34))();
  iVar2 = *piVar3;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xa8);
    FUN_00768aa0(iVar2);
    iVar2 = iVar1;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  ExceptionList = local_10;
  return param_2;
}

