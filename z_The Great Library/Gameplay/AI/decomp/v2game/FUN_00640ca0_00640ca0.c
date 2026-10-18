// FUN_00640ca0 @ 00640ca0 body=[[00640ca0, 00640d36] [00640d3a, 00640d88]]


undefined4 FUN_00640ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EDI;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d918;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*(int *)(unaff_EDI + 0x150) + 4))(param_1);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(unaff_EDI + 0x14c) + 0x48))(unaff_EDI + 0x68);
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00408ed0(param_1,0,0xffffffff);
    local_8 = 0;
    (**(code **)(*(int *)(iVar1 + 0x150) + 4))(local_34);
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
  }
  uVar2 = FUN_009ecdf0(param_3,*(undefined4 *)(unaff_EDI + 0xa8),*(undefined4 *)(unaff_EDI + 0xac));
  (**(code **)(**(int **)(unaff_EDI + 0x14c) + 0x40))(uVar2);
  ExceptionList = local_10;
  return uVar2;
}

