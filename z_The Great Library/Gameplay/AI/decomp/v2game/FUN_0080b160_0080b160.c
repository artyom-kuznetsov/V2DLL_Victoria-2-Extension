// FUN_0080b160 @ 0080b160 body=[[0080b160, 0080b6e7]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0080b160(int param_1,int param_2,void *param_3)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint _Size;
  int iVar5;
  void *_Dst;
  undefined4 uVar6;
  void *pvVar7;
  uint *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  void *local_20;
  uint local_1c;
  void *local_18;
  void *local_14;
  uint local_10;
  uint *local_c;
  int local_8;
  
  uVar12 = *(uint *)((int)param_3 + 4);
  iVar11 = param_2 * 0x3c0 + *(int *)(param_1 + 0x19c);
  pvVar7 = (void *)((int)param_3 + 8);
  local_8 = iVar11;
  if (uVar12 != 0) {
    local_10 = uVar12 >> 3;
    piVar2 = (int *)(iVar11 + 0x270);
    piVar9 = (int *)*piVar2;
    param_3 = (void *)uVar12;
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 8))(piVar9);
    }
    piVar9 = *(int **)(iVar11 + 0x274);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 8))(piVar9);
    }
    piVar9 = *(int **)(iVar11 + 0x278);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 8))(piVar9);
    }
    *(undefined4 *)(iVar11 + 0x278) = 0;
    *piVar2 = 0;
    *(undefined4 *)(iVar11 + 0x274) = 0;
    *(undefined4 *)(iVar11 + 0x27c) = 0;
    *(undefined4 *)(iVar11 + 0x280) = 0;
    *(undefined4 *)(iVar11 + 0x28c) = 0;
    FUN_009f9630(piVar2,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 100),local_10,8,0,0);
    piVar9 = (int *)*piVar2;
    _Dst = (void *)0x0;
    if (piVar9 != (int *)0x0) {
      uVar6 = 0;
      if ((*(char *)(iVar11 + 0x285) != '\0') && (*(char *)(iVar11 + 0x286) == '\0')) {
        uVar6 = 0x2000;
      }
      (**(code **)(*piVar9 + 0x2c))(piVar9,0,0,&local_18,uVar6);
      _Dst = local_18;
    }
    FID_conflict__memcpy(_Dst,pvVar7,(size_t)param_3);
    pvVar7 = (void *)((int)pvVar7 + (int)param_3);
    (**(code **)(*(int *)*piVar2 + 0x30))((int *)*piVar2);
    DAT_012589d8 = DAT_012589d8 + local_10 * 8;
  }
  local_18 = *(void **)((int)pvVar7 + 4);
  puVar8 = (uint *)((int)pvVar7 + 8);
  puVar1 = (uint *)(iVar11 + 0x20);
  param_3 = (void *)0x0;
  local_c = puVar8;
  FUN_004bf300((int)local_18 + 1);
  local_14 = (void *)0x0;
  FUN_004e9b90();
  if (0 < (int)local_18) {
    local_14 = local_18;
    do {
      local_1c = *puVar8;
      puVar3 = *(uint **)(iVar11 + 0x24);
      local_20 = (void *)(local_1c >> 1);
      uVar12 = *(int *)((*puVar1 - 4) + ((int)(*(int *)(iVar11 + 0x24) - *puVar1) >> 2) * 4) +
               (int)local_20;
      puVar8 = puVar8 + 1;
      local_10 = uVar12;
      if (&local_10 < puVar3) {
        puVar4 = (uint *)*puVar1;
        if (&local_10 < puVar4) goto LAB_0080b2eb;
        if (puVar3 == *(uint **)(iVar11 + 0x28)) {
          FUN_007b94a0();
        }
        if (*(undefined4 **)(iVar11 + 0x24) != (undefined4 *)0x0) {
          **(undefined4 **)(iVar11 + 0x24) =
               *(undefined4 *)(*puVar1 + ((int)&local_10 - (int)puVar4 >> 2) * 4);
        }
      }
      else {
LAB_0080b2eb:
        if (puVar3 == *(uint **)(iVar11 + 0x28)) {
          FUN_007b94a0();
        }
        if (*(uint **)(iVar11 + 0x24) != (uint *)0x0) {
          **(uint **)(iVar11 + 0x24) = uVar12;
        }
      }
      iVar5 = local_8;
      *(int *)(iVar11 + 0x24) = *(int *)(iVar11 + 0x24) + 4;
      if (0 < (int)local_1c) {
        param_3 = (void *)((int)param_3 + (int)local_20);
        puVar8 = (uint *)((int)puVar8 + local_1c);
      }
      local_14 = (void *)((int)local_14 + -1);
    } while (local_14 != (void *)0x0);
    if (0 < (int)param_3) {
      piVar2 = *(int **)(local_8 + 0x24c);
      puVar10 = (undefined4 *)(local_8 + 0x24c);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      piVar2 = *(int **)(iVar5 + 0x250);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      piVar2 = *(int **)(iVar5 + 0x254);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      *(undefined4 *)(iVar5 + 0x254) = 0;
      *puVar10 = 0;
      *(undefined4 *)(iVar5 + 0x250) = 0;
      *(undefined4 *)(iVar5 + 600) = 0;
      *(undefined4 *)(iVar5 + 0x25c) = 0;
      *(undefined4 *)(iVar5 + 0x268) = 0;
      *(undefined1 *)(iVar5 + 0x260) = 1;
      FUN_009f99d0(puVar10,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 100),param_3);
      (**(code **)(**(int **)(iVar5 + 0x250) + 0x2c))(*(int **)(iVar5 + 0x250),0,0,&local_20,0);
      param_3 = local_20;
      do {
        uVar12 = *local_c;
        local_c = local_c + 1;
        if (0 < (int)uVar12) {
          FID_conflict__memcpy(param_3,local_c,uVar12);
          param_3 = (void *)((int)param_3 + (uVar12 & 0xfffffffe));
          local_c = (uint *)((int)local_c + uVar12);
        }
        local_18 = (void *)((int)local_18 + -1);
      } while (local_18 != (void *)0x0);
      (**(code **)(**(int **)(iVar5 + 0x250) + 0x30))(*(int **)(iVar5 + 0x250));
    }
  }
  iVar11 = local_8;
  param_3 = (void *)*puVar8;
  puVar8 = puVar8 + 1;
  if (0 < (int)param_3) {
    piVar2 = *(int **)(local_8 + 0x294);
    puVar10 = (undefined4 *)(local_8 + 0x294);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar2 = *(int **)(iVar11 + 0x298);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar2 = *(int **)(iVar11 + 0x29c);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    *(undefined4 *)(iVar11 + 0x29c) = 0;
    *puVar10 = 0;
    *(undefined4 *)(iVar11 + 0x298) = 0;
    *(undefined4 *)(iVar11 + 0x2a0) = 0;
    *(undefined4 *)(iVar11 + 0x2a4) = 0;
    *(undefined4 *)(iVar11 + 0x2b0) = 0;
    *(undefined1 *)(iVar11 + 0x2a8) = 1;
    FUN_009f99d0(puVar10,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 100),(uint)param_3 >> 1);
    (**(code **)(**(int **)(iVar11 + 0x298) + 0x2c))(*(int **)(iVar11 + 0x298),0,0,&local_20,0);
    pvVar7 = param_3;
    FID_conflict__memcpy(local_20,puVar8,(size_t)param_3);
    puVar8 = (uint *)((int)puVar8 + (int)pvVar7);
    (**(code **)(**(int **)(iVar11 + 0x298) + 0x30))(*(int **)(iVar11 + 0x298));
  }
  iVar11 = local_8;
  uVar12 = *puVar8;
  puVar8 = puVar8 + 1;
  if ((0 < (int)uVar12) && (0 < (int)param_3)) {
    piVar9 = (int *)(local_8 + 0x294);
    FUN_009f9630(piVar9,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 100),uVar12 / 0xc,0xc,0,0);
    piVar2 = (int *)*piVar9;
    pvVar7 = (void *)0x0;
    if (piVar2 != (int *)0x0) {
      uVar6 = 0;
      if ((*(char *)(iVar11 + 0x2a9) != '\0') && (*(char *)(iVar11 + 0x2aa) == '\0')) {
        uVar6 = 0x2000;
      }
      (**(code **)(*piVar2 + 0x2c))(piVar2,0,0,&param_3,uVar6);
      pvVar7 = param_3;
    }
    FID_conflict__memcpy(pvVar7,puVar8,uVar12);
    puVar8 = (uint *)((int)puVar8 + uVar12);
    (**(code **)(*(int *)*piVar9 + 0x30))((int *)*piVar9);
    _DAT_012589dc = _DAT_012589dc + uVar12;
  }
  iVar11 = local_8;
  uVar12 = *puVar8;
  puVar8 = puVar8 + 1;
  if (uVar12 != 0) {
    piVar2 = *(int **)(local_8 + 0x2b8);
    piVar9 = (int *)(local_8 + 0x2b8);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar2 = *(int **)(iVar11 + 700);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar2 = *(int **)(iVar11 + 0x2c0);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    *(undefined4 *)(iVar11 + 0x2c0) = 0;
    *piVar9 = 0;
    *(undefined4 *)(iVar11 + 700) = 0;
    *(undefined4 *)(iVar11 + 0x2c4) = 0;
    *(undefined4 *)(iVar11 + 0x2c8) = 0;
    *(undefined4 *)(iVar11 + 0x2d4) = 0;
    FUN_009f9630(piVar9,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 100),uVar12 / 0xc,0xc,0,0);
    piVar2 = (int *)*piVar9;
    pvVar7 = (void *)0x0;
    if (piVar2 != (int *)0x0) {
      uVar6 = 0;
      if ((*(char *)(iVar11 + 0x2cd) != '\0') && (*(char *)(iVar11 + 0x2ce) == '\0')) {
        uVar6 = 0x2000;
      }
      (**(code **)(*piVar2 + 0x2c))(piVar2,0,0,&param_3,uVar6);
      pvVar7 = param_3;
    }
    FID_conflict__memcpy(pvVar7,puVar8,uVar12);
    (**(code **)(*(int *)*piVar9 + 0x30))((int *)*piVar9);
    iVar11 = local_8;
    _DAT_012589e0 = _DAT_012589e0 + uVar12;
    _Size = *(uint *)((int)puVar8 + uVar12);
    puVar8 = (uint *)((int)puVar8 + uVar12) + 1;
    if (0 < (int)_Size) {
      piVar2 = *(int **)(local_8 + 0x2dc);
      puVar10 = (undefined4 *)(local_8 + 0x2dc);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      piVar2 = *(int **)(iVar11 + 0x2e0);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      piVar2 = *(int **)(iVar11 + 0x2e4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      *(undefined4 *)(iVar11 + 0x2e4) = 0;
      *puVar10 = 0;
      *(undefined4 *)(iVar11 + 0x2e0) = 0;
      *(undefined4 *)(iVar11 + 0x2e8) = 0;
      *(undefined4 *)(iVar11 + 0x2ec) = 0;
      *(undefined4 *)(iVar11 + 0x2f8) = 0;
      FUN_009f99d0(puVar10,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 100),_Size >> 1);
      (**(code **)(**(int **)(iVar11 + 0x2e0) + 0x2c))(*(int **)(iVar11 + 0x2e0),0,0,&param_3,0);
      FID_conflict__memcpy(param_3,puVar8,_Size);
      puVar8 = (uint *)((int)puVar8 + _Size);
      (**(code **)(**(int **)(iVar11 + 0x2e0) + 0x30))(*(int **)(iVar11 + 0x2e0));
    }
  }
  uVar12 = *puVar8;
  puVar8 = puVar8 + 1;
  if (((0 < (int)uVar12) && (*(int *)(param_1 + 0x1588) != 0)) && (0 < (int)uVar12)) {
    do {
      local_38 = puVar8[1];
      local_3c = *puVar8;
      local_34 = puVar8[2];
      local_30 = puVar8[3];
      local_2c = puVar8[4];
      local_28 = puVar8[5];
      local_24 = puVar8[6];
      puVar8 = puVar8 + 7;
      FUN_007d2d20(*(undefined4 *)(param_1 + 0x1588),param_2,&local_3c);
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return 1;
}

