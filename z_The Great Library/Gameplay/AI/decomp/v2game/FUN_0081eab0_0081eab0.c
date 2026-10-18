// FUN_0081eab0 @ 0081eab0 body=[[0081eab0, 0081ec86]]


int FUN_0081eab0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5856b;
  local_10 = ExceptionList;
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x34) * 4);
  iVar10 = 0;
  param_1 = 0;
  ExceptionList = &local_10;
  if (DAT_0125fdd8 == 0) {
    ExceptionList = &local_10;
    iVar3 = FUN_00aae9af(0x1c);
    local_8 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_008b0060();
    }
    FUN_005c2810(uVar4);
  }
  local_18 = *(int *)(DAT_0125fdd8 + 0x10) - *(int *)(DAT_0125fdd8 + 0xc) >> 2;
  if (0 < local_18) {
    piVar7 = *(int **)(*(int *)(iVar2 + 0xbcc) + 0x310);
    do {
      iVar3 = *piVar7;
      if (*(int *)(iVar3 + 0x34) == param_2) {
        pbVar5 = (byte *)(iVar3 + 8);
        if (0xf < *(uint *)(iVar3 + 0x1c)) {
          pbVar5 = *(byte **)pbVar5;
        }
        pcVar8 = "monitor";
        do {
          bVar1 = *pbVar5;
          bVar11 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_0081eb81:
            iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_0081eb86;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar11 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_0081eb81;
          pbVar5 = pbVar5 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_0081eb86:
        if ((((iVar6 != 0) && (*(char *)(iVar3 + 0x3a) != '\0')) &&
            (iVar6 = *(int *)(iVar3 + 0x24), 2 < iVar6)) &&
           ((*(char *)(iVar6 + *(int *)(*(int *)(iVar2 + 0xbcc) + 0x2dc)) != '\0' &&
            ((param_3 == -1 || (*(int *)(iVar3 + 0xa0) <= param_3)))))) {
          if (*(int *)(iVar2 + 0x154) - *(int *)(iVar2 + 0x150) >> 2 < iVar6) {
            iVar9 = 0;
LAB_0081ebf7:
            if (*(int *)(iVar2 + 0x144) - *(int *)(iVar2 + 0x140) >> 2 < iVar6) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(*(int *)(iVar2 + 0x140) + iVar6 * 4);
            }
            if (iVar9 <= iVar6) goto LAB_0081ec5f;
          }
          else {
            iVar9 = *(int *)(*(int *)(iVar2 + 0x150) + iVar6 * 4);
            if (-1 < iVar9) goto LAB_0081ebf7;
          }
          uVar12 = __allmul(*(int *)(iVar3 + 0x244),*(int *)(iVar3 + 0x244) >> 0x1f,1000,0);
          iVar6 = __alldiv(uVar12,1000,0);
          iVar6 = __alldiv((longlong)*(int *)(iVar3 + 0xb4) * (longlong)iVar6,1000,0);
          if (iVar10 < iVar6) {
            iVar10 = iVar6;
            param_1 = iVar3;
          }
        }
      }
LAB_0081ec5f:
      piVar7 = piVar7 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  ExceptionList = local_10;
  return param_1;
}

