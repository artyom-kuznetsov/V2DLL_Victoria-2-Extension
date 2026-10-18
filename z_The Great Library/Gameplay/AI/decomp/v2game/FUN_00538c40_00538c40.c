// FUN_00538c40 @ 00538c40 body=[[00538c40, 00538d3d] [00538d46, 00538de0] [00538de9, 00538e7c] [00538e85, 00539113]]


/* WARNING: Removing unreachable block (ram,0x00538f52) */

undefined1 * FUN_00538c40(undefined1 *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int in_EDX;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 local_178 [84];
  undefined1 local_124 [216];
  longlong local_4c;
  undefined4 local_44;
  undefined4 local_40;
  uint local_38;
  undefined4 local_28;
  uint local_24;
  undefined8 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b733b1;
  local_10 = ExceptionList;
  local_1c._4_4_ = 0;
  if (in_ECX == 0) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350();
    ExceptionList = local_10;
    return param_1;
  }
  iVar4 = *(int *)(in_ECX + 0x30);
  iVar3 = *(int *)(in_ECX + 0x2c);
  if (iVar3 != iVar4) {
    do {
      if (*(int *)(iVar3 + 4) == *(int *)(in_EDX + 0x20)) break;
      iVar3 = iVar3 + 8;
    } while (iVar3 != iVar4);
    if (iVar3 != iVar4) {
      ExceptionList = &local_10;
      cVar2 = FUN_0093c4c0();
      if (cVar2 != '\0') {
        local_24 = 0xf;
        local_28 = 0;
        local_38 = local_38 & 0xffffff00;
        FUN_00409350();
        local_8 = 0;
        FUN_009a8ee0();
        local_8._0_1_ = 1;
        iVar4 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_009a9740();
        if (local_24 < 0x10) {
          ExceptionList = local_10;
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      goto LAB_00538df2;
    }
  }
  ExceptionList = &local_10;
  cVar2 = FUN_0093c4c0();
  if (cVar2 != '\0') {
    local_24 = 0xf;
    local_28 = 0;
    local_38 = local_38 & 0xffffff00;
    FUN_00409350();
    local_8 = 2;
    FUN_009a8ee0();
    local_8._0_1_ = 3;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_009a9740();
    if (local_24 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_00538df2:
  iVar4 = FUN_00936fc0(in_ECX,in_EDX + 0x1c);
  if (iVar4 < 1) {
    local_24 = 0xf;
    local_28 = 0;
    local_38 = local_38 & 0xffffff00;
    FUN_00409350();
    local_8 = 4;
    FUN_009a8ee0();
    local_8._0_1_ = 5;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_009a9740();
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    uVar1 = *(uint *)(*(int *)(in_EDX + 0x1310) + *(int *)(*(int *)(DAT_01258a48 + 0x8c) + 0x50) * 4
                     );
    local_4c = __alldiv(uVar1 << 0x1e,uVar1 >> 2);
    iVar4 = *(int *)(DAT_012586dc + 0x30);
    uVar1 = *(uint *)(iVar4 + 0x3f4);
    local_1c = __alldiv(uVar1 << 0x1e,
                        (((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11) << 0xf |
                        (uVar1 & 0x1ffff) >> 2);
    if (*(char *)(in_ECX + 0xfc) != '\0') {
      uVar1 = *(uint *)(iVar4 + 0x4a4);
      uVar6 = __alldiv(uVar1 << 0x1e,
                       (((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11) << 0xf | (uVar1 & 0x1ffff) >> 2
                      );
      lVar7 = __allmul(uVar6);
      local_1c = lVar7 >> 0xf;
    }
    if ((param_2 == '\0') && (local_4c < local_1c)) {
      FUN_009885d0();
      local_8 = 6;
      FUN_009885d0();
      local_8._0_1_ = 7;
      local_44 = 0x320000;
      local_40 = 0;
      FUN_0043a6a0();
      FUN_00988bb0(local_178,3);
      local_8._0_1_ = 8;
      FUN_009885d0();
      local_8._0_1_ = 9;
      FUN_00988f20();
      local_8._0_1_ = 10;
      FUN_00988f20();
      local_8._0_1_ = 0xb;
      local_44 = 0x320000;
      local_40 = 0;
      FUN_0043a6a0();
      FUN_00988bb0(local_124,3);
      local_8._0_1_ = 0xc;
      FUN_009885d0();
      local_8._0_1_ = 0xd;
      FUN_00988f20();
      local_8._0_1_ = 0xe;
      uVar5 = FUN_00988f20();
      local_8 = CONCAT31(local_8._1_3_,0xf);
      FUN_0043ec10(param_1,"VALUE",uVar5);
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
    }
    else {
      FUN_009885d0();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

