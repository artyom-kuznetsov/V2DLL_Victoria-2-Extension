// FUN_009d0780 @ 009d0780 body=[[009d0780, 009d081c] [009d0820, 009d0875]]


int * FUN_009d0780(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 in_ECX;
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
  iVar1 = (**(code **)(*(int *)(param_1 + 0x150) + 4))();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x14c) + 0x48))(param_1 + 0x68);
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00408ed0(in_ECX,0,0xffffffff);
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
  piVar2 = (int *)FUN_00a58c90(*(undefined4 *)(param_1 + 0x14c));
  (**(code **)(*piVar2 + 100))(param_2);
  (**(code **)(**(int **)(param_1 + 0x14c) + 0x40))(piVar2);
  ExceptionList = local_10;
  return piVar2;
}

