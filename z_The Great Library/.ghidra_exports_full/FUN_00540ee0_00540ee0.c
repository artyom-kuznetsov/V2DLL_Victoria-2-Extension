// FUN_00540ee0 @ 00540ee0 body=[[00540ee0, 005410cc]]


void FUN_00540ee0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6a89b;
  local_14 = ExceptionList;
  uVar1 = *(uint *)(param_1 + 0x12e8);
  if (uVar1 == 0) {
    *param_2 = 0;
    return;
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 0xbcc) + 0x2a0);
  ExceptionList = &local_14;
  lVar6 = __alldiv(uVar2 << 0x1e,
                   (((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11) << 0xf | (uVar2 & 0x1ffff) >> 2,
                   0x1f40000,0);
  uVar2 = *(uint *)(*(int *)(DAT_012586dc + 0x40) + 0x90);
  uVar7 = __alldiv(uVar2 << 0x1e,
                   (((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11) << 0xf | (uVar2 & 0x1ffff) >> 2,
                   0x1f40000,0);
  iVar3 = *(int *)(param_1 + 0x1338);
  if (DAT_0131bb34 == 0) {
    iVar4 = FUN_00aae9af(0x188);
    local_c = 0;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_0041a160();
    }
    FUN_00423700(uVar5);
  }
  uVar2 = *(uint *)(*(int *)(DAT_012586dc + 0x40) + 0xa0);
  uVar8 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,0x1f40000,0);
  uVar2 = *(uint *)(*(int *)(param_1 + 0xa60) + 0x368);
  lVar9 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,0x1f40000,0);
  uVar2 = *(uint *)(iVar3 + *(int *)(DAT_0131bb34 + 0x17c) * 4);
  uVar10 = __alldiv(uVar2 << 0x1e,uVar2 >> 2,uVar1 << 0xf,uVar1 >> 0x11);
  lVar11 = __allmul(uVar10,uVar8);
  lVar11 = __allmul(lVar11 >> 0xf,uVar7);
  lVar6 = __allmul(lVar11 >> 0xf,lVar6 + lVar9 + 0x8000);
  uVar7 = __allmul(lVar6 >> 0xf,0x1f40000,0);
  *param_2 = (uint)uVar7 >> 0x1e | (int)((ulonglong)uVar7 >> 0x20) << 2;
  ExceptionList = local_14;
  return;
}

