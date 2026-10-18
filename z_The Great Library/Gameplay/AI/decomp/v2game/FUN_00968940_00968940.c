// FUN_00968940 @ 00968940 body=[[00968940, 00968c83] [00968c87, 00968d41]]


int FUN_00968940(int param_1)

{
  void *_Dst;
  void *_Src;
  int iVar1;
  undefined3 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4fa23;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  uVar3 = DAT_01258a14;
  uStack_7 = 0;
  uVar2 = uStack_7;
  local_8 = 2;
  uStack_7 = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  if (uVar3 == 0) {
    uVar3 = *(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) >> 2;
    DAT_01258a14 = uVar3;
  }
  if (DAT_01258a18 == 0) {
    DAT_01258a18 = *(int *)(DAT_01258a48 + 0x1c) - *(int *)(DAT_01258a48 + 0x18) >> 2;
  }
  if (DAT_01258a1c == 0) {
    if (DAT_0125ea24 == 0) {
      iVar4 = FUN_00aae9af(0x40);
      local_8 = 3;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00566260();
      }
      local_8 = 2;
      FUN_00567740(uVar5);
      uVar3 = DAT_01258a14;
      uVar2 = uStack_7;
    }
    uStack_7 = uVar2;
    DAT_01258a1c = *(uint *)(DAT_0125ea24 + 0x3c);
    uVar2 = uStack_7;
  }
  uStack_7 = uVar2;
  if (DAT_01258a20 == 0) {
    DAT_01258a20 = *(int *)(DAT_012587e8 + 0x10) - *(int *)(DAT_012587e8 + 0xc) >> 2;
  }
  if (DAT_01258a24 == 0) {
    DAT_01258a24 = *(int *)(DAT_012587e8 + 0x20) - *(int *)(DAT_012587e8 + 0x1c) >> 2;
  }
  if (DAT_01258a28 == 0) {
    if (DAT_0131bb34 == 0) {
      iVar4 = FUN_00aae9af(0x188);
      local_8 = 4;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0041a160();
      }
      local_8 = 2;
      FUN_00423700(uVar5);
      uVar3 = DAT_01258a14;
    }
    DAT_01258a28 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  }
  puVar8 = (undefined4 *)(param_1 + 0x38);
  puVar6 = (undefined4 *)(param_1 + 0x68);
  local_14 = 3;
  do {
    puVar6[6] = 0;
    puVar6[7] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    uVar5 = FUN_00aad56b(-(uint)((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar3 * 4));
    puVar8[-3] = uVar5;
    uVar5 = FUN_00aad56b(-(uint)((int)((ulonglong)DAT_01258a18 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)DAT_01258a18 * 4));
    *puVar8 = uVar5;
    puVar6 = puVar6 + 2;
    puVar8 = puVar8 + 1;
    local_14 = local_14 + -1;
    uVar3 = DAT_01258a14;
  } while (local_14 != 0);
  uVar5 = FUN_00aad56b(-(uint)((int)((ulonglong)DAT_01258a14 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)DAT_01258a14 * 4));
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  uVar5 = FUN_00aad56b(-(uint)((int)((ulonglong)DAT_01258a18 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)DAT_01258a18 * 4));
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  uVar5 = FUN_00aad56b(-(uint)((int)((ulonglong)DAT_01258a1c * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)DAT_01258a1c * 4));
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  uVar5 = FUN_00aad56b(-(uint)((int)((ulonglong)DAT_01258a20 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)DAT_01258a20 * 4));
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  uVar5 = FUN_00aad56b(-(uint)((int)((ulonglong)DAT_01258a24 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)DAT_01258a24 * 4));
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  uVar5 = FUN_00aad56b(-(uint)((int)((ulonglong)DAT_01258a28 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)DAT_01258a28 * 4));
  *(undefined4 *)(param_1 + 0x50) = uVar5;
  uVar5 = FUN_00aad56b(-(uint)((int)((ulonglong)DAT_01258a28 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)DAT_01258a28 * 4));
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  uVar5 = FUN_00aad56b(-(uint)((int)((ulonglong)DAT_01258a28 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)DAT_01258a28 * 4));
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  uVar5 = FUN_00aad56b(-(uint)((int)((ulonglong)DAT_01258a28 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)DAT_01258a28 * 4));
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  if (DAT_0131bb34 == 0) {
    iVar4 = FUN_00aae9af(0x188);
    local_8 = 5;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0041a160();
    }
    iVar1 = DAT_0131bb34;
    _local_8 = CONCAT31(uStack_7,6);
    if ((iVar4 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
      FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    local_8 = 2;
    DAT_0131bb34 = iVar4;
  }
  _Src = *(void **)(param_1 + 0xec);
  uVar7 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  uVar3 = (int)_Src - *(int *)(param_1 + 0xe8) >> 2;
  if (uVar7 < uVar3) {
    _Dst = (void *)(*(int *)(param_1 + 0xe8) + uVar7 * 4);
    if (_Dst != _Src) {
      FID_conflict__memcpy(_Dst,_Src,0);
      *(void **)(param_1 + 0xec) = _Dst;
    }
  }
  else if (uVar3 < uVar7) {
    FUN_007b94a0();
    puVar8 = *(undefined4 **)(param_1 + 0xec);
    iVar4 = uVar7 - ((int)puVar8 - *(int *)(param_1 + 0xe8) >> 2);
    if (iVar4 != 0) {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
    }
    *(uint *)(param_1 + 0xec) =
         *(int *)(param_1 + 0xec) +
         (uVar7 - (*(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xe8) >> 2)) * 4;
  }
  FUN_00968d50(param_1);
  ExceptionList = local_10;
  return param_1;
}

