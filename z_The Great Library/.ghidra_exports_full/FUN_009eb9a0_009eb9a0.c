// FUN_009eb9a0 @ 009eb9a0 body=[[009eb9a0, 009eb9f5]]


void FUN_009eb9a0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int in_ECX;
  
  uVar2 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 1);
  *(undefined8 *)(in_ECX + 0x128) = uVar2;
  *(undefined8 *)(in_ECX + 0x104) = uVar2;
  *(undefined4 *)(in_ECX + 0x130) = uVar1;
  *(undefined4 *)(in_ECX + 0x10c) = uVar1;
  FUN_009ebf10(in_ECX);
  return;
}

