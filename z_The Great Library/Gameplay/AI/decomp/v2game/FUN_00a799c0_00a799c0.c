// FUN_00a799c0 @ 00a799c0 body=[[00a799c0, 00a79a53]]


void FUN_00a799c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f0940 = DAT_013f0940 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  DAT_013f0948 = DAT_013f0948 + 1;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[6] = &PTR_FUN_00e388f0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_00e43854;
  param_1[6] = &PTR_LAB_00e3893c;
  puVar1 = param_1 + 0x50;
  iVar2 = 0x100;
  do {
    *(undefined1 *)(puVar1 + -0x40) = 0;
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined1 *)(param_1 + 0x90) = 0;
  return;
}

