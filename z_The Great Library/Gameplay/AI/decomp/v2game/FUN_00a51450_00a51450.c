// FUN_00a51450 @ 00a51450 body=[[00a51450, 00a51684]]


undefined4 *
FUN_00a51450(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4e1f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[9] = 0;
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  local_8 = 0;
  *param_1 = &PTR_FUN_00e41808;
  param_1[0x23] = 0xc61c4000;
  param_1[0x24] = 0xc61c4000;
  param_1[0x25] = 0xc47a0000;
  param_1[0x26] = 0x461c4000;
  param_1[0x27] = 0x461c4000;
  param_1[0x28] = DAT_00f07eb0;
  FUN_00408b00();
  param_1[0x39] = param_2;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3e] = param_3;
  param_1[0x3f] = 0;
  param_1[0x40] = param_4;
  *(undefined2 *)(param_1 + 0x41) = 0;
  param_1[0x43] = 0x18d;
  param_1[0x42] = &PTR_FUN_00e44384;
  param_1[0x4b] = 0xf;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[0x52] = 0xf;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  param_1[0x5a] = 0xf;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x66] = 0xf;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x6e] = 0xf;
  param_1[0x6d] = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  param_1[0x77] = 0;
  FUN_00408b00();
  param_1[0x89] = DAT_00f14418;
  param_1[0x8b] = 0;
  FUN_00409350("MapSetLight",0xb);
  piVar1 = (int *)FUN_00996ad0();
  param_1[0x8a] = piVar1;
  (**(code **)(*piVar1 + 0x38))();
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  iVar2 = FUN_00aae9af();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x9c0) = 0;
    *(undefined4 *)(iVar2 + 0x9c4) = 1;
  }
  param_1[0x8c] = iVar2;
  FUN_009b7670();
  *(undefined4 *)(iVar2 + 0x9c0) = 0;
  ExceptionList = local_10;
  return param_1;
}

