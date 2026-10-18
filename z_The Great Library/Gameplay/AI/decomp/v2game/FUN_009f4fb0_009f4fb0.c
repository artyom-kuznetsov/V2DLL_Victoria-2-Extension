// FUN_009f4fb0 @ 009f4fb0 body=[[009f4fb0, 009f5041] [009f5045, 009f50a3] [009f50a7, 009f50c6] [009f50d9, 009f5111] [009f5124, 009f5156]]


short * FUN_009f4fb0(short *param_1)

{
  undefined4 *puVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 local_68;
  uint local_54;
  undefined4 local_4c;
  uint local_38;
  undefined4 local_30;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45588;
  local_10 = ExceptionList;
  sVar3 = *(short *)(in_ECX + 0x3a);
  ExceptionList = &local_10;
  param_1[0] = 0;
  param_1[1] = 0;
  if ((sVar3 == *(short *)(in_ECX + 0x84)) &&
     (*(short *)(in_ECX + 0x38) == *(short *)(in_ECX + 0x82))) {
    *(undefined4 *)param_1 = *(undefined4 *)(in_ECX + 0x7e);
  }
  else {
    if (*(char *)(in_ECX + 0x9a) != '\0') {
      sVar3 = *(short *)(in_ECX + 0x3a);
      sVar2 = (**(code **)(**(int **)(in_ECX + 0x78) + 0x2c))();
      param_1[1] = sVar2 * sVar3;
    }
    iVar4 = FUN_009f74c0(*(undefined2 *)(in_ECX + 0x3a));
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30);
    }
    if (*(int *)(iVar4 + 0x10) < (int)(uint)*(ushort *)(in_ECX + 0x38)) {
      puVar5 = (undefined4 *)FUN_009f74c0(*(undefined2 *)(in_ECX + 0x3a));
      local_8 = 2;
      puVar1 = puVar5 + 4;
      if (0xf < (uint)puVar5[5]) {
        puVar5 = (undefined4 *)*puVar5;
      }
      sVar3 = (**(code **)(**(int **)(in_ECX + 0x78) + 0x28))(puVar5,*puVar1);
      *param_1 = sVar3;
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_68);
      }
    }
    else {
      FUN_009f74c0(*(undefined2 *)(in_ECX + 0x3a));
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_009895f0(*(undefined2 *)(in_ECX + 0x38));
      local_8 = CONCAT31(local_8._1_3_,1);
      puVar1 = puVar5 + 4;
      if (0xf < (uint)puVar5[5]) {
        puVar5 = (undefined4 *)*puVar5;
      }
      sVar3 = (**(code **)(**(int **)(in_ECX + 0x78) + 0x28))(puVar5,*puVar1);
      *param_1 = sVar3;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30);
      }
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c);
      }
    }
    *param_1 = *param_1 + 3;
    *(undefined4 *)(in_ECX + 0x7e) = *(undefined4 *)param_1;
  }
  *(undefined4 *)(in_ECX + 0x82) = *(undefined4 *)(in_ECX + 0x38);
  ExceptionList = local_10;
  return param_1;
}

