// FUN_009eb940 @ 009eb940 body=[[009eb940, 009eb995]]


void FUN_009eb940(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int in_ECX;
  
  uVar2 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 1);
  *(undefined8 *)(in_ECX + 0x11c) = uVar2;
  *(undefined8 *)(in_ECX + 0xf8) = uVar2;
  *(undefined4 *)(in_ECX + 0x124) = uVar1;
  *(undefined4 *)(in_ECX + 0x100) = uVar1;
  FUN_009ebf10(in_ECX);
  return;
}

