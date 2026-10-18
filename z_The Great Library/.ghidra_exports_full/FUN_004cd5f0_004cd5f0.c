// FUN_004cd5f0 @ 004cd5f0 body=[[004cd5f0, 004cd7bb]]


void FUN_004cd5f0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = DAT_012586dc;
  if (unaff_EDI == 0) {
    *(int *)(in_ECX + 0xa0) = *(int *)(*(int *)(DAT_012586dc + 0x40) + 300) / 1000;
LAB_004cd624:
    *(undefined4 *)(in_ECX + 0xbc) = 0;
    if (param_1 == 1) {
      *(int *)(in_ECX + 0xb8) = param_2 + -1;
    }
    else {
      *(undefined4 *)(in_ECX + 0xb0) = 0x2d2d2d;
      *(undefined4 *)(in_ECX + 0xb4) = 0;
      *(undefined4 *)(in_ECX + 0xb8) = 0;
      *(undefined4 *)(in_ECX + 0xc0) = DAT_01259abc;
    }
    iVar2 = iVar1;
    if (unaff_EDI == 2) {
      *(int *)(in_ECX + 0xd8) = *(int *)(*(int *)(iVar1 + 0x40) + 300) / 1000;
      goto LAB_004cd717;
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0xa0) = 0;
    if (param_1 == 0) {
      *(int *)(in_ECX + 0x9c) = param_2 + -1;
    }
    else {
      *(undefined4 *)(in_ECX + 0x94) = 0x2d2d2d;
      *(undefined4 *)(in_ECX + 0x98) = 0;
      *(undefined4 *)(in_ECX + 0x9c) = 0;
      *(undefined4 *)(in_ECX + 0xa4) = DAT_01259abc;
    }
    iVar2 = DAT_012586dc;
    if (unaff_EDI != 1) goto LAB_004cd624;
    *(int *)(in_ECX + 0xbc) = *(int *)(*(int *)(DAT_012586dc + 0x40) + 300) / 1000;
  }
  *(undefined4 *)(in_ECX + 0xd8) = 0;
  if (param_1 == 2) {
    *(int *)(in_ECX + 0xd4) = param_2 + -1;
  }
  else {
    *(undefined4 *)(in_ECX + 0xcc) = 0x2d2d2d;
    *(undefined4 *)(in_ECX + 0xd0) = 0;
    *(undefined4 *)(in_ECX + 0xd4) = 0;
    *(undefined4 *)(in_ECX + 0xdc) = DAT_01259abc;
  }
  if (unaff_EDI == 3) {
    *(int *)(in_ECX + 0xf4) = *(int *)(*(int *)(iVar2 + 0x40) + 300) / 1000;
    return;
  }
LAB_004cd717:
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  if (param_1 == 3) {
    *(int *)(in_ECX + 0xf0) = param_2 + -1;
    return;
  }
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xe8) = 0x2d2d2d;
  *(undefined4 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0xf8) = DAT_01259abc;
  return;
}

