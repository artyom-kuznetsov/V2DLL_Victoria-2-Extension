// FUN_00b07b70 @ 00b07b70 body=[[00b07b70, 00b07e33]]


void FUN_00b07b70(float param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  bool bVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  iVar2 = *(int *)(in_ECX + 0x8c);
  fVar6 = (float10)param_1;
  fVar8 = (float10)*(float *)(in_ECX + 0x24) * fVar6;
  if (iVar2 == 0) {
    *(float *)(in_ECX + 0x18) = (float)fVar8;
    *(float *)(in_ECX + 0x38) = (float)(ABS(fVar6) + (float10)*(float *)(in_ECX + 0x38));
    return;
  }
  uVar3 = *(uint *)(in_ECX + 0x74);
  bVar4 = false;
  if (*(int *)(in_ECX + 0xa0) == 0) {
    *(float *)(in_ECX + 0x18) = (float)fVar8;
    fVar8 = fVar8 + (float10)*(float *)(in_ECX + 0x14);
    fVar1 = *(float *)(iVar2 + 0x28);
    fVar7 = (float10)fVar1;
    *(float *)(in_ECX + 0x38) = (float)(ABS(fVar6) + (float10)*(float *)(in_ECX + 0x38));
    fVar6 = (float10)0;
    if (uVar3 == 0xffffffff) {
      if (fVar7 < fVar8) {
        *(int *)(in_ECX + 0x70) = *(int *)(in_ECX + 0x70) + 1;
        bVar4 = true;
        if (fVar7 <= fVar6) {
LAB_00b07c20:
          bVar4 = true;
          *(float *)(in_ECX + 0x14) = (float)fVar6;
          fVar8 = (float10)*(float *)(*(int *)(in_ECX + 0x8c) + 0x28) - fVar6;
          goto LAB_00b07e0d;
        }
        fVar8 = (float10)FUN_00b31cba();
      }
      for (; fVar8 < (float10)0; fVar8 = (float10)fVar1 + fVar8) {
      }
    }
    else {
      if (fVar7 < fVar8) {
        *(int *)(in_ECX + 0x70) = *(int *)(in_ECX + 0x70) + 1;
        bVar4 = true;
        if (*(uint *)(in_ECX + 0x70) < uVar3) {
          *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) & 0xefff;
        }
        else if ((*(ushort *)(in_ECX + 0x9c) & 0x100) != 0) {
          *(uint *)(in_ECX + 0x70) = uVar3 - 1;
          bVar4 = false;
          *(float *)(in_ECX + 0x18) = (float)fVar6;
          fVar8 = fVar7;
          if ((*(ushort *)(in_ECX + 0x9c) >> 0xc & 1) == 0) {
            FUN_00b10130(*(undefined4 *)(in_ECX + 0x14),*(float *)(iVar2 + 0x28) + 1e-05,
                         *(undefined4 *)(in_ECX + 0x90),in_ECX);
            *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) | 0x1000;
            (**(code **)(*(int *)**(undefined4 **)(DAT_00f209e0 + 0x3c) + 0x28))();
            fVar8 = (float10)fVar1;
          }
          goto LAB_00b07cec;
        }
        if (fVar7 <= fVar6) goto LAB_00b07c20;
        fVar8 = (float10)FUN_00b31cba();
      }
LAB_00b07cec:
      fVar6 = (float10)0;
      if (fVar8 < fVar6) {
        *(float *)(in_ECX + 0x14) = (float)fVar6;
        fVar8 = (float10)*(float *)(*(int *)(in_ECX + 0x8c) + 0x28) - fVar6;
        goto LAB_00b07e0d;
      }
    }
    *(float *)(in_ECX + 0x14) = (float)fVar8;
    fVar8 = (float10)*(float *)(*(int *)(in_ECX + 0x8c) + 0x28) - fVar8;
    goto LAB_00b07e0d;
  }
  *(float *)(in_ECX + 0x18) = (float)-fVar8;
  fVar8 = -fVar8 + (float10)*(float *)(in_ECX + 0x14);
  fVar7 = (float10)*(float *)(iVar2 + 0x28);
  *(float *)(in_ECX + 0x38) = (float)(ABS(fVar6) + (float10)*(float *)(in_ECX + 0x38));
  fVar6 = (float10)0;
  if (uVar3 == 0xffffffff) {
    fVar9 = fVar8;
    if (fVar8 < fVar6) {
      *(int *)(in_ECX + 0x70) = *(int *)(in_ECX + 0x70) + 1;
      fVar9 = fVar7 + fVar8;
    }
    bVar4 = fVar8 < fVar6;
    if (fVar7 < fVar9) {
      do {
        fVar9 = (fVar7 + fVar7) - fVar9;
      } while (fVar7 < fVar9);
    }
LAB_00b07dff:
    bVar5 = fVar6 <= fVar9;
    fVar8 = fVar6;
    fVar6 = fVar9;
    if (bVar5) {
LAB_00b07e08:
      fVar8 = fVar6;
    }
  }
  else if (fVar8 < fVar6) {
    *(int *)(in_ECX + 0x70) = *(int *)(in_ECX + 0x70) + 1;
    bVar4 = true;
    if (*(uint *)(in_ECX + 0x70) < uVar3) {
      *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) & 0xefff;
LAB_00b07df9:
      fVar9 = fVar7 + fVar8;
      goto LAB_00b07dff;
    }
    if ((*(ushort *)(in_ECX + 0x9c) & 0x100) == 0) goto LAB_00b07df9;
    bVar4 = false;
    *(uint *)(in_ECX + 0x70) = uVar3 - 1;
    *(float *)(in_ECX + 0x18) = (float)fVar6;
    if ((*(ushort *)(in_ECX + 0x9c) >> 0xc & 1) == 0) {
      FUN_00b10130((float)fVar6,*(undefined4 *)(in_ECX + 0x14),*(undefined4 *)(in_ECX + 0x90),in_ECX
                  );
      *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) | 0x1000;
      (**(code **)(*(int *)**(undefined4 **)(DAT_00f209e0 + 0x3c) + 0x28))();
      fVar8 = (float10)(float)fVar6;
      goto LAB_00b07e0a;
    }
    goto LAB_00b07e08;
  }
LAB_00b07e0a:
  *(float *)(in_ECX + 0x14) = (float)fVar8;
LAB_00b07e0d:
  *(float *)(in_ECX + 0x48) = (float)fVar8;
  if (bVar4) {
    (**(code **)(*(int *)**(undefined4 **)(DAT_00f209e0 + 0x3c) + 0x1c))();
  }
  return;
}

