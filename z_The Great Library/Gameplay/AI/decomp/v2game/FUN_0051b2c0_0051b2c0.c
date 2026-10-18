// FUN_0051b2c0 @ 0051b2c0 body=[[0051b2c0, 0051b303]]


void FUN_0051b2c0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 *in_EAX;
  int in_ECX;
  
  iVar1 = param_1 + 0x940 + in_ECX * 0x1c;
  uVar4 = *(undefined4 *)(iVar1 + 4);
  *(undefined8 *)(in_EAX + 2) = *(undefined8 *)(param_1 + 0x948 + in_ECX * 0x1c);
  uVar2 = *(undefined8 *)(iVar1 + 0x10);
  uVar3 = *(undefined1 *)(iVar1 + 0x18);
  in_EAX[1] = uVar4;
  *in_EAX = CColor::vftable;
  *(undefined8 *)(in_EAX + 4) = uVar2;
  *(undefined1 *)(in_EAX + 6) = uVar3;
  return;
}

