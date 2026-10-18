// FUN_009f5160 @ 009f5160 body=[[009f5160, 009f51e4] [009f51e8, 009f522f] [009f523f, 009f528b]]


short * FUN_009f5160(short *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 local_48;
  uint local_34;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b42448;
  local_10 = ExceptionList;
  if ((*(short *)(in_ECX + 0x3a) == *(short *)(in_ECX + 0x84)) &&
     (*(short *)(in_ECX + 0x38) == *(short *)(in_ECX + 0x82))) {
    *(undefined4 *)param_1 = *(undefined4 *)(in_ECX + 0x7e);
  }
  else {
    sVar3 = *(short *)(in_ECX + 0x3a);
    ExceptionList = &local_10;
    sVar2 = (**(code **)(**(int **)(in_ECX + 0x78) + 0x2c))();
    param_1[1] = sVar2 * sVar3;
    iVar4 = FUN_009f74c0(*(undefined2 *)(in_ECX + 0x3a));
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c);
    }
    if (*(int *)(iVar4 + 0x10) < (int)(uint)*(ushort *)(in_ECX + 0x38)) {
      puVar1 = param_2 + 4;
      if (0xf < (uint)param_2[5]) {
        param_2 = (undefined4 *)*param_2;
      }
      sVar3 = (**(code **)(**(int **)(in_ECX + 0x78) + 0x28))(param_2,*puVar1);
      *param_1 = sVar3;
    }
    else {
      puVar5 = (undefined4 *)FUN_009895f0(*(undefined2 *)(in_ECX + 0x38));
      local_8 = 0;
      puVar1 = puVar5 + 4;
      if (0xf < (uint)puVar5[5]) {
        puVar5 = (undefined4 *)*puVar5;
      }
      sVar3 = (**(code **)(**(int **)(in_ECX + 0x78) + 0x28))(puVar5,*puVar1);
      *param_1 = sVar3;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48);
      }
    }
    *param_1 = *param_1 + 3;
    *(undefined4 *)(in_ECX + 0x7e) = *(undefined4 *)param_1;
  }
  *(undefined4 *)(in_ECX + 0x82) = *(undefined4 *)(in_ECX + 0x38);
  ExceptionList = local_10;
  return param_1;
}

