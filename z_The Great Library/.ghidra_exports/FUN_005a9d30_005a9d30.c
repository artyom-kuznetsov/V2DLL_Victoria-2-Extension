// FUN_005a9d30 @ 005a9d30  (requested 005A9D30, first bytes: 55 8B EC 83 E4 F8 A1 E8)


undefined4 FUN_005a9d30(int param_1)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int local_10;
  int local_c [2];
  
  if ((*(char *)(DAT_012588e8 + 0xd11) == '\0') && (*(int *)(in_ECX + 0x1c) == -1)) {
    FUN_005dc0e0(*(int *)(in_ECX + 0x10) + 0x20,&local_10);
    FUN_005dc0e0(*(int *)(in_ECX + 0x14) + 0x20,local_c);
    param_1 = param_1 * 1000;
    iVar2 = local_10;
    if (param_1 == 0) {
      iVar1 = -1;
    }
    else if (local_10 + 0x189373U < 0x39580e) {
      iVar1 = (local_10 * 1000) / param_1;
    }
    else {
      uVar3 = __allmul(local_10,local_10 >> 0x1f,1000,0);
      iVar1 = __alldiv(uVar3,param_1,param_1 >> 0x1f);
      iVar2 = local_10;
    }
    if (local_c[0] < iVar1) {
      FUN_00595660(*(undefined4 *)(in_ECX + 0x14));
      FUN_005a0180();
      FUN_00595760();
      return 1;
    }
    if (param_1 == 0) {
      param_1 = -1;
    }
    else if (local_c[0] + 0x189373U < 0x39580e) {
      param_1 = (local_c[0] * 1000) / param_1;
    }
    else {
      uVar3 = __allmul(local_c[0],local_c[0] >> 0x1f,1000,0);
      local_c[0] = (int)((ulonglong)uVar3 >> 0x20);
      param_1 = __alldiv(uVar3,param_1,param_1 >> 0x1f);
    }
    if (iVar2 < param_1) {
      FUN_00595660(*(undefined4 *)(in_ECX + 0x10));
      FUN_005a0180();
      FUN_00595760();
      return 1;
    }
  }
  return 0;
}

