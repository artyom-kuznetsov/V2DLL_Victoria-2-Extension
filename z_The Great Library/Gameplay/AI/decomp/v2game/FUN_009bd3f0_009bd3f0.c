// FUN_009bd3f0 @ 009bd3f0 body=[[009bd3f0, 009bd542] [009bd546, 009bd570] [009bd574, 009bd5a5]]


uint FUN_009bd3f0(uint param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 in_ECX;
  undefined4 *****pppppuVar7;
  undefined4 *****pppppuVar8;
  undefined4 ****local_34 [4];
  uint local_24;
  uint local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d918;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_00462500(in_ECX);
  if ((local_14 == *(int *)(param_1 + 0x6b6c8)) || (cVar2 = FUN_0098ab20(), cVar2 != '\0')) {
    local_18 = *(int *)(param_1 + 0x6b6c8);
    piVar5 = &local_18;
  }
  else {
    piVar5 = &local_14;
  }
  iVar3 = *piVar5;
  if (iVar3 != *(int *)(param_1 + 0x6b6c8)) goto LAB_009bd586;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = (undefined4 ****)((uint)local_34[0] & 0xffffff00);
  FUN_00408ed0(in_ECX,0,0xffffffff);
  local_8 = 0;
  iVar3 = 0;
  pppppuVar7 = (undefined4 *****)local_34[0];
  uVar6 = local_20;
  if (0 < (int)local_24) {
    do {
      pppppuVar8 = pppppuVar7;
      if (uVar6 < 0x10) {
        pppppuVar8 = local_34;
      }
      if (*(char *)((int)pppppuVar8 + iVar3) == '/') {
        if (uVar6 < 0x10) {
          pppppuVar7 = local_34;
        }
        *(undefined1 *)((int)pppppuVar7 + iVar3) = 0x5c;
        pppppuVar7 = (undefined4 *****)local_34[0];
        uVar6 = local_20;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)local_24);
  }
  local_18 = FUN_00462500(local_34);
  uVar6 = local_24;
  local_14 = *(int *)(param_1 + 0x6b6c8);
  if (local_18 == local_14) {
LAB_009bd521:
    piVar5 = &local_14;
  }
  else {
    uVar1 = *(uint *)(local_18 + 0x1c);
    uVar4 = local_24;
    if (uVar1 <= local_24) {
      uVar4 = uVar1;
    }
    uVar4 = FUN_00414bd0(uVar4);
    if (uVar4 == 0) {
      if (uVar6 < uVar1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar6 != uVar1);
      }
    }
    if ((int)uVar4 < 0) goto LAB_009bd521;
    piVar5 = &local_18;
  }
  iVar3 = *piVar5;
  if (iVar3 == *(int *)(param_1 + 0x6b6c8)) {
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    ExceptionList = local_10;
    return param_1 & 0xffffff00;
  }
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = (undefined4 ****)((uint)local_34[0] & 0xffffff00);
LAB_009bd586:
  uVar6 = FUN_009bd030(param_1,*(undefined4 *)(iVar3 + 0x28));
  ExceptionList = local_10;
  return uVar6;
}

