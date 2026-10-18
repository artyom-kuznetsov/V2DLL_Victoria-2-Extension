// FUN_004f5100 @ 004f5100 body=[[004f5100, 004f5133]]


void FUN_004f5100(void)

{
  int in_EAX;
  undefined8 *unaff_ESI;
  undefined8 uVar1;
  
  uVar1 = __alldiv(*(uint *)(in_EAX + 0x150) << 0xf,
                   *(int *)(in_EAX + 0x154) << 0xf | *(uint *)(in_EAX + 0x150) >> 0x11,DAT_00f0b2d0,
                   DAT_00f0b2d4);
  *unaff_ESI = uVar1;
  return;
}

