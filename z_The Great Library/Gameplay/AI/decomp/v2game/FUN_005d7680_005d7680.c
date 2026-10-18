// FUN_005d7680 @ 005d7680 body=[[005d7680, 005d775e]]


uint FUN_005d7680(int param_1)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  int in_ECX;
  
  if (param_1 != 0) {
    in_EAX = *(uint *)(param_1 + 0x5c);
    if (*(char *)(in_EAX + 0x2a) == '\0') {
LAB_005d774e:
      uVar2 = FUN_005cd2f0(param_1);
      return uVar2;
    }
    if ((*(int *)(param_1 + 300) != 0) && (*(int *)(param_1 + 0x158) != 0)) {
      in_EAX = param_1 + 0x130;
      iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x134) * 4);
      if (((*(int *)(in_ECX + 0xc4) == *(int *)(iVar1 + 0x20)) ||
          (((*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + *(int *)(in_ECX + 0xc4) * 4) + 0x34) == 0
            && (((*(char *)(in_ECX + 0xc0) != 'R' || (*(char *)(in_ECX + 0xc1) != 'E')) ||
                (*(char *)(in_ECX + 0xc2) != 'B')))) &&
           (((*(char *)(iVar1 + 0x1c) != 'R' || (*(char *)(iVar1 + 0x1d) != 'E')) ||
            (*(char *)(iVar1 + 0x1e) != 'B')))))) &&
         (in_EAX = FUN_0051af10(1), (char)in_EAX != '\0')) goto LAB_005d774e;
    }
  }
  return in_EAX & 0xffffff00;
}

