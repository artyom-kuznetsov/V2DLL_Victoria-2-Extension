// FUN_009f1b80 @ 009f1b80 body=[[009f1b80, 009f1c8d]]


void FUN_009f1b80(undefined4 param_1)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  switch(param_1) {
  case 0x4b:
    *(undefined4 *)(in_ECX + 0x254) = *in_EAX;
    *(undefined4 *)(in_ECX + 600) = in_EAX[1];
    return;
  case 0x7d:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0x7e:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0x7f:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0x80:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0x81:
    FUN_00408ed0(in_EAX,0,0xffffffff);
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
  case 0xaa:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0xab:
    FUN_00408ed0(in_EAX,0,0xffffffff);
  }
  return;
}

