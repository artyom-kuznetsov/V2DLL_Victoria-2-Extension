// FUN_008adbe0 @ 008adbe0 body=[[008adbe0, 008add38] [008add3f, 008add6f] [008add79, 008adea9] [008adead, 008adece] [008aded2, 008adf7d] [008adf81, 008adf9c] [008adfa0, 008adfd0] [008adfd4, 008adfef] [008adff3, 008ae00a] [008ae00e, 008ae021]]


undefined4 FUN_008adbe0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  uint in_stack_0000001c;
  int in_stack_00000024;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_00000040;
  int in_stack_0000004c;
  undefined1 auStack_b8 [12];
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  undefined1 local_70 [4];
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 local_64;
  uint local_5c [3];
  int local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b93b94;
  local_10 = ExceptionList;
  local_28 = 0;
  local_8 = 1;
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + in_stack_00000040 * 4) + 0x188);
  local_30 = in_stack_00000030;
  local_2c = in_stack_00000034;
  ExceptionList = &local_10;
  if (in_stack_00000034 == 0) {
    ExceptionList = &local_10;
    if (piVar1 == (int *)0x0) {
LAB_008adc57:
      iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + in_stack_00000038 * 4);
      local_30 = *(int *)(iVar2 + 0x128);
      local_2c = *(int *)(iVar2 + 300);
    }
    else {
      uStack_a0 = CONCAT44(0x8adc3f,(undefined4)uStack_a0);
      ExceptionList = &local_10;
      cVar3 = (**(code **)(*piVar1 + 0x24))();
      if (cVar3 == '\0') goto LAB_008adc57;
      local_30 = piVar1[0x16];
      local_2c = piVar1[0x17];
    }
    if (local_2c != 0) goto LAB_008adcb0;
    local_30 = *(int *)(in_stack_0000004c + 8);
    local_2c = *(int *)(in_stack_0000004c + 0xc);
    if (local_2c != 0) goto LAB_008adcb0;
    if (0 < in_stack_00000038) {
      iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + in_stack_00000038 * 4);
      local_30 = *(int *)(iVar2 + 0x128);
      local_2c = *(int *)(iVar2 + 300);
      goto LAB_008adcb0;
    }
  }
  else {
LAB_008adcb0:
    if (0 < in_stack_00000038) {
      local_1c = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + in_stack_00000038 * 4);
      goto LAB_008adcc5;
    }
  }
  local_1c = 0;
