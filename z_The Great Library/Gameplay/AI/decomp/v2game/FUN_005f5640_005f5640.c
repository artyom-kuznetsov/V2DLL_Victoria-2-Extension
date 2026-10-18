// FUN_005f5640 @ 005f5640 body=[[005f5640, 005f5728]]


void FUN_005f5640(char param_1)

{
  int in_ECX;
  undefined1 local_1c [4];
  undefined1 *local_18;
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  if (param_1 == '\0') {
    FUN_004d2260();
    FUN_004bbd50();
  }
  else {
    local_c = *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x188);
    local_10 = FUN_00466e10();
    local_10 = local_10 & 0xff;
    local_8 = local_10 * 1000;
    local_18 = local_1c;
    *(int *)(in_ECX + 0x14) = local_8;
    FUN_004d2260();
    FUN_004bbd50();
  }
  return;
}

