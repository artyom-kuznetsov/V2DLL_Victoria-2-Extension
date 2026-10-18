// FUN_00a701b0 @ 00a701b0 body=[[00a701b0, 00a701e3]]


void FUN_00a701b0(void)

{
  int *in_EAX;
  
  if (in_EAX == (int *)0x0) {
    uRam00000014 = uRam00000014 & 0xfffff9ff | 0x800;
    return;
  }
  *(uint *)((int)in_EAX + *(int *)(*in_EAX + 4) + 0x14) =
       *(uint *)(*(int *)(*in_EAX + 4) + 0x14 + (int)in_EAX) & 0xfffff9ff | 0x800;
  return;
}