LAB_008adcc5:
  uStack_a0 = CONCAT44(&param_2,local_70);
  uStack_a8 = CONCAT44(0x8adcd2,(undefined4)uStack_a8);
  FUN_009a8ee0();
  local_8._0_1_ = 2;
  uStack_a0 = CONCAT44(0x8adce1,(undefined4)uStack_a0);
  FUN_009a9960();
  local_8._0_1_ = 3;
  iVar2 = ((int)local_3c - (int)local_40) / 0x1c;
  local_18 = iVar2;
  if (in_stack_00000024 != 0) {
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_8._0_1_ = 4;
    uStack_a0 = CONCAT44(0x8add21,(undefined4)uStack_a0);
    FUN_00462dc0();
    if (local_50 != 0) {
      uStack_a0 = CONCAT44(0x8add30,(undefined4)uStack_a0);
      FUN_00413860();
      uStack_a0 = CONCAT44(local_50,&UNK_008add39);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_8._0_1_ = 5;
    uStack_a0 = CONCAT44(0x8add54,(undefined4)uStack_a0);
    FUN_00462dc0();
    local_8._0_1_ = 3;
    if (local_50 != 0) {
      uStack_a0 = CONCAT44(0x8add67,(undefined4)uStack_a0);
      FUN_00413860();
      uStack_a0 = CONCAT44(local_50,&UNK_008add70);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_a0 = CONCAT44(iVar2,0x8add81);
    FUN_00419660();
    uStack_a0 = CONCAT44(iVar2,0x8add8c);
    FUN_00419660();
  }
  if (0 < iVar2) {
    local_18 = 0;
    local_20 = iVar2;
    do {
      uStack_a0 = 0xffffffff00000000;
      local_48 = 0xf;
      local_4c = 0;
      local_5c[0] = local_5c[0] & 0xffffff00;
      uStack_a8 = CONCAT44((undefined1 *)(local_18 + (int)local_40),0x8addba);
      FUN_00408ed0();
      uStack_a0 = CONCAT44(&stack0x00000070,(undefined4)uStack_a0);
      local_24 = (undefined4 *)auStack_b8;
      local_8._0_1_ = 6;
      uStack_a8 = 0xf00000000;
      auStack_b8[0] = 0;
      FUN_00408ed0(local_5c,0,0xffffffff);
      FUN_008ac910(local_8c,&stack0x00000028);
      local_8._0_1_ = 7;
      puVar4 = (undefined4 *)FUN_00aae9af(0x40);
      local_8._0_1_ = 8;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = &PTR_FUN_00e38ecc;
        puVar4[1] = local_70;
        uStack_a0 = 0xffffffff00000000;
        puVar4[7] = 0xf;
        puVar4[6] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        uStack_a8 = CONCAT44(local_5c,0x8ade34);
        local_24 = puVar4;
        FUN_00408ed0();
        local_8._0_1_ = 9;
        *puVar4 = &PTR_FUN_00e38ef4;
        uStack_a0 = 0xffffffff00000000;
        puVar4[0xe] = 0xf;
        puVar4[0xd] = 0;
        *(undefined1 *)(puVar4 + 9) = 0;
        uStack_a8 = CONCAT44(local_8c,0x8ade58);
        FUN_00408ed0();
      }
      local_8 = CONCAT31(local_8._1_3_,7);
      uStack_a0 = CONCAT44(&local_24,local_5c);
      uStack_a8 = CONCAT44(0x8ade73,(undefined4)uStack_a8);
      local_24 = puVar4;
      FUN_009e6810();
      if (in_stack_00000024 != 0) {
        uStack_a0 = CONCAT44(0x8ade84,(undefined4)uStack_a0);
        FUN_00a840b0();
        uStack_a0 = CONCAT44(0x8ade94,(undefined4)uStack_a0);
        FUN_00a840b0();
      }
      if (0xf < local_78) {
        uStack_a0 = CONCAT44(local_8c[0],&UNK_008adeaa);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 3;
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = local_8c[0] & 0xffffff00;
      if (0xf < local_48) {
        uStack_a0 = CONCAT44(local_5c[0],&UNK_008adecf);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_18 = local_18 + 0x1c;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    uStack_a0 = 0x180008adef2;
    in_stack_00000024 = FUN_00aae9af();
    local_8._0_1_ = 10;
    if (in_stack_00000024 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uStack_a0 = CONCAT44(in_stack_00000024,0x8adf06);
      puVar4 = (undefined4 *)FUN_00475150();
    }
    local_8._0_1_ = 0xb;
    in_stack_00000024 = 0;
    if ((puVar4 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      uStack_a0 = 0x1008adf29;
      (**(code **)*DAT_0125b5e0)();
    }
    local_8._0_1_ = 3;
    DAT_0125b5e0 = puVar4;
  }
  uStack_a8 = *(undefined8 *)(DAT_0125b5e0 + 0x1b);
  uStack_a0 = *(undefined8 *)(DAT_0125b5e0 + 0x1d);
  uStack_ac = 0x8adf57;
  FUN_009a9880();
  local_28 = 1;
  puVar4 = local_40;
  if (local_40 == (undefined4 *)0x0) {
    local_40 = (undefined4 *)0x0;
    local_3c = (undefined4 *)0x0;
    local_38 = 0;
    local_8 = CONCAT31(local_8._1_3_,0xc);
    uStack_a0 = CONCAT44(0x8adfb5,(undefined4)uStack_a0);
    FUN_009adb70();
    puVar4 = local_6c;
    if (local_6c == (undefined4 *)0x0) {
      local_6c = (undefined4 *)0x0;
      local_68 = (undefined4 *)0x0;
      local_64 = 0;
      if (in_stack_0000001c < 0x10) {
        ExceptionList = local_10;
        return param_1;
      }
      uStack_a0 = CONCAT44(param_2,&UNK_008ae00b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    while( true ) {
      if (puVar4 == local_68) {
        uStack_a0 = CONCAT44(local_6c,&UNK_008adff0);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < (uint)puVar4[5]) break;
      puVar4[5] = 0xf;
      puVar4[4] = 0;
      *(undefined1 *)puVar4 = 0;
      puVar4 = puVar4 + 8;
    }
    uStack_a0 = CONCAT44(*puVar4,&UNK_008adfd1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  while( true ) {
    if (puVar4 == local_3c) {
      uStack_a0 = CONCAT44(local_40,&UNK_008adf9d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < (uint)puVar4[5]) break;
    puVar4[5] = 0xf;
    puVar4[4] = 0;
    *(undefined1 *)puVar4 = 0;
    puVar4 = puVar4 + 7;
  }
  uStack_a0 = CONCAT44(*puVar4,&UNK_008adf7e);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

