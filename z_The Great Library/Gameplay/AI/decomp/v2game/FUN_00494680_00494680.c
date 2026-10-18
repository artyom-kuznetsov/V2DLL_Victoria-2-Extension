// FUN_00494680 @ 00494680 body=[[00494680, 004946af]]


void FUN_00494680(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  int in_ECX;
  
  uVar3 = *(undefined4 *)(in_ECX + 0x7c);
  *(undefined8 *)(in_EAX + 2) = *(undefined8 *)(in_ECX + 0x80);
  uVar1 = *(undefined8 *)(in_ECX + 0x88);
  uVar2 = *(undefined1 *)(in_ECX + 0x90);
  in_EAX[1] = uVar3;
  *in_EAX = CColor::vftable;
  *(undefined8 *)(in_EAX + 4) = uVar1;
  *(undefined1 *)(in_EAX + 6) = uVar2;
  return;
}

