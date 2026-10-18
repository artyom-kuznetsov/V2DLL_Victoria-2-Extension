// FUN_004f5e10 @ 004f5e10 body=[[004f5e10, 004f5edc] [004f5ee0, 004f5fbd]]


void FUN_004f5e10(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  bool bVar11;
  undefined8 uVar12;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  iVar2 = *(int *)(param_1 + 8);
  piVar10 = *(int **)(iVar2 + 0x9d8);
  ExceptionList = &local_10;
  if (DAT_0131bb34 == 0) {
    ExceptionList = &local_10;
    iVar6 = FUN_00aae9af(0x188);
    local_8 = 0;
    if (iVar6 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_0041a160();
    }
    FUN_00423700(uVar7);
  }
  iVar6 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  do {
    do {
      if ((piVar10 < *(int **)(iVar2 + 0x9d8)) || (*(int **)(iVar2 + 0x9dc) <= piVar10)) {
        ExceptionList = local_10;
        return;
      }
      iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar10 * 4);
      piVar10 = piVar10 + 1;
      local_18 = 0;
    } while (iVar6 < 1);
    param_1 = 0;
    do {
      iVar5 = *(int *)(param_1 + *(int *)(iVar3 + 0x194));
      while (iVar5 != 0) {
        iVar4 = *(int *)(iVar5 + 0x27c);
        uVar9 = *(int *)(iVar5 + 0x254) << 0xf | *(uint *)(iVar5 + 0x250) >> 0x11;
        iVar8 = *(uint *)(iVar5 + 0x250) << 0xf;
        uVar12 = __alldiv(iVar8,uVar9,DAT_00f0b318,DAT_00f0b31c);
        bVar11 = param_2 < (uint)uVar12;
        param_2 = param_2 - (uint)uVar12;
        param_3 = (param_3 - (int)((ulonglong)uVar12 >> 0x20)) - (uint)bVar11;
        *(undefined4 *)(iVar5 + 0x250) = 0;
        *(undefined4 *)(iVar5 + 0x254) = 0;
        iVar5 = *(int *)(iVar3 + 0x188);
        uVar12 = __alldiv(iVar8,uVar9,DAT_00f0b168,DAT_00f0b16c);
        puVar1 = (uint *)(iVar5 + 600);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 - (uint)uVar12;
        *(int *)(iVar5 + 0x25c) =
             (*(int *)(iVar5 + 0x25c) - (int)((ulonglong)uVar12 >> 0x20)) -
             (uint)(uVar9 < (uint)uVar12);
        if ((*(int *)(iVar5 + 0x25c) < 1) && (*(int *)(iVar5 + 0x25c) < 0)) {
          *(undefined4 *)(iVar5 + 600) = 0;
          *(undefined4 *)(iVar5 + 0x25c) = 0;
        }
        if (param_3 < 0) {
          ExceptionList = local_10;
          return;
        }
        iVar5 = iVar4;
        if ((param_3 < 1) && (param_2 == 0)) {
          ExceptionList = local_10;
          return;
        }
      }
      param_1 = param_1 + 0x10;
      local_18 = local_18 + 1;
    } while (local_18 < iVar6);
  } while( true );
}

