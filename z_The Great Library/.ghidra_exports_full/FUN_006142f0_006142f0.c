// FUN_006142f0 @ 006142f0 body=[[006142f0, 006144be] [006144c4, 00614516] [0061451a, 006145bf]]


void FUN_006142f0(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  code *pcVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float10 fVar8;
  int local_64;
  int iStack_58;
  int iStack_54;
  uint auStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  uint auStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b63410;
  local_14 = ExceptionList;
  if ((*(int *)(in_ECX + 0x80) - *(int *)(in_ECX + 0x7c) & 0xffffffe0U) != 0) {
    fVar1 = *(float *)(in_ECX + 0x44);
    ExceptionList = &local_14;
    fVar8 = (float10)(**(code **)(**(int **)(in_ECX + 0x40) + 0x14))();
    *(float *)(in_ECX + 0x44) = (float)fVar8;
    pfVar7 = (float *)(in_ECX + 0x120);
    puVar6 = (undefined4 *)(in_ECX + 0x90);
    local_64 = 0x23;
    do {
      iStack_58 = (int)pfVar7[-1];
      fVar2 = *pfVar7 - ((float)fVar8 - fVar1) * *(float *)(in_ECX + 0x50);
      *pfVar7 = fVar2;
      iStack_54 = (int)fVar2;
      (**(code **)(*(int *)*puVar6 + 0xb4))(&iStack_58);
      if ((float)*(int *)(in_ECX + 0x74) <= *pfVar7) {
        if (*pfVar7 < (float)*(int *)(in_ECX + 0x78)) {
          pcVar5 = *(code **)(*(int *)*puVar6 + 0x34);
          goto LAB_00614407;
        }
      }
      else {
        pcVar5 = *(code **)(*(int *)*puVar6 + 0x38);
LAB_00614407:
        (*pcVar5)();
      }
      fVar2 = *pfVar7;
      if (((float)*(int *)(in_ECX + 0x74) <= fVar2) ||
         (*(int *)(in_ECX + 0x80) - *(int *)(in_ECX + 0x7c) >> 5 <= *(int *)(in_ECX + 0x8c))) {
        iVar4 = *(int *)(in_ECX + 0x74) + -100;
        if (fVar2 < (float)iVar4) {
          *pfVar7 = (float)iVar4;
        }
      }
      else {
        *pfVar7 = fVar2 + 700.0;
        (**(code **)(*(int *)*puVar6 + 0x30))();
        if (*(char *)(*(int *)(in_ECX + 0x8c) * 0x20 + 0x1c + *(int *)(in_ECX + 0x7c)) == '\0') {
          uStack_3c = 0xf;
          uStack_40 = 0;
          auStack_50[0] = auStack_50[0] & 0xffffff00;
          FUN_00409350("CreditsText",0xb);
          uStack_c = 1;
          uVar3 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x3c))(auStack_50);
          uStack_c = 0xffffffff;
          *puVar6 = uVar3;
          if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(auStack_50[0]);
          }
          uStack_3c = 0xf;
          uStack_40 = 0;
          auStack_50[0] = auStack_50[0] & 0xffffff00;
        }
        else {
          uStack_20 = 0xf;
          uStack_24 = 0;
          auStack_34[0] = auStack_34[0] & 0xffffff00;
          FUN_00409350("CreditsTextBold",0xf);
          uStack_c = 0;
          uVar3 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x3c))(auStack_34);
          uStack_c = 0xffffffff;
          *puVar6 = uVar3;
          if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(auStack_34[0]);
          }
        }
        uStack_c = 0xffffffff;
        iVar4 = *(int *)(in_ECX + 0x8c) * 0x20 + *(int *)(in_ECX + 0x7c);
        *(int *)(in_ECX + 0x8c) = *(int *)(in_ECX + 0x8c) + 1;
        FUN_00408ed0(iVar4,0,0xffffffff);
        FUN_00a5ecc0(iVar4,0);
      }
      pfVar7 = pfVar7 + 2;
      puVar6 = puVar6 + 1;
      local_64 = local_64 + -1;
    } while (local_64 != 0);
    (**(code **)(**(int **)(in_ECX + 0x234) + 0x2c))();
  }
  ExceptionList = local_14;
  return;
}

