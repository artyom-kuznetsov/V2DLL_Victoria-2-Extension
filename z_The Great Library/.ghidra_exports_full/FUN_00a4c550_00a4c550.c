// FUN_00a4c550 @ 00a4c550 body=[[00a4c550, 00a4c5dc] [00a4c5e0, 00a4c6b7] [00a4c6bb, 00a4c7b8] [00a4c7bc, 00a4c7fc] [00a4c800, 00a4c813]]


/* WARNING: Removing unreachable block (ram,0x00a4c7af) */
/* WARNING: Removing unreachable block (ram,0x00a4c6ae) */
/* WARNING: Removing unreachable block (ram,0x00a4c6fd) */
/* WARNING: Removing unreachable block (ram,0x00a4c7f3) */
/* WARNING: Removing unreachable block (ram,0x00a4c7f8) */
/* WARNING: Removing unreachable block (ram,0x00a4c5d3) */

void FUN_00a4c550(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b60f50;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  in_ECX[0x2c] = 0;
  in_ECX[0x2f] = param_1 + 0x158;
  FUN_00409350();
  local_c = 0;
  cVar1 = FUN_00416db0();
  local_c = 0xffffffff;
  if (cVar1 == '\0') {
    FUN_009be510();
  }
  FUN_00a45090();
  local_c = 1;
  FUN_00a4c320();
  local_c._0_1_ = 2;
  FUN_00408ed0();
  local_c = CONCAT31(local_c._1_3_,1);
  iVar2 = D3DXLoadMeshHierarchyFromXA();
  if (-1 < iVar2) {
    (**(code **)(*in_ECX + 0x44))();
    iVar2 = in_ECX[0x2a];
    *(undefined2 *)(in_ECX + 0x2d) = 0;
    *(undefined2 *)((int)in_ECX + 0xb6) = 0;
    if ((((*(int *)(iVar2 + 0x44) == 0) || (iVar3 = FUN_00a4d520(), -1 < iVar3)) &&
        ((*(int *)(iVar2 + 0x48) == 0 || (iVar3 = FUN_00a4d5b0(), -1 < iVar3)))) &&
       (*(int *)(iVar2 + 0x4c) != 0)) {
      FUN_00a4d5b0();
    }
    FUN_00409350();
    local_c._0_1_ = 3;
    cVar1 = FUN_00416db0();
    local_c = CONCAT31(local_c._1_3_,1);
    if (cVar1 == '\0') {
      FUN_00408ed0(in_ECX + 0x3e,0,0xffffffff);
      (**(code **)(*in_ECX + 0x80))();
    }
  }
  ExceptionList = local_14;
  return;
}

