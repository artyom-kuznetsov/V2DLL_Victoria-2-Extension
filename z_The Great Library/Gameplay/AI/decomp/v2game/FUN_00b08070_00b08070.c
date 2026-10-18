// FUN_00b08070 @ 00b08070 body=[[00b08070, 00b08099]]


void FUN_00b08070(void)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x9c) & 1) == 0) {
    *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) | 1;
    (**(code **)(*(int *)**(undefined4 **)(DAT_00f209e0 + 0x3c) + 0x2c))();
  }
  return;
}

