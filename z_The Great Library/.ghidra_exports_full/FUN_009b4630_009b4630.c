// FUN_009b4630 @ 009b4630 body=[[009b4630, 009b4784] [009b4790, 009b4c9c]]


/* WARNING: Removing unreachable block (ram,0x009b4c2a) */

void FUN_009b4630(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int in_ECX;
  short sVar6;
  ushort uVar7;
  int iVar8;
  int unaff_EDI;
  undefined4 *puVar9;
  float10 fVar10;
  undefined8 uVar11;
  int local_3c;
  undefined4 local_38;
  float fStack_34;
  int iStack_30;
  float fStack_2c;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 local_18 [20];
  
  iVar8 = 0;
  if (*(char *)(in_ECX + 0x146) != '\0') {
    if ((*(int *)(in_ECX + 0x104) != 0) && (*(int *)(in_ECX + 0xc0) != 0)) {
      (**(code **)(**(int **)(in_ECX + 0x104) + 100))(*(int *)(in_ECX + 0xc0));
    }
    FUN_009a63f0();
    uVar7 = *(ushort *)(in_ECX + 0xf0);
    local_38 = (uint)uVar7;
    if (*(int *)(in_ECX + 0x68) == 0) {
      return;
    }
    puVar9 = *(undefined4 **)(in_ECX + 0x60);
    local_3c = 0;
    for (; puVar9 != (undefined4 *)0x0; puVar9 = (undefined4 *)puVar9[2]) {
      iVar8 = (**(code **)(*(int *)*puVar9 + 0x14))(&fStack_2c);
      local_3c = local_3c + *(short *)(iVar8 + 2);
    }
    if (0 < *(int *)(in_ECX + 0xec)) {
      local_3c = local_3c + (*(int *)(in_ECX + 0xec) + -1) * *(int *)(in_ECX + 0x68);
    }
    fStack_34 = 0.0;
    if (*(int *)(in_ECX + 0x104) != 0) {
      fVar10 = (float10)(**(code **)(*(int *)(*(int *)(in_ECX + 0x104) + 0x54) + 0x10))();
      fStack_34 = (float)fVar10;
    }
    if ((int)*(short *)(in_ECX + 0xea) - *(int *)(in_ECX + 0xf0) < local_3c) {
      if (*(int *)(in_ECX + 0x104) != 0) {
        (**(code **)(**(int **)(in_ECX + 0x104) + 0x34))();
      }
      (**(code **)(*(int *)**(undefined4 **)(in_ECX + 0x60) + 0x14))(&fStack_2c);
      puVar9 = *(undefined4 **)(in_ECX + 0x60);
      iVar8 = (*(int *)(in_ECX + 0xf0) * 2 - (int)*(short *)(in_ECX + 0xea)) + local_3c;
      local_3c = 0;
      iStack_30 = 0;
      if (puVar9 != (undefined4 *)0x0) {
        fStack_2c = (float)iVar8 * fStack_34;
        do {
          if (*(char *)(in_ECX + 0x146) != '\0') {
            if (fStack_2c <= (float)local_3c) {
              iVar8 = *(int *)*puVar9;
              if ((fStack_2c + (float)(int)*(short *)(in_ECX + 0xea)) -
                  (float)(*(int *)(in_ECX + 0xf0) * 2) <= (float)local_3c) {
                (**(code **)(iVar8 + 0x30))();
                iVar8 = *(int *)(in_ECX + 0x134);
                puVar2 = (undefined4 *)FUN_00aae9af(0x10);
                if (puVar2 == (undefined4 *)0x0) {
                  puVar2 = (undefined4 *)0x0;
                }
                else {
                  *puVar2 = *puVar9;
                  puVar2[1] = iVar8;
                  puVar2[2] = 0;
                  *(undefined1 *)(puVar2 + 3) = 0;
                }
                iVar3 = *(int *)(in_ECX + 0x138);
                *(undefined4 **)(in_ECX + 0x134) = puVar2;
                *(int *)(in_ECX + 0x138) = iVar3 + 1;
                if (iVar3 == 0) {
                  *(undefined4 **)(in_ECX + 0x130) = puVar2;
                }
                else {
                  *(undefined4 **)(iVar8 + 8) = puVar2;
                }
              }
              else {
                sVar6 = uVar7 + *(short *)(in_ECX + 0xec);
                local_38 = CONCAT22(sVar6,(undefined2)local_38);
                (**(code **)(iVar8 + 8))(local_38);
                iVar8 = (**(code **)(*(int *)*puVar9 + 0x14))(auStack_28);
                uVar7 = sVar6 + *(short *)(iVar8 + 2);
                (**(code **)(*(int *)*puVar9 + 0x28))();
                iVar8 = (**(code **)(*(int *)*puVar9 + 0x14))(auStack_28);
                unaff_EDI = unaff_EDI + *(short *)(iVar8 + 2) + *(int *)(in_ECX + 0xec);
                iVar8 = (**(code **)(*(int *)*puVar9 + 0x14))(auStack_28);
                iStack_30 = iStack_30 + *(short *)(iVar8 + 2) + *(int *)(in_ECX + 0xec);
                if ((int)*(short *)(in_ECX + 0xea) + *(int *)(in_ECX + 0xf0) * -2 < iStack_30) {
                  (**(code **)(*(int *)*puVar9 + 0x30))(unaff_EDI);
                }
              }
            }
            else {
              (**(code **)(*(int *)*puVar9 + 0x30))();
              iVar8 = *(int *)(in_ECX + 0x134);
              puVar2 = (undefined4 *)FUN_00aae9af(0x10);
              if (puVar2 == (undefined4 *)0x0) {
                puVar2 = (undefined4 *)0x0;
              }
              else {
                *puVar2 = *puVar9;
                puVar2[1] = iVar8;
                puVar2[2] = 0;
                *(undefined1 *)(puVar2 + 3) = 0;
              }
              iVar3 = *(int *)(in_ECX + 0x138);
              *(undefined4 **)(in_ECX + 0x134) = puVar2;
              *(int *)(in_ECX + 0x138) = iVar3 + 1;
              if (iVar3 == 0) {
                *(undefined4 **)(in_ECX + 0x130) = puVar2;
              }
              else {
                *(undefined4 **)(iVar8 + 8) = puVar2;
              }
              iVar8 = (**(code **)(*(int *)*puVar9 + 0x14))(auStack_28);
              local_3c = local_3c + *(short *)(iVar8 + 2) + *(int *)(in_ECX + 0xec);
            }
          }
          puVar9 = (undefined4 *)puVar9[2];
        } while (puVar9 != (undefined4 *)0x0);
      }
    }
    else {
      if ((*(int *)(in_ECX + 0x104) != 0) && (*(char *)(in_ECX + 0x140) != '\0')) {
        (**(code **)(**(int **)(in_ECX + 0x104) + 0x38))();
      }
      for (puVar9 = *(undefined4 **)(in_ECX + 0x60); puVar9 != (undefined4 *)0x0;
          puVar9 = (undefined4 *)puVar9[2]) {
        sVar6 = uVar7 + *(short *)(in_ECX + 0xec);
        local_38 = CONCAT22(sVar6,(undefined2)local_38);
        (**(code **)(*(int *)*puVar9 + 8))(local_38);
        iVar8 = (**(code **)(*(int *)*puVar9 + 0x14))(auStack_20);
        uVar7 = sVar6 + *(short *)(iVar8 + 2);
        (**(code **)(*(int *)*puVar9 + 0x28))();
      }
    }
    for (puVar9 = *(undefined4 **)(in_ECX + 0x60); puVar9 != (undefined4 *)0x0;
        puVar9 = (undefined4 *)puVar9[2]) {
      if (*(int *)(in_ECX + 0xc0) != 0) {
        (**(code **)(*(int *)*puVar9 + 0x48))();
        (**(code **)(*(int *)*puVar9 + 0x44))(*(undefined4 *)(in_ECX + 0xc0));
      }
    }
    goto LAB_009b4ba5;
  }
  if (*(int *)(in_ECX + 0x68) == 0) {
    if (*(int *)(in_ECX + 0x104) == 0) {
      return;
    }
    (**(code **)(**(int **)(in_ECX + 0x104) + 0x38))();
    return;
  }
  if (*(int *)(in_ECX + 0x104) != 0) {
    if (*(int *)(in_ECX + 0xc0) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x104) + 100))(*(int *)(in_ECX + 0xc0));
    }
    iVar3 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x104) + 0x54) + 0x18))(local_18);
    if (*(int *)(iVar3 + 4) < 1000) {
      if (*(int *)(in_ECX + 0x104) != 0) {
        pcVar4 = *(code **)(**(int **)(in_ECX + 0x104) + 0x38);
        goto LAB_009b4ab9;
      }
    }
    else if (*(char *)(in_ECX + 0x53) != '\0') {
      FUN_009cceb0();
      pcVar4 = *(code **)(**(int **)(in_ECX + 0x104) + 0x34);
LAB_009b4ab9:
      (*pcVar4)();
    }
  }
  local_38 = CONCAT22(*(undefined2 *)(in_ECX + 0xf0),*(undefined2 *)(in_ECX + 0xf0));
  local_3c = 0;
  if (*(int *)(in_ECX + 0x104) != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x104) + 0x54) + 0x10))();
    local_3c = FUN_00b31c00();
    if (*(char *)(*(int *)(in_ECX + 0x104) + 0x4f) == '\0') {
      local_3c = 0;
    }
  }
  iVar3 = (**(code **)(*(int *)**(undefined4 **)(in_ECX + 0x60) + 0x14))(auStack_1c);
  fStack_2c = (float)(int)*(short *)(iVar3 + 2);
  if (*(char *)(in_ECX + 0x53) != '\0') {
    uVar1 = local_38;
    for (puVar9 = *(undefined4 **)(in_ECX + 0x60); puVar9 != (undefined4 *)0x0;
        puVar9 = (undefined4 *)puVar9[2]) {
      if ((iVar8 < local_3c) || (*(int *)(in_ECX + 0x150) + local_3c <= iVar8)) {
        pcVar4 = *(code **)(*(int *)*puVar9 + 0x30);
        local_38 = uVar1;
      }
      else {
        (**(code **)(*(int *)*puVar9 + 8))(uVar1);
        local_38._2_2_ = (short)((uint)uVar1 >> 0x10);
        local_38._0_2_ = (undefined2)uVar1;
        local_38 = CONCAT22(local_38._2_2_ + fStack_2c._0_2_,(undefined2)local_38);
        pcVar4 = *(code **)(*(int *)*puVar9 + 0x28);
      }
      (*pcVar4)();
      iVar8 = iVar8 + 1;
      uVar1 = local_38;
    }
  }
  for (puVar9 = *(undefined4 **)(in_ECX + 0x60); puVar9 != (undefined4 *)0x0;
      puVar9 = (undefined4 *)puVar9[2]) {
    if ((*(int *)(in_ECX + 0xc0) != 0) && (*(char *)(in_ECX + 0x101) == '\0')) {
      (**(code **)(*(int *)*puVar9 + 0x48))();
      (**(code **)(*(int *)*puVar9 + 0x44))(*(undefined4 *)(in_ECX + 0xc0));
    }
  }
LAB_009b4ba5:
  if (*(int *)(in_ECX + 0x104) != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x104) + 0x260) + 0x80))();
    (**(code **)(**(int **)(in_ECX + 0x104) + 100))(*(undefined4 *)(in_ECX + 0xc0));
  }
  if ((*(int *)(in_ECX + 0x104) != 0) && (*(char *)(in_ECX + 0x146) == '\0')) {
    uVar5 = *(int *)(in_ECX + 0x14c) - *(int *)(in_ECX + 0x150);
    iVar8 = (((int)uVar5 < 0) - 1 & uVar5) * 1000;
    if ((iVar8 < -0x189373) || (0x20c49a < iVar8)) {
      uVar11 = __allmul(iVar8,iVar8 >> 0x1f,1000,0);
      fStack_2c = (float)((ulonglong)uVar11 >> 0x20);
      __alldiv(uVar11,1000,0);
    }
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x104) + 0x54) + 0x14))();
  }
  return;
}

