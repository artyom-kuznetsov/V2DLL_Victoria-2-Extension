// FUN_009b4090 @ 009b4090 body=[[009b4090, 009b41ac] [009b41b0, 009b4225] [009b4230, 009b42a5]]


void FUN_009b4090(void)

{
  int iVar1;
  short *psVar2;
  int in_ECX;
  short sVar3;
  undefined4 *puVar4;
  undefined1 local_c [4];
  undefined4 local_8;
  
  iVar1 = *(int *)(in_ECX + 0xf4);
  if (iVar1 == 3) {
    local_8._0_2_ = *(short *)(in_ECX + 0xf8) + *(short *)(in_ECX + 0xe4);
    local_8._2_2_ = *(short *)(in_ECX + 0xfc) + *(short *)(in_ECX + 0xe6);
    goto LAB_009b4185;
  }
  if (iVar1 == 1) {
    local_8._0_2_ = *(short *)(in_ECX + 0xf8) + *(short *)(in_ECX + 0xe4);
  }
  else {
    if (iVar1 == 2) {
      local_8._2_2_ = *(short *)(in_ECX + 0xfc) + *(short *)(in_ECX + 0xe6);
      local_8._0_2_ = *(short *)(in_ECX + 0xe4);
      goto LAB_009b4185;
    }
    if (iVar1 != 0) {
      if (iVar1 == 4) {
        local_8._0_2_ = (short)(*(int *)(in_ECX + 0xf8) / 2) + *(short *)(in_ECX + 0xe4);
        local_8._2_2_ = (short)(*(int *)(in_ECX + 0xfc) / 2) + *(short *)(in_ECX + 0xe6);
      }
      else {
        local_8._0_2_ = *(short *)(in_ECX + 0xe4);
        local_8._2_2_ = *(short *)(in_ECX + 0xe6);
      }
      goto LAB_009b4185;
    }
    local_8._0_2_ = *(short *)(in_ECX + 0xe4);
  }
  local_8._2_2_ = *(short *)(in_ECX + 0xe6);
LAB_009b4185:
  sVar3 = (short)local_8 + *(short *)(in_ECX + 0xf0);
  local_8 = CONCAT22(local_8._2_2_ + *(short *)(in_ECX + 0xf0),sVar3);
  if (*(int *)(in_ECX + 0xc0) != 0) {
    for (puVar4 = *(undefined4 **)(in_ECX + 0x60); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[2]) {
      (**(code **)(*(int *)*puVar4 + 0x48))();
    }
    if (*(int *)(in_ECX + 0xe0) != 0) {
      (**(code **)(**(int **)(in_ECX + 0xe0) + 0x80))();
    }
    for (puVar4 = *(undefined4 **)(in_ECX + 0x60); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[2]) {
      (**(code **)(*(int *)*puVar4 + 0x44))(*(undefined4 *)(in_ECX + 0xc0));
    }
    if (*(int *)(in_ECX + 0xe0) != 0) {
      (**(code **)(**(int **)(in_ECX + 0xe0) + 0x74))(*(undefined4 *)(in_ECX + 0xc0));
    }
  }
  puVar4 = *(undefined4 **)(in_ECX + 0x60);
  if (*(char *)(in_ECX + 0x100) == '\0') {
    for (; puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)puVar4[2]) {
      sVar3 = sVar3 + *(short *)(in_ECX + 0xec);
      local_8._2_2_ = (short)((uint)local_8 >> 0x10);
      local_8 = CONCAT22(local_8._2_2_,sVar3);
      (**(code **)(*(int *)*puVar4 + 8))(local_8);
      psVar2 = (short *)(**(code **)(*(int *)*puVar4 + 0x14))(local_c);
      sVar3 = sVar3 + *psVar2;
    }
  }
  else if (puVar4 != (undefined4 *)0x0) {
    do {
      local_8 = CONCAT22(local_8._2_2_ + *(short *)(in_ECX + 0xec),(short)local_8);
      (**(code **)(*(int *)*puVar4 + 8))(local_8);
      iVar1 = (**(code **)(*(int *)*puVar4 + 0x14))(local_c);
      puVar4 = (undefined4 *)puVar4[2];
      local_8 = CONCAT22(local_8._2_2_ + *(short *)(iVar1 + 2),(short)local_8);
    } while (puVar4 != (undefined4 *)0x0);
    return;
  }
  return;
}

