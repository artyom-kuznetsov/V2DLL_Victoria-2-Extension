// FUN_00549af0 @ 00549af0 body=[[00549af0, 00549b24]]


void FUN_00549af0(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 *in_EAX;
  int in_ECX;
  
  uVar4 = *(undefined4 *)(in_ECX + 4);
  uVar1 = *(undefined8 *)(in_ECX + 8);
  uVar2 = *(undefined8 *)(in_ECX + 0x10);
  uVar3 = *(undefined1 *)(in_ECX + 0x18);
  *in_EAX = *param_1;
  *(undefined8 *)(in_EAX + 3) = uVar1;
  in_EAX[2] = uVar4;
  in_EAX[1] = CColor::vftable;
  *(undefined8 *)(in_EAX + 5) = uVar2;
  *(undefined1 *)(in_EAX + 7) = uVar3;
  return;
}

