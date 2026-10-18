// FUN_00913370 @ 00913370 body=[[00913370, 009133bd]]


undefined4 FUN_00913370(char param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_1 == '\0') {
    uVar1 = FUN_00952850(*(undefined4 *)
                          (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                     *(int *)(in_ECX + 0xc) * 4) + 0xbe8) +
                                   *(int *)(in_ECX + 0x14) * 4) + 0x34),0,0);
    return uVar1;
  }
  return 1;
}

