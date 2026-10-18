// FUN_00984390 @ 00984390 body=[[00984390, 009843cc]]


void FUN_00984390(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 *in_EDX;
  
  uVar1 = *(undefined8 *)(in_ECX + 8);
  uVar2 = *(undefined8 *)(in_ECX + 0x10);
  uVar4 = *(undefined4 *)(in_ECX + 4);
  uVar3 = *(undefined1 *)(in_ECX + 0x18);
  *param_1 = *in_EDX;
  param_1[1] = in_EDX[1];
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 4) = uVar1;
  param_1[2] = CColor::vftable;
  *(undefined8 *)(param_1 + 6) = uVar2;
  *(undefined1 *)(param_1 + 8) = uVar3;
  return;
}

