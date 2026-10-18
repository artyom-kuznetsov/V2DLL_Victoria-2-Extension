// FUN_00b06e50 @ 00b06e50 body=[[00b06e50, 00b06e7f]]


void FUN_00b06e50(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_00b07340(param_1);
  *in_ECX = &PTR_FUN_00ddfd14;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  *(undefined2 *)(in_ECX + 0x14) = 1;
  *(undefined1 *)(in_ECX + 0x15) = 0;
  return;
}

