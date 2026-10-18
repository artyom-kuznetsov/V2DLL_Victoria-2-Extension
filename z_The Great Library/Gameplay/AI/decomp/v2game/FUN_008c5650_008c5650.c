// FUN_008c5650 @ 008c5650 body=[[008c5650, 008c5847]]


bool FUN_008c5650(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int in_ECX;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        cVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
        if (cVar4 != '\0') goto LAB_008c57fa;
      }
      else {
        iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
        uVar2 = *(uint *)(*(int *)(iVar5 + 0x1cc) + *(int *)(*(int *)(in_ECX + 0x28) + 0x28) * 4);
        uVar3 = *(uint *)(iVar5 + 0x1a8);
        if (uVar3 != 0) {
          uVar6 = __alldiv(uVar2 << 0x1e,
                           (((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11) << 0xf |
                           (uVar2 & 0x1ffff) >> 2,uVar3 << 0xf,uVar3 >> 0x11);
          __allmul(uVar6,0x320000,0);
LAB_008c57fa:
          cVar4 = FUN_0043e920();
          return cVar4 != '\0';
        }
      }
    }
    else {
      iVar5 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) +
                      0x188);
      uVar2 = *(uint *)(iVar5 + 200);
      if (uVar2 != 0) {
        uVar3 = *(uint *)(*(int *)(iVar5 + 0xec) + *(int *)(*(int *)(in_ECX + 0x28) + 0x28) * 4);
        uVar6 = __alldiv(uVar3 << 0x1e,((int)uVar3 >> 0x1f) << 0x1e | uVar3 >> 2,uVar2 << 0xf,
                         uVar2 >> 0x11);
        lVar7 = __allmul(uVar6,0x320000,0);
        iVar5 = (int)((ulonglong)(lVar7 >> 0xf) >> 0x20);
        if (*(int *)(in_ECX + 0x24) <= iVar5) {
          if (*(int *)(in_ECX + 0x24) < iVar5) {
            return true;
          }
          if (*(uint *)(in_ECX + 0x20) <= (uint)(lVar7 >> 0xf)) {
            return true;
          }
        }
      }
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0xc);
    iVar1 = *(int *)(DAT_012587e4 + 4);
    if (*(int *)(*(int *)(iVar1 + iVar5 * 4) + 0x12e8) != 0) {
      uVar2 = *(uint *)(*(int *)(iVar1 + iVar5 * 4) + 0x12e8);
      uVar3 = *(uint *)(*(int *)(*(int *)(iVar1 + iVar5 * 4) + 0x130c) +
                       *(int *)(*(int *)(in_ECX + 0x28) + 0x28) * 4);
      uVar6 = __alldiv(uVar3 << 0x1e,((int)uVar3 >> 0x1f) << 0x1e | uVar3 >> 2,uVar2 << 0xf,
                       uVar2 >> 0x11);
      lVar7 = __allmul(uVar6,0x320000,0);
      iVar5 = (int)((ulonglong)(lVar7 >> 0xf) >> 0x20);
      if ((*(int *)(in_ECX + 0x24) <= iVar5) &&
         ((*(int *)(in_ECX + 0x24) < iVar5 || (*(uint *)(in_ECX + 0x20) <= (uint)(lVar7 >> 0xf)))))
      {
        return true;
      }
    }
  }
  return false;
}

