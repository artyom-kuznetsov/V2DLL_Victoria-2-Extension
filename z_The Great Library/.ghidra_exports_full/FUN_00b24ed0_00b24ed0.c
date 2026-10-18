// FUN_00b24ed0 @ 00b24ed0 body=[[00b24ed0, 00b24efc] [00b24f00, 00b24f39] [00b24f40, 00b2500b]]


void FUN_00b24ed0(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int local_10;
  int local_8;
  
  iVar3 = FUN_00b24df0(param_1,param_2,0);
  if (iVar3 != -1) {
    pcVar7 = param_2;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_10 = (int)pcVar7 - (int)(param_2 + 1);
    if ((0 < local_10) && (param_2[local_10 + -1] == '/')) {
      local_10 = local_10 + -1;
    }
    iVar2 = *(int *)(param_1 + 0x10);
    iVar6 = (uint)(0 < local_10) + local_10;
    if (iVar3 < iVar2) {
      while ((iVar9 = iVar3 * 0x40 + *(int *)(param_1 + 0x14), local_10 == 0 ||
             ((iVar4 = FUN_00b234a0(iVar9,param_2,local_10), iVar4 == 0 &&
              (*(char *)(iVar9 + local_10) == '/'))))) {
        pcVar7 = (char *)(iVar9 + iVar6);
        iVar4 = FUN_00ab4790(pcVar7,0x2f);
        if (iVar4 == 0) {
          pcVar11 = pcVar7;
          do {
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar1 != '\0');
          iVar10 = (int)pcVar11 - (int)(pcVar7 + 1);
        }
        else {
          iVar10 = iVar4 - (int)pcVar7;
        }
        FUN_00b27cf0(param_4,param_6,param_5,pcVar7);
        iVar10 = iVar10 + iVar6;
        iVar3 = iVar3 + 1;
        if (iVar2 <= iVar3) {
          return;
        }
        local_8 = iVar3 * 0x40;
        while (iVar4 != 0) {
          iVar8 = *(int *)(param_1 + 0x14) + local_8;
          iVar5 = FUN_00b234a0(iVar9,iVar8,iVar10);
          if ((iVar5 != 0) || (*(char *)(iVar8 + iVar10) != '/')) break;
          local_8 = local_8 + 0x40;
          iVar3 = iVar3 + 1;
          if (iVar2 <= iVar3) {
            return;
          }
        }
        if (iVar2 <= iVar3) {
          return;
        }
      }
    }
  }
  return;
}

