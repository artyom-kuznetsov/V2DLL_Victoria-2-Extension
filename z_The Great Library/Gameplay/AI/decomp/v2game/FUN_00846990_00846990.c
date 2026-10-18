// FUN_00846990 @ 00846990  (requested 00846990, first bytes: 55 8B EC 83 EC 0C 8B 45)


undefined4 FUN_00846990(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar1 = *(uint *)(param_2 + 0xda8);
  uVar2 = uVar1;
  while( true ) {
    uVar6 = uVar2;
    if (uVar6 < uVar1) {
      return 0;
    }
    if (*(uint *)(param_2 + 0xdac) <= uVar6) break;
    iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(uVar6 + 4) * 4);
    iVar4 = *(int *)(*(int *)(*(int *)(iVar5 + 0xbe8) + *(int *)(param_3 + 0x24) * 4) + 0x34);
    uVar2 = uVar6 + 8;
    if ((iVar4 != 0) && (cVar3 = FUN_0093c7c0(param_4), cVar3 != '\0')) {
      iVar4 = FUN_00936fc0(iVar4,uVar6,param_3 + 0x20,0);
      if (iVar4 < 1) {
        lVar7 = __allmul(*(undefined4 *)(iVar5 + 0x1a0),*(undefined4 *)(iVar5 + 0x1a4),0x18000,0);
        iVar5 = (int)((ulonglong)(lVar7 >> 0xf) >> 0x20);
        if ((iVar5 < *(int *)(param_1 + 0x1a4)) ||
           ((iVar5 <= *(int *)(param_1 + 0x1a4) &&
            ((uint)(lVar7 >> 0xf) <= *(uint *)(param_1 + 0x1a0))))) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

