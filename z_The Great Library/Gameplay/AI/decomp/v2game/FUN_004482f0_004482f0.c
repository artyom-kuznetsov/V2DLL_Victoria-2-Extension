// FUN_004482f0 @ 004482f0 body=[[004482f0, 00448527] [0044852b, 0044853d]]


/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_004482f0(undefined4 param_1,int param_2,undefined4 param_3,char *param_4,int param_5,
            undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  rsize_t _DstSize;
  uint uVar5;
  char *******pppppppcVar6;
  undefined4 *puVar7;
  int iVar8;
  char *******local_48 [5];
  uint local_34;
  undefined1 local_2c [8];
  int *local_24;
  uint local_20 [2];
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d3e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00446040(local_20);
  local_8 = 0;
  local_24 = (int *)FUN_00448cc0();
  local_8 = 0xffffffff;
  if (local_20[0] != 0) {
    std::_Lockit::_Lockit((_Lockit *)local_18,0);
    iVar8 = *(int *)(local_20[0] + 4);
    if ((iVar8 != 0) && (iVar8 != -1)) {
      *(int *)(local_20[0] + 4) = iVar8 + -1;
    }
    iVar8 = *(int *)(local_20[0] + 4);
    FUN_00aad9f1();
    puVar7 = (undefined4 *)(~-(uint)(iVar8 != 0) & local_20[0]);
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)*puVar7)(1);
    }
  }
  FUN_00448a60();
  local_8 = 1;
  cVar1 = *param_4;
  if ((cVar1 == '+') || (cVar1 == '-')) {
    local_18[0] = 1;
  }
  else if ((cVar1 == '0') && ((param_4[1] == 'x' || (param_4[1] == 'X')))) {
    local_18[0] = 2;
  }
  else {
    local_18[0] = 0;
  }
  pppppppcVar6 = local_48[0];
  if (local_34 < 0x10) {
    pppppppcVar6 = (char *******)local_48;
  }
  if (*(char *)pppppppcVar6 != '\x7f') {
    pppppppcVar6 = local_48[0];
    if (local_34 < 0x10) {
      pppppppcVar6 = (char *******)local_48;
    }
    if ('\0' < *(char *)pppppppcVar6) {
      pppppppcVar6 = local_48[0];
      if (local_34 < 0x10) {
        pppppppcVar6 = (char *******)local_48;
      }
      cVar1 = *(char *)pppppppcVar6;
      iVar8 = param_5;
      while (((cVar1 != '\x7f' && ('\0' < cVar1)) &&
             ((uint)(int)cVar1 < (uint)(iVar8 - local_18[0])))) {
        iVar8 = iVar8 - cVar1;
        _DstSize = (param_5 - iVar8) + 1;
        _memmove_s(param_4 + iVar8 + 1,_DstSize,param_4 + iVar8,_DstSize);
        param_5 = param_5 + 1;
        param_4[iVar8] = '\0';
        if ('\0' < *(char *)((int)pppppppcVar6 + 1)) {
          pppppppcVar6 = (char *******)((int)pppppppcVar6 + 1);
        }
        cVar1 = *(char *)pppppppcVar6;
      }
    }
  }
  uVar5 = *(uint *)(param_2 + 0x14) & 0x1c0;
  if (uVar5 != 0x40) {
    if (uVar5 == 0x100) {
      puVar7 = (undefined4 *)FUN_00448950(local_2c,param_6,param_7,local_18[0]);
      param_5 = param_5 - local_18[0];
      param_4 = param_4 + local_18[0];
      puVar7 = (undefined4 *)FUN_00448540(*puVar7,puVar7[1],param_3);
    }
    else {
      puVar7 = (undefined4 *)FUN_00448540(param_6,param_7,param_3);
    }
    param_6 = *puVar7;
    param_7 = puVar7[1];
  }
  uVar4 = (**(code **)(*local_24 + 8))();
  puVar7 = (undefined4 *)FUN_004489c0(local_2c,param_4,param_5,uVar4,param_6,param_7);
  uVar2 = *puVar7;
  uVar3 = puVar7[1];
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  FUN_00448540(uVar2,uVar3,param_3);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

