// FUN_00b08280 @ 00b08280 body=[[00b08280, 00b0843e]]


void FUN_00b08280(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x20) = param_1[4];
  if (*(char *)((int)param_1 + 0x41) == '\0') {
    *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) & 0xfff7;
  }
  else {
    *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) | 8;
  }
  *(undefined4 *)(in_ECX + 0x74) = param_1[10];
  *(undefined4 *)(in_ECX + 0x98) = param_1[0xe];
  *(undefined4 *)(in_ECX + 0x24) = param_1[5];
  FUN_00b08120(param_1[6],param_1[3]);
  *(undefined4 *)(in_ECX + 0x7c) = param_1[0xb];
  *(undefined4 *)(in_ECX + 0xa0) = param_1[0xf];
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) & 0xff7f;
  }
  else {
    *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) | 0x80;
  }
  if (*(char *)((int)param_1 + 0x43) == '\0') {
    *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) & 0xffef;
  }
  else {
    *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) | 0x10;
  }
  if (*(char *)((int)param_1 + 0x45) == '\0') {
    *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) & 0xfeff;
  }
  else {
    *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) | 0x100;
  }
  if (*(char *)((int)param_1 + 0x46) == '\0') {
    *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) & 0xfdff;
  }
  else {
    *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) | 0x200;
  }
  *(undefined4 *)(in_ECX + 0x3c) = param_1[8];
  *(undefined4 *)(in_ECX + 0x84) = param_1[0xd];
  *(undefined4 *)(in_ECX + 0x40) = param_1[9];
  *(undefined4 *)(in_ECX + 0x44) = param_1[7];
  if (*(char *)((int)param_1 + 0x47) == '\0') {
    *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) & 0xdfff;
  }
  else {
    *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) | 0x2000;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) & 0xffdf;
  }
  else {
    *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) | 0x20;
  }
  if (*(char *)((int)param_1 + 0x49) == '\0') {
    *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) & 0xffbf;
  }
  else {
    *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) | 0x40;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) & 0xbfff;
  }
  else {
    *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) | 0x4000;
  }
  *(undefined4 *)(in_ECX + 0x5c) = *param_1;
  *(undefined4 *)(in_ECX + 0x60) = param_1[1];
  *(undefined4 *)(in_ECX + 100) = param_1[2];
  uVar1 = 0;
  if (param_1[0xf] == 1) {
    if (*(int *)(in_ECX + 0x8c) == 0) {
      *(undefined4 *)(in_ECX + 0x34) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(*(int *)(in_ECX + 0x8c) + 0x28);
    }
    *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(in_ECX + 0x34);
  }
  if (*(int *)(in_ECX + 0x8c) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x8c) + 0x28);
  }
  *(undefined4 *)(in_ECX + 0x48) = uVar1;
  return;
}

