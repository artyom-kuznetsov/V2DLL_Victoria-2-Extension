// FUN_007e8500 @ 007e8500 body=[[007e8500, 007e88ae] [007e88b2, 007e88dc] [007e88e0, 007e895f]]


void FUN_007e8500(uint *param_1)

{
  void *_Dst;
  void *_Src;
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_7c;
  undefined4 local_78;
  int local_74;
  uint local_70;
  float fStack_6c;
  int local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  uint uStack_5c;
  undefined1 local_58;
  uint local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  uint uStack_40;
  undefined1 local_3c;
  char local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4afd8;
  local_14 = ExceptionList;
  local_70 = *param_1;
  uVar4 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + param_1[1] * 4);
  ExceptionList = &local_14;
  FUN_0051b2c0(uVar4);
  FUN_0051b2c0(uVar4);
  iVar2 = *(int *)(*(int *)(in_ECX + 0x124) + 0x15c);
  uVar12 = CONCAT44(uStack_5c,local_60);
  uVar13 = CONCAT44(uStack_64,local_68);
  iVar6 = *(int *)(*(int *)(in_ECX + 0x124) + 0x160) - iVar2;
  iVar8 = iVar6 >> 0x1f;
  if (iVar6 / 0x1c + iVar8 != iVar8) {
    *(undefined8 *)(iVar2 + 8) = uVar13;
    *(float *)(iVar2 + 4) = fStack_6c;
    *(undefined8 *)(iVar2 + 0x10) = uVar12;
    *(undefined1 *)(iVar2 + 0x18) = local_58;
  }
  iVar2 = *(int *)(*(int *)(in_ECX + 0x124) + 0x15c);
  uVar11 = CONCAT44(uStack_40,local_44);
  if (1 < (uint)((*(int *)(*(int *)(in_ECX + 0x124) + 0x160) - iVar2) / 0x1c)) {
    *(undefined8 *)(iVar2 + 0x24) = local_4c;
    *(undefined4 *)(iVar2 + 0x20) = local_50;
    *(undefined8 *)(iVar2 + 0x2c) = uVar11;
    *(undefined1 *)(iVar2 + 0x34) = local_3c;
  }
  if (*(int *)(in_ECX + 300) != 0) {
    FUN_009c0070();
    FUN_009c0070();
  }
  iVar2 = *(int *)(in_ECX + 0x130);
  local_7c = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x134) - iVar2 & 0xfffffffcU)) {
    do {
      iVar2 = *(int *)(iVar2 + local_7c * 4);
      if (iVar2 != 0) {
        iVar8 = *(int *)(iVar2 + 0x15c);
        iVar9 = *(int *)(iVar2 + 0x160) - iVar8;
        iVar6 = iVar9 >> 0x1f;
        if (iVar9 / 0x1c + iVar6 != iVar6) {
          *(undefined8 *)(iVar8 + 8) = uVar13;
          *(float *)(iVar8 + 4) = fStack_6c;
          *(undefined8 *)(iVar8 + 0x10) = uVar12;
          *(undefined1 *)(iVar8 + 0x18) = local_58;
        }
        iVar8 = *(int *)(iVar2 + 0x15c);
        if (1 < (uint)((*(int *)(iVar2 + 0x160) - iVar8) / 0x1c)) {
          *(undefined8 *)(iVar8 + 0x24) = local_4c;
          *(undefined4 *)(iVar8 + 0x20) = local_50;
          *(undefined8 *)(iVar8 + 0x2c) = uVar11;
          *(undefined1 *)(iVar8 + 0x34) = local_3c;
        }
      }
      iVar2 = *(int *)(in_ECX + 0x130);
      local_7c = local_7c + 1;
    } while (local_7c < *(int *)(in_ECX + 0x134) - iVar2 >> 2);
  }
  if (*(int *)(in_ECX + 0x128) != 0) {
    local_70 = *param_1;
    iVar2 = FUN_0052fc10();
    iVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 0x114) + 0x6bd6c) + iVar2 * 4);
    uVar10 = param_1[1];
    local_74 = *(int *)(iVar2 + 0x34);
    if (uVar10 == 0) {
      uVar10 = 1;
    }
    piVar5 = *(int **)(iVar2 + 0x14);
    fStack_6c = (float)local_74;
    iVar8 = (int)(uVar10 - 1) % (piVar5[1] - *piVar5 >> 3);
    local_7c = *(int *)(piVar5[((int)(uVar10 - 1) / (piVar5[1] - *piVar5 >> 3)) * 4] + iVar8 * 8);
    local_78 = *(undefined4 *)
                (piVar5[((int)(uVar10 - 1) / (piVar5[1] - *piVar5 >> 3)) * 4] + 4 + iVar8 * 8);
    iVar8 = *(int *)(in_ECX + 0x128);
    *(ulonglong *)(iVar8 + 0x170) = CONCAT44(fStack_6c,(float)*(int *)(iVar2 + 0x38));
    *(undefined1 *)(iVar8 + 0x16c) = 1;
    *(ulonglong *)(iVar8 + 0x178) = CONCAT44(local_78,local_7c);
    local_70 = *param_1;
    local_68 = local_7c;
    uStack_64 = local_78;
    iVar2 = FUN_0052fc10();
    uStack_40 = 0xf;
    local_44 = 0;
    local_54 = local_54 & 0xffffff00;
    local_c = 0;
    pcVar3 = __itoa(iVar2,local_38,10);
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
    local_c = 1;
    uVar4 = FUN_00988fa0(&local_54);
    local_c = CONCAT31(local_c._1_3_,2);
    iVar2 = *(int *)(in_ECX + 0x114);
    local_74 = FUN_00462500(uVar4);
    if ((local_74 == *(int *)(iVar2 + 0x6b820)) || (cVar1 = FUN_0098ab20(), cVar1 != '\0')) {
      local_7c = *(int *)(iVar2 + 0x6b820);
      piVar5 = &local_7c;
    }
    else {
      piVar5 = &local_74;
    }
    local_7c = *(int *)(*piVar5 + 0x28);
    if (uStack_5c < 0x10) {
      local_c = 0xffffffff;
      uStack_5c = 0xf;
      local_60 = 0;
      local_70 = local_70 & 0xffffff00;
      if (uStack_40 < 0x10) {
        iVar2 = *(int *)(in_ECX + 0x128);
        _Src = *(void **)(iVar2 + 0x18c);
        uVar10 = (int)_Src - *(int *)(iVar2 + 0x188) >> 2;
        local_74 = 0;
        if (uVar10 == 0) {
          FUN_0043cb20((undefined4 *)(iVar2 + 0x188),_Src,&local_74);
        }
        else if ((1 < uVar10) && (_Dst = (void *)(*(int *)(iVar2 + 0x188) + 4), _Dst != _Src)) {
          FID_conflict__memcpy(_Dst,_Src,0);
          *(void **)(iVar2 + 0x18c) = _Dst;
        }
        **(int **)(iVar2 + 0x188) = local_7c;
        ExceptionList = local_14;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70);
  }
  ExceptionList = local_14;
  return;
}

