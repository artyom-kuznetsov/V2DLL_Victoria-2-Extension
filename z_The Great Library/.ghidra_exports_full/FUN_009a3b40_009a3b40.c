// FUN_009a3b40 @ 009a3b40 body=[[009a3b40, 009a3dd8] [009a3de6, 009a3ef1] [009a3ef8, 009a3f6a] [009a3f74, 009a4061]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009a3b40(int *param_1,undefined4 param_2,int *param_3)

{
  size_t _Size;
  void *pvVar1;
  void *_Dst;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  char cVar8;
  undefined4 *puVar9;
  int *piVar10;
  int in_ECX;
  int *piVar11;
  int *piStack_5c;
  int *local_58;
  int local_48 [2];
  float fStack_40;
  float fStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b3e44b;
  pvStack_14 = ExceptionList;
  _DAT_013f08d8 = *(int *)(in_ECX + 0x60) - *(int *)(in_ECX + 0x5c) >> 2;
  ExceptionList = &pvStack_14;
  *(undefined4 *)(in_ECX + 0xa4) = param_2;
  if ((*(int *)(in_ECX + 0xa0) != 0) && (*(char *)(*(int *)(in_ECX + 0xa0) + 0x3a) != '\0')) {
    *(undefined4 *)(in_ECX + 0xa0) = 0;
  }
  *(undefined1 *)(in_ECX + 0x239) = 1;
  pvVar1 = *(void **)(in_ECX + 0x60);
  puVar9 = (undefined4 *)FUN_009a4ac0(local_48,*(undefined4 *)(in_ECX + 0x5c));
  _Dst = (void *)*puVar9;
  if (_Dst != pvVar1) {
    _Size = (*(int *)(in_ECX + 0x60) - (int)pvVar1 >> 2) * 4;
    FID_conflict__memcpy(_Dst,pvVar1,_Size);
    *(void **)(in_ECX + 0x60) = (void *)((int)_Dst + _Size);
  }
  *(undefined1 *)(in_ECX + 0x239) = 0;
  piVar10 = (int *)(**(code **)(*param_1 + 0x4c))();
  fStack_40 = (float)*piVar10;
  fStack_3c = (float)piVar10[1];
  *(undefined4 *)(in_ECX + 0x98) = 0;
  puVar9 = (undefined4 *)FUN_0099a9a0(*(undefined4 *)(in_ECX + 0x30));
  pvVar1 = *(void **)(in_ECX + 0x6c);
  if (pvVar1 != *(void **)(in_ECX + 0x70)) {
    FID_conflict__memcpy(pvVar1,*(void **)(in_ECX + 0x70),0);
    *(void **)(in_ECX + 0x70) = pvVar1;
  }
  puVar2 = (undefined8 *)*param_3;
joined_r0x009a3c6b:
  puVar7 = puVar2;
  if (puVar7 != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(puVar7 + 4);
    uStack_38 = *puVar7;
    uStack_30 = puVar7[1];
    uStack_28 = puVar7[2];
    uStack_20._2_2_ = (undefined2)((uint)*(undefined4 *)(puVar7 + 3) >> 0x10);
    uStack_20._0_1_ = (char)*(undefined4 *)(puVar7 + 3);
    uStack_20._0_2_ = CONCAT11(*(undefined1 *)(in_ECX + 0x11),(char)uStack_20);
    if ((int)uStack_30 == 1) {
      piVar10 = *(int **)(in_ECX + 0xa0);
      cVar8 = (char)uStack_20;
      if (((piVar10 != (int *)0x0) && (*(char *)((int)piVar10 + 0x4f) != '\0')) &&
         ((char)uStack_20 == '\0')) {
        (**(code **)(*piVar10 + 4))(&uStack_38);
        cVar8 = '\0';
        if ((char)uStack_20 != '\0') {
          FUN_009a4930();
          goto joined_r0x009a3c6b;
        }
      }
      if ((*(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) & 0xfffffffcU) == 0) {
        FUN_0099a690();
        cVar8 = (char)uStack_20;
      }
      piVar11 = *(int **)(in_ECX + 0x6c);
      piVar10 = piVar11 + (*(int *)(in_ECX + 0x70) - (int)piVar11 >> 2);
      do {
        if ((cVar8 != '\0') || (piVar11 == piVar10)) goto joined_r0x009a3c6b;
        if ((*(char *)(*piVar11 + 0x4f) != '\0') && (*(char *)(in_ECX + 0x9c) == '\0')) {
          if ((*(char *)(in_ECX + 0x12) == '\0') ||
             (cVar8 = (**(code **)(*(int *)*piVar11 + 8))(), cVar8 != '\0')) {
            (**(code **)(*(int *)*piVar11 + 4))(&uStack_38);
          }
          cVar8 = '\0';
          if ((char)uStack_20 != '\0') {
            if ((char)param_3[3] == '\0') {
              iVar4 = *(int *)((int)puVar7 + 0x1c);
              iVar3 = *(int *)(puVar7 + 4);
              if (iVar4 != 0) {
                *(int *)(iVar4 + 0x20) = iVar3;
              }
              if (iVar3 != 0) {
                *(int *)(iVar3 + 0x1c) = iVar4;
              }
              if (puVar7 == (undefined8 *)*param_3) {
                *param_3 = iVar3;
              }
              if (puVar7 == (undefined8 *)param_3[1]) {
                param_3[1] = iVar4;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            *(undefined1 *)((int)puVar7 + 0x24) = 1;
            goto joined_r0x009a3c6b;
          }
        }
        piVar11 = piVar11 + 1;
      } while( true );
    }
    if ((DAT_01258a92 != '\0') && ((int)uStack_28 == 4)) {
      if (DAT_01258aa4 == 0) {
        local_48[0] = FUN_00aae9af();
        puStack_10 = (undefined1 *)0x0;
        if (local_48[0] == 0) {
          DAT_01258aa4 = 0;
        }
        else {
          DAT_01258aa4 = FUN_009c1ee0();
        }
        puStack_10 = (undefined1 *)0xffffffff;
      }
      *(undefined1 *)(DAT_01258aa4 + 0x55) = 1;
    }
    FUN_0099a9a0(*(undefined4 *)(in_ECX + 0x30));
    piVar10 = (int *)*puVar9;
    if ((char)uStack_20 == '\0') {
      cVar8 = '\0';
      do {
        if (piVar10 == (int *)0x0) break;
        if (((((char)piVar10[3] == '\0') && (*(char *)((int)*(int **)(*piVar10 + 4) + 0x4f) != '\0')
             ) && (*(char *)(in_ECX + 0x9c) == '\0')) && (cVar8 == '\0')) {
          if ((*(char *)(in_ECX + 0x12) == '\0') ||
             (cVar8 = (**(code **)(**(int **)(*piVar10 + 4) + 8))(), cVar8 != '\0')) {
            (**(code **)(**(int **)(*piVar10 + 4) + 4))(&uStack_38);
          }
          cVar8 = (char)uStack_20;
          if ((char)uStack_20 != '\0') {
            if ((char)param_3[3] == '\0') {
              iVar4 = *(int *)((int)puVar7 + 0x1c);
              iVar3 = *(int *)(puVar7 + 4);
              if (iVar4 != 0) {
                *(int *)(iVar4 + 0x20) = iVar3;
              }
              if (iVar3 != 0) {
                *(int *)(iVar3 + 0x1c) = iVar4;
              }
              if (puVar7 == (undefined8 *)*param_3) {
                *param_3 = iVar3;
              }
              if (puVar7 == (undefined8 *)param_3[1]) {
                param_3[1] = iVar4;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            *(undefined1 *)((int)puVar7 + 0x24) = 1;
            break;
          }
        }
        piVar10 = (int *)piVar10[2];
      } while (cVar8 == '\0');
    }
    goto joined_r0x009a3c6b;
  }
  iVar4 = *param_3;
  while (iVar3 = iVar4, iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 0x20);
    if (*(char *)(iVar3 + 0x24) == '\0') {
      *(undefined1 *)(iVar3 + 0x19) = *(undefined1 *)((int)piStack_5c + 0x11);
      (**(code **)(*piStack_5c + 0x70))();
      if (*(char *)(iVar3 + 0x18) != '\0') {
        if ((char)param_3[3] == '\0') {
          iVar4 = *(int *)(iVar3 + 0x1c);
          iVar5 = *(int *)(iVar3 + 0x20);
          if (iVar4 != 0) {
            *(int *)(iVar4 + 0x20) = iVar5;
          }
          if (iVar5 != 0) {
            *(int *)(iVar5 + 0x1c) = iVar4;
          }
          if (iVar3 == *param_3) {
            *param_3 = iVar5;
          }
          if (iVar3 == param_3[1]) {
            param_3[1] = iVar4;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        *(undefined1 *)(iVar3 + 0x24) = 1;
      }
    }
  }
  piVar11 = (int *)piStack_5c[0x17];
  piVar10 = piVar11 + (piStack_5c[0x18] - (int)piVar11 >> 2);
  local_58 = (int *)0x0;
  if ((((char)piStack_5c[0x27] == '\0') && ((char)piStack_5c[0x8e] == '\0')) && (piVar11 != piVar10)
     ) {
    do {
      if ((char)piStack_5c[0x27] != '\0') break;
      piVar6 = (int *)*piVar11;
      if (*(char *)((int)piVar6 + 0x4f) != '\0') {
        (**(code **)(*piVar6 + 0x18))();
        *(char *)((int)piVar6 + 0x39) = (char)piVar6[0xe];
        *(undefined1 *)(piVar6 + 0xe) = 0;
        cVar8 = *(char *)(*piVar11 + 0x4c);
        *(undefined1 *)(*piVar11 + 0x4c) = 0;
        if (cVar8 != '\0') {
          local_58 = (int *)*piVar11;
        }
      }
      piVar11 = piVar11 + 1;
    } while (piVar11 != piVar10);
    if ((local_58 != (int *)0x0) && (*(char *)((int)local_58 + 0x3a) == '\0')) {
      piVar10 = (int *)piStack_5c[0x28];
      if (piVar10 != (int *)0x0) {
        if (*(char *)((int)piVar10 + 0x4d) != '\0') goto LAB_009a4040;
        (**(code **)(*piVar10 + 0x54))();
      }
      (**(code **)(*local_58 + 0x50))();
      piStack_5c[0x28] = (int)local_58;
    }
  }
LAB_009a4040:
  *(undefined1 *)(piStack_5c + 0x27) = 0;
  *(undefined1 *)(piStack_5c + 0x8e) = 0;
  ExceptionList = pvStack_18;
  return;
}

