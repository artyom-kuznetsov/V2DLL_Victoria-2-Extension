// FUN_009b4530 @ 009b4530 body=[[009b4530, 009b462b]]


void FUN_009b4530(undefined4 param_1)

{
  int iVar1;
  short sVar2;
  int in_ECX;
  short sVar3;
  undefined4 local_8;
  
  iVar1 = *(int *)(in_ECX + 0xf4);
  sVar3 = (short)param_1;
  sVar2 = (short)((uint)param_1 >> 0x10);
  if (iVar1 == 3) {
    sVar3 = *(short *)(in_ECX + 0xf8) + sVar3;
    sVar2 = sVar2 + *(short *)(in_ECX + 0xfc);
  }
  else if (iVar1 == 1) {
    sVar3 = *(short *)(in_ECX + 0xf8) + sVar3;
  }
  else if (iVar1 == 2) {
    sVar2 = sVar2 + *(short *)(in_ECX + 0xfc);
  }
  else if (iVar1 != 0) {
    if (iVar1 == 4) {
      sVar3 = (short)(*(int *)(in_ECX + 0xf8) / 2) + sVar3;
      sVar2 = (short)(*(int *)(in_ECX + 0xfc) / 2) + sVar2;
    }
    else if (iVar1 == 5) {
      sVar3 = (short)(*(int *)(in_ECX + 0xf8) / 2) + sVar3;
    }
    else if (iVar1 == 6) {
      sVar3 = (short)(*(int *)(in_ECX + 0xf8) / 2) + sVar3;
      sVar2 = sVar2 + *(short *)(in_ECX + 0xfc);
    }
  }
  local_8 = CONCAT22(sVar2,sVar3);
  *(undefined4 *)(in_ECX + 0x142) = local_8;
  FUN_009b3e90(local_8);
  return;
}

