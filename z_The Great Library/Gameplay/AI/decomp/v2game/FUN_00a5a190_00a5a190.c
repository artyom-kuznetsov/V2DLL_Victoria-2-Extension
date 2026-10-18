// FUN_00a5a190 @ 00a5a190 body=[[00a5a190, 00a5a25e]]


void FUN_00a5a190(undefined4 param_1)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  switch(param_1) {
  case 0x2e:
    *(undefined4 *)(in_ECX + 0x104) = *in_EAX;
    *(undefined4 *)(in_ECX + 0x108) = in_EAX[1];
    return;
  case 0x4b:
    *(undefined4 *)(in_ECX + 0xf4) = *in_EAX;
    *(undefined4 *)(in_ECX + 0xf8) = in_EAX[1];
    return;
  case 0x83:
    *(undefined4 *)(in_ECX + 0x10c) = *in_EAX;
    *(undefined4 *)(in_ECX + 0x110) = in_EAX[1];
    return;
  case 0x84:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0x8a:
    *(undefined4 *)(in_ECX + 0x114) = *in_EAX;
    return;
  case 0x99:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0xb4:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0xb5:
    FUN_00408ed0(in_EAX,0,0xffffffff);
    return;
  case 0xbf:
    FUN_00408ed0(in_EAX,0,0xffffffff);
  }
  return;
}

