// FUN_004cb060 @ 004cb060 body=[[004cb060, 004cb086]]


void FUN_004cb060(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  int in_ECX;
  
  uVar3 = *(undefined4 *)(in_ECX + 0x54);
  *(undefined8 *)(in_EAX + 2) = *(undefined8 *)(in_ECX + 0x58);
  uVar1 = *(undefined8 *)(in_ECX + 0x60);
  uVar2 = *(undefined1 *)(in_ECX + 0x68);
  in_EAX[1] = uVar3;
  *in_EAX = CColor::vftable;
  *(undefined8 *)(in_EAX + 4) = uVar1;
  *(undefined1 *)(in_EAX + 6) = uVar2;
  return;
}

