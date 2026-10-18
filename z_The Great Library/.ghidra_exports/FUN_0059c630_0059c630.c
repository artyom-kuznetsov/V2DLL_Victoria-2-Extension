// FUN_0059c630 @ 0059c630  (requested 0059C630, first bytes: 55 8B EC 83 E4 F8 A1 E8)


undefined4 FUN_0059c630(int param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  int local_10;
  int local_c [2];
  
  if (*(char *)(DAT_012588e8 + 0xd11) == '\0') {
    FUN_005dc0e0(*(int *)(in_ECX + 0x10) + 0x20,local_c);
    FUN_005dc0e0(*(int *)(in_ECX + 0x14) + 0x20,&local_10);
    bVar1 = false;
    cVar2 = (**(code **)(**(int **)(in_ECX + 0x14) + 0x58))();
    iVar4 = local_c[0];
    if (cVar2 == '\0') {
      if (local_c[0] + 0x189373U < 0x39580e) {
        iVar5 = (local_c[0] * 1000) / 2000;
      }
      else {
        uVar7 = __allmul(local_c[0],local_c[0] >> 0x1f,1000,0);
        iVar5 = __alldiv(uVar7,2000,0);
      }
      if ((local_10 < iVar5) || (*(int *)(in_ECX + 0x1c) == -1)) {
        local_10 = 0;
      }
    }
    iVar5 = local_10;
    cVar2 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x58))();
    if (cVar2 == '\0') {
      if (iVar5 + 0x189373U < 0x39580e) {
        iVar3 = (iVar5 * 1000) / 2000;
      }
      else {
        uVar7 = __allmul(iVar5,iVar5 >> 0x1f,1000,0);
        iVar3 = __alldiv(uVar7,2000,0);
      }
      if ((iVar4 < iVar3) || (*(int *)(in_ECX + 0x1c) == -1)) {
        local_c[0] = 0;
        iVar4 = 0;
      }
    }
    if (iVar4 == 0) {
      bVar6 = false;
      if (iVar5 != 0) {
        bVar1 = true;
      }
    }
    else {
      bVar6 = iVar5 == 0;
    }
    if ((param_2 == '\0') ||
       (cVar2 = (**(code **)(**(int **)(in_ECX + 0x14) + 0x54))(), cVar2 != '\0')) {
      iVar5 = param_1 * 1000;
      if (iVar5 == 0) {
        iVar5 = -1;
      }
      else if (iVar4 + 0x189373U < 0x39580e) {
        iVar5 = (iVar4 * 1000) / iVar5;
      }
      else {
        uVar7 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
        iVar5 = __alldiv(uVar7,iVar5,iVar5 >> 0x1f);
      }
      if ((local_10 < iVar5) && (bVar6)) {
        FUN_00595660(*(undefined4 *)(in_ECX + 0x14));
        FUN_005a0180();
        FUN_00595760();
        return 1;
      }
    }
    if ((param_2 == '\0') ||
       (cVar2 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x54))(), cVar2 != '\0')) {
      param_1 = param_1 * 1000;
      if (param_1 == 0) {
        param_1 = -1;
      }
      else if (local_10 + 0x189373U < 0x39580e) {
        param_1 = (local_10 * 1000) / param_1;
      }
      else {
        uVar7 = __allmul(local_10,local_10 >> 0x1f,1000,0);
        param_1 = __alldiv(uVar7,param_1,param_1 >> 0x1f);
      }
      if ((local_c[0] < param_1) && (bVar1)) {
        FUN_00595660(*(undefined4 *)(in_ECX + 0x10));
        FUN_005a0180();
        FUN_00595760();
        return 1;
      }
    }
  }
  return 0;
}

