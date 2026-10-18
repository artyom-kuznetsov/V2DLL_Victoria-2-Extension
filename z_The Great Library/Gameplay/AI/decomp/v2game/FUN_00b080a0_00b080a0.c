// FUN_00b080a0 @ 00b080a0 body=[[00b080a0, 00b080ca]]


void FUN_00b080a0(void)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x9c) & 1) != 0) {
    *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) & 0xfffe;
    (**(code **)(*(int *)**(undefined4 **)(DAT_00f209e0 + 0x3c) + 0x2c))();
  }
  return;
}

