// FUN_00b08200 @ 00b08200 body=[[00b08200, 00b0823a]]


void FUN_00b08200(void)

{
  int in_ECX;
  undefined4 unaff_retaddr;
  
  (**(code **)(*(int *)**(undefined4 **)(DAT_00f209e0 + 0x3c) + 0x18))();
  *(undefined4 *)(in_ECX + 0x20) = unaff_retaddr;
  FUN_00b08120(0,unaff_retaddr);
  *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) | 2;
  return;
}

