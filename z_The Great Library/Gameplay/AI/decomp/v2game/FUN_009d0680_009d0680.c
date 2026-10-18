// FUN_009d0680 @ 009d0680 body=[[009d0680, 009d0716] [009d071a, 009d0772]]


int FUN_009d0680(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_ESI;
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
  iVar1 = (**(code **)(*(int *)(unaff_ESI + 0x150) + 4))(param_1);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(unaff_ESI + 0x14c) + 0x48))(unaff_ESI + 0x68);
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
  iVar1 = FUN_00a5a320(*(undefined4 *)(unaff_ESI + 0x148),*(undefined4 *)(unaff_ESI + 0x14c));
  (**(code **)(*(int *)(iVar1 + 4) + 100))(param_2);
  (**(code **)(**(int **)(unaff_ESI + 0x14c) + 0x40))(iVar1 + 4);
  ExceptionList = local_10;
  return iVar1;
}

