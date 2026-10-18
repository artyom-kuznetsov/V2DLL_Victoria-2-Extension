// FUN_005935d0 @ 005935d0  (requested 005935D0, first bytes: 55 8B EC 53 8B 5D 08 56)


int * FUN_005935d0(int *param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  iVar2 = in_EAX + 8;
  iVar3 = in_EAX + 0x48;
  if (*(char *)(in_EAX + 0x88) == '\0') {
    iVar3 = in_EAX + 8;
    iVar2 = in_EAX + 0x48;
  }
  *param_1 = DAT_0125f43c;
  iVar1 = *(int *)(iVar2 + 0x3c) * 1000;
  if (iVar1 + 0x189373U < 0x39580e) {
    iVar2 = (*(int *)(iVar2 + 0x3c) * 1000000) / 2000;
  }
  else {
    uVar4 = __allmul(iVar1,iVar1 >> 0x1f,1000,0);
    iVar2 = __alldiv(uVar4,2000,0);
  }
  iVar2 = *(int *)(iVar3 + 0x3c) * 1000 - iVar2;
  if (0 < iVar2) {
    if ((*(int *)(in_EAX + 0x8c) == 0) ||
       (*(char *)(*(int *)(*(int *)(in_EAX + 0x8c) + 0x5c) + 0x2a) == '\0')) {
      if ((-0x189374 < iVar2) && (iVar2 < 0x20c49b)) {
        *param_1 = (iVar2 * 1000) / 5000 + DAT_0125f43c;
        return param_1;
      }
      uVar4 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
      uVar5 = 5000;
    }
    else {
      if ((-0x189374 < iVar2) && (iVar2 < 0x20c49b)) {
        *param_1 = (iVar2 * 1000) / 5000000 + DAT_0125f43c;
        return param_1;
      }
      uVar4 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
      uVar5 = 5000000;
    }
    iVar3 = __alldiv(uVar4,uVar5,0);
    *param_1 = iVar3 + DAT_0125f43c;
  }
  return param_1;
}

