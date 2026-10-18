// FUN_00a5c2a0 @ 00a5c2a0 body=[[00a5c2a0, 00a5c345]]


void FUN_00a5c2a0(undefined4 param_1)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  switch(param_1) {
  case 0x2e:
    *(undefined4 *)(in_ECX + 0xe0) = *in_EAX;
    *(undefined4 *)(in_ECX + 0xe4) = in_EAX[1];
    return;
  case 0x4b:
    *(undefined4 *)(in_ECX + 0xd8) = *in_EAX;
    *(undefined4 *)(in_ECX + 0xdc) = in_EAX[1];
    return;
  case 0x84:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0x8a:
    *(undefined4 *)(in_ECX + 0xe8) = *in_EAX;
    return;
  case 0x99:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0xb4:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    break;
  case 0xb5:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  }
  return;
}

