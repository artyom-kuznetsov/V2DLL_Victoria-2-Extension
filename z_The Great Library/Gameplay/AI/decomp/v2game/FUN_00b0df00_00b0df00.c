// FUN_00b0df00 @ 00b0df00 body=[[00b0df00, 00b0e0fb]]


void FUN_00b0df00(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int local_c;
  int local_8;
  
  uVar1 = in_ECX[5];
  if (uVar1 != 0) {
    local_8 = uVar1 - 1;
    if (local_8 != 0) {
      uVar6 = 1;
      local_c = 0;
      do {
        piVar4 = (int *)(local_c + in_ECX[4]);
        iVar2 = piVar4[1] + *piVar4;
        iVar7 = piVar4[2] - iVar2;
        if (iVar7 != 0) {
          iVar5 = (in_ECX[1] - iVar7) - iVar2;
          if (iVar5 != 0) {
            FID_conflict__memcpy
                      ((void *)(*in_ECX + iVar2 * 8),(void *)(*in_ECX + (iVar7 + iVar2) * 8),
                       iVar5 * 8);
          }
          uVar8 = in_ECX[5];
          in_ECX[1] = in_ECX[1] - iVar7;
          for (uVar3 = uVar6; uVar3 < uVar8; uVar3 = uVar3 + 1) {
            piVar4 = (int *)(in_ECX[4] + uVar3 * 8);
            *piVar4 = *piVar4 - iVar7;
          }
        }
        local_c = local_c + 8;
        uVar6 = uVar6 + 1;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    uVar8 = 0;
    uVar6 = 0;
    if (uVar1 != 0) {
      do {
        uVar3 = *(uint *)(in_ECX[4] + uVar6 * 8);
        if (uVar8 < uVar3) {
          iVar2 = *(int *)(in_ECX[4] + uVar6 * 8 + 4);
          if (iVar2 != 0) {
            FID_conflict__memcpy
                      ((void *)(*in_ECX + uVar8 * 8),(void *)(*in_ECX + uVar3 * 8),iVar2 * 8);
          }
          *(uint *)(in_ECX[4] + uVar6 * 8) = uVar8;
        }
        uVar8 = uVar8 + *(int *)(in_ECX[4] + 4 + uVar6 * 8);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
    uVar1 = in_ECX[1];
    if (uVar8 < uVar1) {
      iVar7 = uVar1 - uVar8;
      iVar2 = (uVar1 - iVar7) - uVar8;
      if (iVar2 != 0) {
        FID_conflict__memcpy
                  ((void *)(*in_ECX + uVar8 * 8),(void *)(*in_ECX + (iVar7 + uVar8) * 8),iVar2 * 8);
      }
      in_ECX[1] = in_ECX[1] - iVar7;
    }
    iVar2 = in_ECX[1];
    if (iVar2 != in_ECX[2]) {
      if (iVar2 == 0) {
        in_ECX[1] = 0;
        in_ECX[2] = 0;
        if (*in_ECX != 0) {
          (*(code *)PTR__free_00f01b10)(*in_ECX);
          *in_ECX = 0;
        }
      }
      else {
        if (*in_ECX == 0) {
          iVar7 = (*(code *)PTR_FUN_00f01b08)(iVar2 * 8,(short)in_ECX[3],4,2,0,0xffffffff);
        }
        else {
          iVar7 = (*(code *)PTR_FUN_00f01b0c)(*in_ECX,iVar2 * 8);
        }
        *in_ECX = iVar7;
        in_ECX[2] = iVar2;
      }
    }
    iVar2 = in_ECX[5];
    if (iVar2 != in_ECX[6]) {
      if (iVar2 == 0) {
        in_ECX[5] = 0;
        in_ECX[6] = 0;
        if (in_ECX[4] != 0) {
          (*(code *)PTR__free_00f01b10)(in_ECX[4]);
          in_ECX[4] = 0;
          return;
        }
      }
      else {
        if (in_ECX[4] != 0) {
          iVar7 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[4],iVar2 * 8);
          in_ECX[6] = iVar2;
          in_ECX[4] = iVar7;
          return;
        }
        iVar7 = (*(code *)PTR_FUN_00f01b08)(iVar2 * 8,(short)in_ECX[7],4,2,0,0xffffffff);
        in_ECX[4] = iVar7;
        in_ECX[6] = iVar2;
      }
    }
  }
  return;
}

