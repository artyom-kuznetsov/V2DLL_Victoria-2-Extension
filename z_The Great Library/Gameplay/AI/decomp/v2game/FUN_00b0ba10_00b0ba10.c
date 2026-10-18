// FUN_00b0ba10 @ 00b0ba10 body=[[00b0ba10, 00b0ba5b]]


void FUN_00b0ba10(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_00ded94d;
  }
  FUN_00b12a60(puVar1);
  *in_ECX = &PTR_FUN_00ddfe94;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *(undefined2 *)(in_ECX + 8) = 1;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  *(undefined2 *)(in_ECX + 0xc) = 0xcd;
  return;
}

