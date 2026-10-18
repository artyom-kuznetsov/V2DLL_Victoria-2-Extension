// FUN_00a16220 @ 00a16220 body=[[00a16220, 00a16397]]


undefined4 * FUN_00a16220(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b413e5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3f050;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x10] = 0xf;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x21] = 0xf;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  local_8 = 3;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  if (*(int *)(unaff_EDI + 0x18) == 0) {
    param_1[6] = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_00aae9af(0x3c);
    if (puVar2 == (undefined4 *)0x0) {
      local_8 = CONCAT31(local_8._1_3_,3);
      param_1[6] = 0;
    }
    else {
      uVar1 = *(undefined4 *)(unaff_EDI + 0x18);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[0xd] = 0xf;
      puVar2[0xc] = 0;
      *(undefined1 *)(puVar2 + 8) = 0;
      local_8._0_1_ = 7;
      FUN_009d5e10(uVar1);
      local_8 = CONCAT31(local_8._1_3_,3);
      param_1[6] = puVar2;
    }
  }
  param_1[7] = *(undefined4 *)(unaff_EDI + 0x1c);
  param_1[8] = *(undefined4 *)(unaff_EDI + 0x20);
  param_1[9] = *(undefined4 *)(unaff_EDI + 0x24);
  param_1[10] = *(undefined4 *)(unaff_EDI + 0x28);
  FUN_00408ed0(unaff_EDI + 0x2c,0,0xffffffff);
  FUN_00408ed0(unaff_EDI + 0x48,0,0xffffffff);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(unaff_EDI + 100);
  param_1[0x1a] = *(undefined4 *)(unaff_EDI + 0x68);
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(unaff_EDI + 0x6c);
  FUN_00408ed0(unaff_EDI + 0x70,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x23) = *(undefined8 *)(unaff_EDI + 0x8c);
  *(undefined8 *)(param_1 + 0x25) = *(undefined8 *)(unaff_EDI + 0x94);
  param_1[0x27] = *(undefined4 *)(unaff_EDI + 0x9c);
  ExceptionList = local_10;
  return param_1;
}

