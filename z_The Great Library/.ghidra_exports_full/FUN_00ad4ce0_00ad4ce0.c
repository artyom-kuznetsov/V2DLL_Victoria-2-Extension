// FUN_00ad4ce0 @ 00ad4ce0 body=[[00ad4ce0, 00ad4d01]]


void FUN_00ad4ce0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)FUN_00ad4c80();
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0xf8) = *puVar1;
    return;
  }
  *(undefined4 *)(in_ECX + 0xf8) = 0xffffffff;
  return;
}

