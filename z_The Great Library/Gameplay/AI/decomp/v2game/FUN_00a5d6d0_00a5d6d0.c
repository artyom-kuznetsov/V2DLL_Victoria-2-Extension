// FUN_00a5d6d0 @ 00a5d6d0 body=[[00a5d6d0, 00a5d7a6]]


void FUN_00a5d6d0(undefined4 param_1)

{
  undefined8 *in_EAX;
  int in_ECX;
  
  switch(param_1) {
  case 0x4b:
    *(undefined4 *)(in_ECX + 0x154) = *(undefined4 *)in_EAX;
    *(undefined4 *)(in_ECX + 0x158) = *(undefined4 *)((int)in_EAX + 4);
    return;
  case 0x84:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0x8f:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0x90:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0x91:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0xa9:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0xaa:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0xab:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0xac:
    *(undefined8 *)(in_ECX + 0x15c) = *in_EAX;
    *(undefined4 *)(in_ECX + 0x164) = *(undefined4 *)(in_EAX + 1);
  }
  return;
}

