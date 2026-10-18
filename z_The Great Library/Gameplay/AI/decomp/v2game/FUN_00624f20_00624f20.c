// FUN_00624f20 @ 00624f20 body=[[00624f20, 00624fe0] [00624fe4, 00624ff5]]


void FUN_00624f20(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x68) = param_1;
  FUN_00625a50(in_ECX,0);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("country_listbox",0xf);
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x7c))(local_2c);
  iVar1 = *(int *)(iVar1 + 0x104);
  if (iVar1 != 0) {
    FUN_00401000(0x3f000000,extraout_ECX,1,1);
    uVar2 = FUN_00b31c00();
    (**(code **)(*(int *)(iVar1 + 0x54) + 0x1c))(uVar2);
  }
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

