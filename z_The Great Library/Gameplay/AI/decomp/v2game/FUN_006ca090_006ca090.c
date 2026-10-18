// FUN_006ca090 @ 006ca090 body=[[006ca090, 006ca2c1]]


int FUN_006ca090(int *param_1,int *param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  int local_1f4;
  undefined4 local_1e8;
  undefined4 local_1e4;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6342b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0x2c))();
  if (*param_1 < *(int *)(iVar1 + 8)) {
    piVar2 = (int *)FUN_0043a900();
    local_18 = *piVar2;
  }
  else {
    if (*(int *)(in_ECX + 0x28) == 0) {
      piVar2 = (int *)FUN_0040a7f0();
      iVar1 = FUN_00aae9af(0xb0);
      local_8 = 0;
      if (iVar1 == 0) {
        local_1f4 = 0;
      }
      else {
        uVar3 = (**(code **)(*piVar2 + 0x3c))();
        uVar4 = (**(code **)(*piVar2 + 0x34))(uVar3);
        local_1f4 = FUN_006bf1f0(uVar4,uVar3);
      }
      local_8 = 0xffffffff;
      local_18 = local_1f4;
      (**(code **)(**(int **)(in_ECX + 4) + 0x10))(local_1f4,0);
    }
    else {
      piVar2 = (int *)FUN_006ca860();
      local_18 = *piVar2;
      FUN_006ca9a0();
      (**(code **)(**(int **)(in_ECX + 4) + 0x10))(local_18,0);
    }
    if (*param_2 == 0) {
      (**(code **)(**(int **)(in_ECX + 4) + 0x2c))();
      FUN_0062fd70();
    }
  }
  FUN_0061ac10();
  *(undefined4 *)(local_18 + 0x50) = local_1e8;
  *(undefined4 *)(local_18 + 0x54) = local_1e4;
  *(undefined4 *)(local_18 + 0x58) = 0;
  *(undefined1 *)(local_18 + 0x48) = param_3;
  *(undefined4 *)(local_18 + 0x4c) = param_4;
  *param_1 = *param_1 + 1;
  *param_2 = *(int *)(*param_2 + 8);
  ExceptionList = local_10;
  return local_18;
}

