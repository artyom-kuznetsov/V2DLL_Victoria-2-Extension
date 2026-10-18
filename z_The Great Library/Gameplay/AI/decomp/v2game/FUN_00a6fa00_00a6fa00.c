// FUN_00a6fa00 @ 00a6fa00 body=[[00a6fa00, 00a6fa9e]]


undefined4 * FUN_00a6fa00(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined4 *)FUN_00aae9af(0x58);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  pvVar2 = _malloc(*param_2 << 6);
  puVar1[3] = pvVar2;
  pvVar2 = _malloc(*param_2 << 6);
  *(undefined8 *)(puVar1 + 0xe) = 0x3ff0000000000000;
  puVar1[4] = pvVar2;
  *(undefined2 *)(puVar1 + 0x10) = 0x101;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  FUN_0068f390();
  return puVar1;
}

