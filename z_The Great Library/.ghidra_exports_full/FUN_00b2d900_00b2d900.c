// FUN_00b2d900 @ 00b2d900 body=[[00b2d900, 00b2d960]]


undefined4 FUN_00b2d900(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((param_1 != 0) && (puVar2 = *(undefined4 **)(param_1 + 0x1c), puVar2 != (undefined4 *)0x0)) {
    puVar2[7] = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[3] = 0;
    puVar2[8] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar1 = puVar2 + 0x14c;
    puVar2[5] = 0x8000;
    puVar2[0x1b] = puVar1;
    puVar2[0x14] = puVar1;
    puVar2[0x13] = puVar1;
    return 0;
  }
  return 0xfffffffe;
}

