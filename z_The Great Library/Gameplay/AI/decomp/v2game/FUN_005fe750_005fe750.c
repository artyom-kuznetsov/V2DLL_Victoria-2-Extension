// FUN_005fe750 @ 005fe750 body=[[005fe750, 005fe7c7] [005fe7cb, 005fe87a]]


int * FUN_005fe750(int *param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  float10 fVar4;
  undefined8 uVar5;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined8 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d918;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)(in_ECX + 0x20) != 0) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("money_slider",0xc);
    local_8 = 0;
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x4c))(local_34);
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (iVar1 != 0) {
      fVar4 = (float10)(**(code **)(*(int *)(iVar1 + 0x54) + 0x10))();
      if ((float)(fVar4 / (float10)100.0) < 0.0) {
        local_18 = 0xbfe0000000000000;
      }
      else {
        local_18 = 0x3fe0000000000000;
      }
      uVar5 = FUN_00b31c36();
      uVar5 = __allmul(uVar5,*(undefined4 *)(in_ECX + 0xa0),*(undefined4 *)(in_ECX + 0xa4));
      uVar3 = (uint)((ulonglong)uVar5 >> 0x20);
      uVar2 = (uint)uVar5 >> 0x1e | uVar3 << 2;
      *param_1 = uVar2 << 0xf;
      param_1[1] = ((int)uVar2 >> 0x1f) << 0xf | (uVar3 & 0x3fffffff) >> 0xf;
      ExceptionList = local_10;
      return param_1;
    }
  }
  ExceptionList = local_10;
  return param_1;
}

