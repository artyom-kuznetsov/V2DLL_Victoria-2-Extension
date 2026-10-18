// FUN_00a58030 @ 00a58030 body=[[00a58030, 00a58123]]


void FUN_00a58030(undefined4 param_1)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  switch(param_1) {
  case 0x2e:
    *(undefined4 *)(in_ECX + 0x134) = *in_EAX;
    *(undefined4 *)(in_ECX + 0x138) = in_EAX[1];
    return;
  case 0x4b:
    *(undefined4 *)(in_ECX + 300) = *in_EAX;
    *(undefined4 *)(in_ECX + 0x130) = in_EAX[1];
    return;
  case 0x83:
    *(undefined4 *)(in_ECX + 0x13c) = *in_EAX;
    *(undefined4 *)(in_ECX + 0x140) = in_EAX[1];
    return;
  case 0x85:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0x86:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0x87:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0x88:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0x8a:
    *(undefined4 *)(in_ECX + 0x154) = *in_EAX;
    return;
  case 0x92:
    *(undefined4 *)(in_ECX + 0x148) = *in_EAX;
    break;
  case 0x93:
    *(undefined4 *)(in_ECX + 0x144) = *in_EAX;
    return;
  case 0x94:
    *(undefined4 *)(in_ECX + 0x14c) = *in_EAX;
    return;
  case 0x95:
    *(undefined4 *)(in_ECX + 0x150) = *in_EAX;
    return;
  case 0x96:
    *(undefined4 *)(in_ECX + 0x184) = *in_EAX;
    return;
  }
  return;
}

