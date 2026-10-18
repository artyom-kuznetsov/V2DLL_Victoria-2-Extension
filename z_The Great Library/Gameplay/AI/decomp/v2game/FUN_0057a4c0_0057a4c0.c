// FUN_0057a4c0 @ 0057a4c0  (requested 0057A4C0, first bytes: 55 8B EC 83 E4 F8 83 EC)


int FUN_0057a4c0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_EDI;
  undefined8 uVar7;
  
  iVar1 = *(int *)(DAT_012587e4 + 4);
  iVar2 = *(int *)(iVar1 + param_2 * 4);
  iVar4 = *(int *)(*(int *)(iVar2 + 0xa60) + *(int *)(*(int *)(unaff_EDI + 0x310) + 0x44) * 8);
  iVar3 = *(int *)(unaff_EDI + 0x2e8) * 1000;
  uVar7 = __allmul(iVar3,iVar3 >> 0x1f,1000,0);
  iVar4 = iVar4 + 1000;
  iVar3 = __alldiv(uVar7,iVar4,iVar4 >> 0x1f);
  iVar4 = -(int)((double)((*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18) / -365.0) -
          *(int *)(unaff_EDI + 0x340);
  if (0 < iVar4) {
    iVar5 = iVar4 * 1000;
    iVar6 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0xbc);
    if (iVar6 == 0) {
      iVar6 = -1;
    }
    else if (iVar5 + 0x189373U < 0x39580e) {
      iVar6 = (iVar4 * 1000000) / iVar6;
    }
    else {
      uVar7 = __allmul(iVar5,iVar5 >> 0x1f,1000,0);
      iVar6 = __alldiv(uVar7,iVar6,iVar6 >> 0x1f);
    }
    if (1000 < iVar6) {
      iVar6 = 1000;
    }
    iVar3 = __alldiv((longlong)(1000 - iVar6) * (longlong)iVar3,1000,0);
  }
  if (((*(char *)(iVar2 + 0xcf5) != '\0') || (*(char *)(iVar2 + 0xcf4) != '\0')) &&
     (0 < *(int *)(*(int *)(*(int *)(*(int *)(iVar1 + *(int *)(iVar2 + 0xcfc) * 4) + 0xbcc) + 0x2b8)
                  + *(int *)(unaff_EDI + 0x2e4) * 4))) {
    iVar3 = __alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x40) + 0xc0) * (longlong)iVar3,1000
                     ,0);
  }
  if (iVar3 < 1000) {
    iVar3 = 1000;
  }
  return iVar3 / 1000;
}

