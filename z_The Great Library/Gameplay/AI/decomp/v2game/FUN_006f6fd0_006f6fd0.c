// FUN_006f6fd0 @ 006f6fd0 body=[[006f6fd0, 006f7104] [006f7108, 006f711e] [006f7122, 006f7134]]


/* WARNING: Removing unreachable block (ram,0x006f7116) */
/* WARNING: Removing unreachable block (ram,0x006f70fc) */

void FUN_006f6fd0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3acb0;
  local_10 = ExceptionList;
  iVar3 = *(int *)(in_ECX + 0x3c8);
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*param_1 + 0x80))();
  if (9 < iVar1) {
    iVar3 = iVar1 + -10;
    iVar1 = 10;
  }
  if ((*(int *)(in_ECX + 0x3d0) == iVar1) && (iVar3 == *(int *)(in_ECX + 0x3c8))) {
    *(bool *)(in_ECX + 0x3d4) = *(char *)(in_ECX + 0x3d4) == '\0';
  }
  *(int *)(in_ECX + 0x3d0) = iVar1;
  *(int *)(in_ECX + 0x3c8) = iVar3;
  FUN_006f53a0();
  FUN_00409350();
  local_8 = 0;
  FUN_00409350();
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))();
  iVar3 = (**(code **)(*piVar2 + 0x7c))();
  iVar3 = *(int *)(iVar3 + 0x104);
  if (iVar3 != 0) {
    FUN_00401000(0x3f000000);
    FUN_00b31c00();
    (**(code **)(*(int *)(iVar3 + 0x54) + 0x1c))();
  }
  ExceptionList = local_10;
  return;
}

