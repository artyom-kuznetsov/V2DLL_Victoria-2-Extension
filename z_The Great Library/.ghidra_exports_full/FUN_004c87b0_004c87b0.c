// FUN_004c87b0 @ 004c87b0 body=[[004c87b0, 004c8a6e]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c87b0(float *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int unaff_ESI;
  int iVar8;
  int *piVar9;
  undefined8 local_1c;
  float local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar5 = (int)param_1;
  iVar8 = 0;
  do {
    iVar1 = iVar8 + 1;
    if (iVar1 < 6) {
      iVar4 = (int)param_1 * 7;
      local_10 = iVar4 + iVar8;
      local_c = *(int *)(unaff_ESI + 0x1e0 + local_10 * 8);
      iVar7 = iVar1;
      do {
        if ((local_c == 0) && (*(int *)(unaff_ESI + 0x1e0 + (iVar4 + iVar7) * 8) != 0)) {
          iVar2 = iVar4 + 0x3c + iVar7;
          *(undefined4 *)(unaff_ESI + (iVar4 + 0x3c + iVar8) * 8) =
               *(undefined4 *)(unaff_ESI + iVar2 * 8);
          *(undefined4 *)(unaff_ESI + 0x1e4 + local_10 * 8) =
               *(undefined4 *)(unaff_ESI + 0x1e4 + (iVar4 + iVar7) * 8);
          *(undefined4 *)(unaff_ESI + iVar2 * 8) = 0;
          *(undefined4 *)(unaff_ESI + 0x1e4 + (iVar4 + iVar7) * 8) = 0;
          break;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 6);
    }
    iVar8 = iVar1;
    if (4 < iVar1) {
      if ((_DAT_013f19b8 & 1) == 0) {
        _DAT_013f19b8 = _DAT_013f19b8 | 1;
        DAT_013f19ac = -2.0;
        DAT_013f19b0 = DAT_00f177e0;
        DAT_013f19b4 = DAT_00f092fc;
      }
      param_1 = (float *)&DAT_00f0b074;
      piVar9 = (int *)(unaff_ESI + 0x1e4 + iVar5 * 0x38);
      local_8 = 7;
      do {
        if (((piVar9[-1] != 0) && (*piVar9 != 0)) &&
           (cVar6 = (**(code **)(*(int *)*piVar9 + 0x3c))(), cVar6 != '\0')) {
          local_14 = *(float *)(unaff_ESI + 0x108 + iVar5 * 0xc);
          local_1c = *(undefined8 *)(unaff_ESI + 0x100 + iVar5 * 0xc);
          cVar6 = (**(code **)(*(int *)piVar9[-1] + 0x38))();
          if (cVar6 == '\0') {
            local_14 = param_1[0x16] + local_14;
            local_1c = CONCAT44(param_1[0x15] + local_1c._4_4_ + 2.3,param_1[0x14] + (float)local_1c
                               );
          }
          else {
            fVar3 = *param_1;
            local_1c = CONCAT44(DAT_013f19b0 +
                                ((fVar3 + local_1c._4_4_) - fVar3) + fVar3 * 4.0 + 4.0,
                                DAT_013f19ac + param_1[-1] + (float)local_1c);
            local_14 = DAT_013f19b4 + param_1[1] + local_14;
          }
          (**(code **)(*(int *)*piVar9 + 0x168))(&local_1c);
          param_1 = param_1 + 3;
        }
        piVar9 = piVar9 + 2;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
      return;
    }
  } while( true );
}

